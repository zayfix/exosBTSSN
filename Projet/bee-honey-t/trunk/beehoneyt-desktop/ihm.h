#ifndef IHM_H
#define IHM_H

#include <QMainWindow>

class nouvelleRuche;
class reglageRuche;

namespace Ui {
class ihm;
}

class ihm : public QMainWindow
{
    Q_OBJECT

public:
    explicit ihm(QWidget *parent = nullptr);
    ~ihm();

private slots:
    void on_pushButton_ruches_clicked();

    void on_pushButton_mesures_clicked();

    void on_pushButton_tableaux_clicked();

    void on_pushButton_graphiques_clicked();

    void on_pushButton_alertes_clicked();

    void on_pushButton_nouvelle_ruche_clicked();

    void on_pushButton_reglage_clicked();

    void on_pushButton_supprimer_ruche_clicked();

private:
    Ui::ihm *ui;
    nouvelleRuche *nouvelleRucheIHM;
    reglageRuche *reglageRucheIHM;
};

#endif // IHM_H

typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_7__ {int iobase; int irq; int atm_dev; int housekeeping; } ;
typedef TYPE_1__ hrz_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct pci_dev*) ;
 TYPE_1__* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_2)
{
 hrz_dev *VAR_3;

 VAR_3 = FUNC_7(VAR_2);

 FUNC_0(VAR_0, "closing %p (atm_dev = %p)", VAR_3, VAR_3->atm_dev);
 FUNC_2(&VAR_3->housekeeping);
 FUNC_4(VAR_3);
 FUNC_1(VAR_3->atm_dev);
 FUNC_3(VAR_3->irq, VAR_3);
 FUNC_8(VAR_3->iobase, VAR_1);
 FUNC_5(VAR_3);

 FUNC_6(VAR_2);
}

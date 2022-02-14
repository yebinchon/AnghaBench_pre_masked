
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct amb_dev {int atm_dev; int irq; int housekeeping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct amb_dev*,int ) ;
 int FUNC_1 (struct amb_dev*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct amb_dev*) ;
 int FUNC_5 (struct amb_dev*) ;
 int FUNC_6 (int ,struct amb_dev*) ;
 int FUNC_7 (struct amb_dev*) ;
 int FUNC_8 (struct amb_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 struct amb_dev* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_2)
{
 struct amb_dev *VAR_3;

 VAR_3 = FUNC_10(VAR_2);

 FUNC_0(VAR_0|VAR_1, "closing %p (atm_dev = %p)", VAR_3, VAR_3->atm_dev);
 FUNC_3(&VAR_3->housekeeping);

 FUNC_5(VAR_3);
 FUNC_7(VAR_3);
 FUNC_1(VAR_3, 0);
 FUNC_6(VAR_3->irq, VAR_3);
 FUNC_9(VAR_2);
 FUNC_4(VAR_3);
 FUNC_2(VAR_3->atm_dev);
 FUNC_8(VAR_3);
 FUNC_11(VAR_2, 1);
}

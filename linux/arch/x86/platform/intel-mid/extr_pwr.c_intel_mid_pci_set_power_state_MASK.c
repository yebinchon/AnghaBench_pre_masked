
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mid_pwr {scalar_t__ available; } ;
typedef int pci_power_t ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct mid_pwr*,struct pci_dev*,int ) ;
 struct mid_pwr* VAR_0 ;
 int FUNC_2 () ;

int FUNC_3(struct pci_dev *VAR_1, pci_power_t VAR_2)
{
 struct mid_pwr *VAR_3 = VAR_0;
 int VAR_4 = 0;

 FUNC_2();

 if (VAR_3 && VAR_3->available)
  VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
 FUNC_0(&VAR_1->dev, "set_power_state() returns %d\n", VAR_4);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dn*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dn* FUNC_5 (struct pci_dev*) ;

void FUNC_6(struct pci_dev *VAR_1)
{
 struct pci_dn *VAR_2 = FUNC_5(VAR_1);

 if (!VAR_2 || FUNC_3(VAR_0))
  return;

 FUNC_0(&VAR_1->dev, "EEH: Setting up device\n");
 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
}

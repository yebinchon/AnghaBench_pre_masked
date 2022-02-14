
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int irq; } ;


 scalar_t__ FUNC_0 (struct pci_dev*,int) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{

 if (!VAR_0->irq) {
  FUNC_2(&VAR_0->dev, "rtas_msi: no LSI, nothing to do.\n");
  return;
 }


 if (FUNC_0(VAR_0, 1) && FUNC_1(VAR_0, 1)) {
  FUNC_2(&VAR_0->dev, "rtas_msi: no req#msi/x, nothing to do.\n");
  return;
 }

 FUNC_2(&VAR_0->dev, "rtas_msi: disabling existing MSI.\n");
 FUNC_3(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skd_device {int * msix_entries; struct pci_dev* pdev; } ;
struct pci_dev {int irq; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct skd_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_4(struct skd_device *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;

 if (VAR_1->msix_entries) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   FUNC_0(&VAR_2->dev, FUNC_3(VAR_2, VAR_3),
     VAR_1);
  }

  FUNC_1(VAR_1->msix_entries);
  VAR_1->msix_entries = ((void*)0);
 } else {
  FUNC_0(&VAR_2->dev, VAR_2->irq, VAR_1);
 }

 FUNC_2(VAR_2);
}

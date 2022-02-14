
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int irq; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pci_dev*,int ,int*) ;
 int FUNC_4 (int,int,int,char*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1)
{
 int VAR_2;
 int VAR_3 = 1;
 int VAR_4;
 u8 VAR_5;

 VAR_2 = FUNC_3(VAR_1, VAR_0, &VAR_5);
 if (VAR_2 < 0) {
  FUNC_1(&VAR_1->dev, "Xen PCI: failed to read interrupt line: %d\n",
    VAR_2);
  return VAR_2;
 }

 VAR_4 = VAR_5;

 if (VAR_5 < FUNC_2())
  VAR_3 = 0;

 VAR_2 = FUNC_4(VAR_5, VAR_4, VAR_3, "pcifront");
 if (VAR_2 < 0) {
  FUNC_1(&VAR_1->dev, "Xen PCI: failed to bind GSI%d (PIRQ%d) to IRQ: %d\n",
    VAR_5, VAR_4, VAR_2);
  return VAR_2;
 }

 VAR_1->irq = VAR_2;
 FUNC_0(&VAR_1->dev, "Xen PCI mapped GSI%d to IRQ%d\n", VAR_5, VAR_1->irq);
 return 0;
}

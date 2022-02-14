
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_device {int psp_irq; int ccp_irq; struct device* dev; } ;
struct pci_dev {int irq; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct sp_device *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 struct pci_dev *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_0->ccp_irq = VAR_2->irq;
 VAR_0->psp_irq = VAR_2->irq;

 return 0;
}

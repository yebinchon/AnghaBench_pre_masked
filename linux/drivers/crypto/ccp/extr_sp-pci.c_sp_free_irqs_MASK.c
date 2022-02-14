
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_pci {scalar_t__ msix_count; } ;
struct sp_device {scalar_t__ psp_irq; scalar_t__ ccp_irq; struct device* dev; struct sp_pci* dev_specific; } ;
struct pci_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct sp_device *VAR_0)
{
 struct sp_pci *VAR_1 = VAR_0->dev_specific;
 struct device *VAR_2 = VAR_0->dev;
 struct pci_dev *VAR_3 = FUNC_2(VAR_2);

 if (VAR_1->msix_count)
  FUNC_1(VAR_3);
 else if (VAR_0->psp_irq)
  FUNC_0(VAR_3);

 VAR_0->ccp_irq = 0;
 VAR_0->psp_irq = 0;
}

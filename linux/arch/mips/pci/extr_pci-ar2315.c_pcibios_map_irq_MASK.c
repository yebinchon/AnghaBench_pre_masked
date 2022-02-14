
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int bus; } ;
struct ar2315_pci_ctrl {int irq_ext; } ;


 struct ar2315_pci_ctrl* FUNC_0 (int ) ;

int FUNC_1(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct ar2315_pci_ctrl *VAR_3 = FUNC_0(VAR_0->bus);

 return VAR_1 ? 0 : VAR_3->irq_ext;
}

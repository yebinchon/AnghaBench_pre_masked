
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {struct alchemy_pci_context* sysdata; } ;
struct alchemy_pci_context {int (* board_map_irq ) (struct pci_dev const*,int ,int ) ;} ;


 int FUNC_0 (struct pci_dev const*,int ,int ) ;

int FUNC_1(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct alchemy_pci_context *VAR_3 = VAR_0->sysdata;
 if (VAR_3 && VAR_3->board_map_irq)
  return VAR_3->board_map_irq(VAR_0, VAR_1, VAR_2);
 return -1;
}

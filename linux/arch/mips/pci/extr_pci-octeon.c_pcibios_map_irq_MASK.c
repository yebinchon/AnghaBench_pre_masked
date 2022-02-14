
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev const*,int ,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(const struct pci_dev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 if (&FUNC_0)
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  FUNC_1("octeon_pcibios_map_irq not set.");
}

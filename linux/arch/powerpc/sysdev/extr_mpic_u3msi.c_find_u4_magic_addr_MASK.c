
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {int bus; } ;
struct pci_controller {int dn; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 struct pci_controller* FUNC_1 (int ) ;

__attribute__((used)) static u64 FUNC_2(struct pci_dev *VAR_0, unsigned int VAR_1)
{
 struct pci_controller *VAR_2 = FUNC_1(VAR_0->bus);
 if (FUNC_0(VAR_2->dn, "u4-pcie") ||
     FUNC_0(VAR_2->dn, "U4-pcie"))
  return 0xf8004000 | (VAR_1 << 4);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int sysdata; } ;
struct cns3xxx_pcie {int dummy; } ;


 struct cns3xxx_pcie* FUNC_0 (int ) ;

__attribute__((used)) static struct cns3xxx_pcie *FUNC_1(struct pci_bus *VAR_0)
{
 return FUNC_0(VAR_0->sysdata);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int dn; } ;
struct pci_bus {struct pci_controller* sysdata; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int ) ;

struct device_node *FUNC_1(struct pci_bus *VAR_0)
{
 struct pci_controller *VAR_1 = VAR_0->sysdata;

 return FUNC_0(VAR_1->dn);
}

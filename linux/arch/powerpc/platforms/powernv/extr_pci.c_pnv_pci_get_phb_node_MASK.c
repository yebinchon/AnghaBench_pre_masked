
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; } ;
struct pci_controller {int dn; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int ) ;
 struct pci_controller* FUNC_1 (int ) ;

struct device_node *FUNC_2(struct pci_dev *VAR_0)
{
 struct pci_controller *VAR_1 = FUNC_1(VAR_0->bus);

 return FUNC_0(VAR_1->dn);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int dummy; } ;
struct pci_bus {struct pci_bus* parent; scalar_t__ self; } ;
struct device_node {int dummy; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct pci_bus*) ;
 scalar_t__ FUNC_2 (struct pci_bus*) ;

__attribute__((used)) static struct pci_dn *FUNC_3(struct pci_bus *VAR_0)
{
 struct pci_bus *VAR_1;
 struct device_node *VAR_2;
 struct pci_dn *VAR_3;





 VAR_1 = VAR_0;
 while (VAR_1) {
  if (FUNC_2(VAR_1) || VAR_1->self)
   break;

  VAR_1 = VAR_1->parent;
 }





 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = VAR_2 ? FUNC_0(VAR_2) : ((void*)0);

 return VAR_3;
}

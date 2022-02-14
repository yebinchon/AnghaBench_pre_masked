
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int dummy; } ;
struct pci_controller {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct pci_dn* FUNC_1 (struct pci_controller*,struct device_node*) ;

__attribute__((used)) static void *FUNC_2(struct device_node *VAR_1, void *VAR_2)
{
 struct pci_controller *VAR_3 = VAR_2;
 struct pci_dn *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 return ((void*)0);
}

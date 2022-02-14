
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int is_dynamic; struct device_node* dn; int list_node; scalar_t__ global_number; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct pci_controller* FUNC_3 (int,int ) ;

struct pci_controller *FUNC_4(struct device_node *VAR_5)
{
 struct pci_controller *VAR_6;

 VAR_6 = FUNC_3(sizeof(struct pci_controller), VAR_0);
 if (!VAR_6)
  return ((void*)0);
 FUNC_1(&VAR_3);
 VAR_6->global_number = VAR_1++;
 FUNC_0(&VAR_6->list_node, &VAR_2);
 FUNC_2(&VAR_3);
 VAR_6->dn = VAR_5;
 VAR_6->is_dynamic = VAR_4;
 return VAR_6;
}

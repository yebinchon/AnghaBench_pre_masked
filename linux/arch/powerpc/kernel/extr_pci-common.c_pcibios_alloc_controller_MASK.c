
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int is_dynamic; struct device_node* dn; int list_node; int global_number; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_controller*,int) ;
 int FUNC_1 (struct device_node*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct pci_controller* FUNC_8 (int,int ) ;

struct pci_controller *FUNC_9(struct device_node *VAR_4)
{
 struct pci_controller *VAR_5;

 VAR_5 = FUNC_8(sizeof(struct pci_controller), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 FUNC_6(&VAR_3);
 VAR_5->global_number = FUNC_1(VAR_4);
 FUNC_2(&VAR_5->list_node, &VAR_2);
 FUNC_7(&VAR_3);
 VAR_5->dn = VAR_4;
 VAR_5->is_dynamic = FUNC_5();
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {scalar_t__ release_data; } ;
struct pci_controller {int is_dynamic; int global_number; } ;


 int FUNC_0 (struct pci_controller*) ;
 int FUNC_1 (char*,int ,int ) ;

void FUNC_2(struct pci_host_bridge *VAR_0)
{
 struct pci_controller *VAR_1 = (struct pci_controller *)
      VAR_0->release_data;

 FUNC_1("domain %d, dynamic %d\n", VAR_1->global_number, VAR_1->is_dynamic);

 FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int irq; int bus; } ;
struct pci_controller {int first_busno; struct device_node* dn; } ;
struct of_phandle_args {int* args; int args_count; struct device_node* np; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct of_phandle_args*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int*,struct of_phandle_args*) ;
 struct pci_controller* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{
 struct pci_controller *VAR_2 = FUNC_4(VAR_1->bus);
 struct device_node *VAR_3 = VAR_2 ? VAR_2->dn : ((void*)0);
 struct of_phandle_args VAR_4;
 u32 VAR_5[3];

 if (!FUNC_2(VAR_0))
  return;

 if (!VAR_3)
  return;

 VAR_4.np = VAR_3;
 VAR_4.args[0] = 2;
 VAR_4.args_count = 1;
 VAR_5[0] = (VAR_2->first_busno << 16) | (FUNC_0(31, 0) << 8);
 VAR_5[1] = VAR_5[2] = 0;
 FUNC_3(VAR_5, &VAR_4);
 VAR_1->irq = FUNC_1(&VAR_4);
}

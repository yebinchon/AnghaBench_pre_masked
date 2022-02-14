
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {int flags; int devfn; int busno; TYPE_1__* phb; int list; int child_list; } ;
struct pci_dev {int dummy; } ;
struct eeh_dev {int * pdn; } ;
struct device_node {int * data; } ;
struct TYPE_2__ {int global_number; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pci_dn*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct device_node* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct pci_dev*,char*,struct device_node*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct pci_dev* FUNC_9 (int ,int ,int ) ;
 struct eeh_dev* FUNC_10 (struct pci_dn*) ;

void FUNC_11(struct device_node *VAR_1)
{
 struct pci_dn *VAR_2 = VAR_1 ? FUNC_0(VAR_1) : ((void*)0);
 struct device_node *VAR_3;
 struct pci_dev *VAR_4;







 if (!VAR_2)
  return;

 FUNC_1(!FUNC_4(&VAR_2->child_list));
 FUNC_3(&VAR_2->list);


 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3)
  FUNC_6(VAR_3);






 VAR_4 = FUNC_9(VAR_2->phb->global_number,
   VAR_2->busno, VAR_2->devfn);
 if (VAR_4) {

  FUNC_7(VAR_4, "marked pdn (from %pOF) as dead\n", VAR_1);
  VAR_2->flags |= VAR_0;
 } else {
  VAR_1->data = ((void*)0);
  FUNC_2(VAR_2);
 }

 FUNC_8(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int devfn; int busno; struct pci_controller* phb; scalar_t__ class_code; scalar_t__ device_id; scalar_t__ vendor_id; } ;
struct pci_controller {struct pci_dn* pci_data; struct device_node* dn; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct pci_dn* FUNC_0 (struct pci_controller*,struct device_node*) ;
 int FUNC_1 (struct device_node*,int ,struct pci_controller*) ;

void FUNC_2(struct pci_controller *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dn;
 struct pci_dn *VAR_3;


 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3) {
  VAR_3->devfn = VAR_3->busno = -1;
  VAR_3->vendor_id = VAR_3->device_id = VAR_3->class_code = 0;
  VAR_3->phb = VAR_1;
  VAR_1->pci_data = VAR_3;
 }


 FUNC_1(VAR_2, VAR_0, VAR_1);
}

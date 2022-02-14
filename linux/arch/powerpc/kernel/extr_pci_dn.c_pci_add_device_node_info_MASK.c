
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dn {int busno; int devfn; int vendor_id; int device_id; int class_code; TYPE_1__* parent; int list; int child_list; int pci_ext_config_space; int pe_number; struct pci_controller* phb; } ;
struct pci_controller {int dummy; } ;
struct eeh_dev {int dummy; } ;
struct device_node {struct pci_dn* data; } ;
typedef int __be32 ;
struct TYPE_2__ {int child_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct device_node*) ;
 struct eeh_dev* FUNC_2 (struct pci_dn*) ;
 int FUNC_3 (struct pci_dn*) ;
 struct pci_dn* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 struct device_node* FUNC_6 (struct device_node*) ;
 int * FUNC_7 (struct device_node*,char*,int *) ;
 int FUNC_8 (int const*,int) ;

struct pci_dn *FUNC_9(struct pci_controller *VAR_2,
     struct device_node *VAR_3)
{
 const __be32 *VAR_4 = FUNC_7(VAR_3, "ibm,pci-config-space-type", ((void*)0));
 const __be32 *VAR_5;
 struct device_node *VAR_6;
 struct pci_dn *VAR_7;




 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 VAR_3->data = VAR_7;
 VAR_7->phb = VAR_2;
 VAR_7->pe_number = VAR_1;
 VAR_5 = FUNC_7(VAR_3, "reg", ((void*)0));
 if (VAR_5) {
  u32 VAR_8 = FUNC_8(VAR_5, 1);


  VAR_7->busno = (VAR_8 >> 16) & 0xff;
  VAR_7->devfn = (VAR_8 >> 8) & 0xff;
 }


 VAR_5 = FUNC_7(VAR_3, "vendor-id", ((void*)0));
 VAR_7->vendor_id = VAR_5 ? FUNC_8(VAR_5, 1) : 0;
 VAR_5 = FUNC_7(VAR_3, "device-id", ((void*)0));
 VAR_7->device_id = VAR_5 ? FUNC_8(VAR_5, 1) : 0;
 VAR_5 = FUNC_7(VAR_3, "class-code", ((void*)0));
 VAR_7->class_code = VAR_5 ? FUNC_8(VAR_5, 1) : 0;


 VAR_7->pci_ext_config_space = (VAR_4 && FUNC_8(VAR_4, 1) == 1);
 FUNC_0(&VAR_7->child_list);
 FUNC_0(&VAR_7->list);
 VAR_6 = FUNC_6(VAR_3);
 VAR_7->parent = VAR_6 ? FUNC_1(VAR_6) : ((void*)0);
 if (VAR_7->parent)
  FUNC_5(&VAR_7->list, &VAR_7->parent->child_list);

 return VAR_7;
}

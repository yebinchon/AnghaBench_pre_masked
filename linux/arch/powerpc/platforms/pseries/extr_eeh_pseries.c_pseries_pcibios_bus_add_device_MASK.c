
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {size_t vf_index; int busno; int devfn; int * pe_num_map; int pe_number; scalar_t__ last_allow_rc; int class_code; int vendor_id; int device_id; } ;
struct pci_dev {scalar_t__ is_virtfn; struct pci_dev* physfn; int class; int vendor; int device; int dev; } ;
struct eeh_dev {int pe_config_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dn*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct eeh_dev*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct eeh_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 struct pci_dn* FUNC_7 (struct pci_dev*) ;
 struct eeh_dev* FUNC_8 (struct pci_dn*) ;

void FUNC_9(struct pci_dev *VAR_1)
{
 struct pci_dn *VAR_2 = FUNC_7(VAR_1);

 if (FUNC_4(VAR_0))
  return;

 FUNC_0(&VAR_1->dev, "EEH: Setting up device\n");
 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
 FUNC_6(VAR_1);
}

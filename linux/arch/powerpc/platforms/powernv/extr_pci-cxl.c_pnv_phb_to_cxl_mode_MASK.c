
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct pnv_phb {int opal_id; } ;
struct pnv_ioda_pe {int pe_number; } ;
struct pci_dev {int dev; int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ,int ) ;
 struct pci_controller* FUNC_2 (int ) ;
 int FUNC_3 (struct pnv_ioda_pe*,char*) ;
 struct pnv_ioda_pe* FUNC_4 (struct pci_dev*) ;

int FUNC_5(struct pci_dev *VAR_2, uint64_t VAR_3)
{
 struct pci_controller *VAR_4 = FUNC_2(VAR_2->bus);
 struct pnv_phb *VAR_5 = VAR_4->private_data;
 struct pnv_ioda_pe *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_6, "Switching PHB to CXL\n");

 VAR_7 = FUNC_1(VAR_5->opal_id, VAR_3, VAR_6->pe_number);
 if (VAR_7 == VAR_1)
  FUNC_0(&VAR_2->dev, "Required cxl mode not supported by firmware - update skiboot\n");
 else if (VAR_7)
  FUNC_0(&VAR_2->dev, "opal_pci_set_phb_cxl_mode failed: %i\n", VAR_7);

 return VAR_7;
}

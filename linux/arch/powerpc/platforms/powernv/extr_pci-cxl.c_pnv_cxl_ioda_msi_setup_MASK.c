
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {unsigned int msi_base; int opal_id; } ;
struct pnv_ioda_pe {int pe_number; } ;
struct pci_dev {int bus; } ;
struct pci_controller {struct pnv_phb* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 struct pci_controller* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pnv_ioda_pe*,char*,int ,int,unsigned int,unsigned int,unsigned int) ;
 struct pnv_ioda_pe* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pnv_phb*,unsigned int) ;

int FUNC_6(struct pci_dev *VAR_2, unsigned int VAR_3,
      unsigned int VAR_4)
{
 struct pci_controller *VAR_5 = FUNC_1(VAR_2->bus);
 struct pnv_phb *VAR_6 = VAR_5->private_data;
 unsigned int VAR_7 = VAR_3 - VAR_6->msi_base;
 struct pnv_ioda_pe *VAR_8;
 int VAR_9;

 if (!(VAR_8 = FUNC_4(VAR_2)))
  return -VAR_1;


 VAR_9 = FUNC_0(VAR_6->opal_id, VAR_8->pe_number, VAR_7);
 if (VAR_9) {
  FUNC_3(VAR_8, "%s: OPAL error %d setting msi_base 0x%x "
   "hwirq 0x%x XIVE 0x%x PE\n",
   FUNC_2(VAR_2), VAR_9, VAR_6->msi_base, VAR_3, VAR_7);
  return -VAR_0;
 }
 FUNC_5(VAR_6, VAR_4);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnv_phb {unsigned int msi_base; int opal_id; } ;
struct pnv_ioda_pe {scalar_t__ mve_number; int pe_number; } ;
struct pci_dev {scalar_t__ no_64bit_msi; } ;
struct msi_msg {int address_hi; int address_lo; void* data; } ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,unsigned int,int,int *,int *) ;
 int FUNC_3 (int ,scalar_t__,unsigned int,int,int *,int *) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pnv_ioda_pe* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pnv_phb*,unsigned int) ;
 int FUNC_8 (char*,int ,char*,unsigned int,unsigned int,int,int,int ,int ) ;
 int FUNC_9 (char*,int ,int,...) ;

__attribute__((used)) static int FUNC_10(struct pnv_phb *VAR_2, struct pci_dev *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5,
      unsigned int VAR_6, struct msi_msg *VAR_7)
{
 struct pnv_ioda_pe *VAR_8 = FUNC_6(VAR_3);
 unsigned int VAR_9 = VAR_4 - VAR_2->msi_base;
 __be32 VAR_10;
 int VAR_11;


 if (VAR_8 == ((void*)0))
  return -VAR_1;


 if (VAR_8->mve_number < 0)
  return -VAR_1;


 if (VAR_3->no_64bit_msi)
  VAR_6 = 0;


 VAR_11 = FUNC_4(VAR_2->opal_id, VAR_8->pe_number, VAR_9);
 if (VAR_11) {
  FUNC_9("%s: OPAL error %d setting XIVE %d PE\n",
   FUNC_5(VAR_3), VAR_11, VAR_9);
  return -VAR_0;
 }

 if (VAR_6) {
  __be64 VAR_12;

  VAR_11 = FUNC_3(VAR_2->opal_id, VAR_8->mve_number, VAR_9, 1,
         &VAR_12, &VAR_10);
  if (VAR_11) {
   FUNC_9("%s: OPAL error %d getting 64-bit MSI data\n",
    FUNC_5(VAR_3), VAR_11);
   return -VAR_0;
  }
  VAR_7->address_hi = FUNC_1(VAR_12) >> 32;
  VAR_7->address_lo = FUNC_1(VAR_12) & 0xfffffffful;
 } else {
  __be32 VAR_13;

  VAR_11 = FUNC_2(VAR_2->opal_id, VAR_8->mve_number, VAR_9, 1,
         &VAR_13, &VAR_10);
  if (VAR_11) {
   FUNC_9("%s: OPAL error %d getting 32-bit MSI data\n",
    FUNC_5(VAR_3), VAR_11);
   return -VAR_0;
  }
  VAR_7->address_hi = 0;
  VAR_7->address_lo = FUNC_0(VAR_13);
 }
 VAR_7->data = FUNC_0(VAR_10);

 FUNC_7(VAR_2, VAR_5);

 FUNC_8("%s: %s-bit MSI on hwirq %x (xive #%d),"
   " address=%x_%08x data=%x PE# %x\n",
   FUNC_5(VAR_3), VAR_6 ? "64" : "32", VAR_4, VAR_9,
   VAR_7->address_hi, VAR_7->address_lo, VAR_10, VAR_8->pe_number);

 return 0;
}

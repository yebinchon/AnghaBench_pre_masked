
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pci_dn {int dummy; } ;
struct eeh_dev {int mode; int pcie_cap; } ;
struct TYPE_2__ {int (* read_config ) (struct pci_dn*,scalar_t__,int,int*) ;int (* write_config ) (struct pci_dn*,scalar_t__,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 struct pci_dn* FUNC_0 (struct eeh_dev*) ;
 int FUNC_1 (struct eeh_dev*,char*,...) ;
 TYPE_1__* VAR_16 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_4 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_5 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_6 (struct pci_dn*,scalar_t__,int,int) ;
 int FUNC_7 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_8 (struct pci_dn*,scalar_t__,int,int) ;
 int FUNC_9 (struct pci_dn*,scalar_t__,int,int*) ;
 int FUNC_10 (struct pci_dn*,scalar_t__,int,int*) ;

__attribute__((used)) static void FUNC_11(struct eeh_dev *VAR_17)
{
 struct pci_dn *VAR_18 = FUNC_0(VAR_17);
 int VAR_19;
 uint32_t VAR_20;
 int VAR_21 = 0;





 if (!(VAR_17->mode & (VAR_1 | VAR_0)))
  return;

 FUNC_1(VAR_17, "Checking PCIe link...\n");


 VAR_19 = VAR_17->pcie_cap;
 VAR_16->read_config(VAR_18, VAR_19 + VAR_14, 2, &VAR_20);
 if (!(VAR_20 & VAR_15)) {
  FUNC_1(VAR_17, "No card in the slot (0x%04x) !\n", VAR_20);
  return;
 }


 VAR_16->read_config(VAR_18, VAR_19 + VAR_9, 2, &VAR_20);
 if (VAR_20 & VAR_10) {
  VAR_16->read_config(VAR_18, VAR_19 + VAR_11, 2, &VAR_20);
  if (VAR_20 & VAR_12) {
   FUNC_1(VAR_17, "In power-off state, power it on ...\n");
   VAR_20 &= ~(VAR_12 | VAR_13);
   VAR_20 |= (0x0100 & VAR_13);
   VAR_16->write_config(VAR_18, VAR_19 + VAR_11, 2, VAR_20);
   FUNC_2(2 * 1000);
  }
 }


 VAR_16->read_config(VAR_18, VAR_19 + VAR_4, 2, &VAR_20);
 VAR_20 &= ~VAR_5;
 VAR_16->write_config(VAR_18, VAR_19 + VAR_4, 2, VAR_20);


 VAR_16->read_config(VAR_18, VAR_19 + VAR_2, 4, &VAR_20);
 if (!(VAR_20 & VAR_3)) {
  FUNC_1(VAR_17, "No link reporting capability (0x%08x) \n", VAR_20);
  FUNC_2(1000);
  return;
 }


 VAR_21 = 0;
 while (VAR_21 < 5000) {
  FUNC_2(20);
  VAR_21 += 20;

  VAR_16->read_config(VAR_18, VAR_19 + VAR_6, 2, &VAR_20);
  if (VAR_20 & VAR_8)
   break;
 }

 if (VAR_20 & VAR_8)
  FUNC_1(VAR_17, "Link up (%s)\n",
    (VAR_20 & VAR_7) ? "2.5GB" : "5GB");
 else
  FUNC_1(VAR_17, "Link not ready (0x%04x)\n", VAR_20);
}

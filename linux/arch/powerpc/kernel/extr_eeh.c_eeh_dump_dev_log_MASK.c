
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* u32 ;
struct pci_dn {int devfn; int busno; TYPE_1__* phb; } ;
struct eeh_dev {int mode; int pcix_cap; int pcie_cap; int aer_cap; } ;
typedef int buffer ;
struct TYPE_4__ {int (* read_config ) (struct pci_dn*,int,int,char**) ;} ;
struct TYPE_3__ {int global_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 struct pci_dn* FUNC_2 (struct eeh_dev*) ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int,char*,...) ;
 int FUNC_5 (struct pci_dn*,int,int,char**) ;
 int FUNC_6 (struct pci_dn*,int,int,char**) ;
 int FUNC_7 (struct pci_dn*,int,int,char**) ;
 int FUNC_8 (struct pci_dn*,int,int,char**) ;
 int FUNC_9 (struct pci_dn*,int,int,char**) ;
 int FUNC_10 (struct pci_dn*,int,int,char**) ;
 int FUNC_11 (struct pci_dn*,int,int,char**) ;
 int FUNC_12 (struct pci_dn*,int,int,char**) ;

__attribute__((used)) static size_t FUNC_13(struct eeh_dev *VAR_6, char *VAR_7, size_t VAR_8)
{
 struct pci_dn *VAR_9 = FUNC_2(VAR_6);
 u32 VAR_10;
 int VAR_11, VAR_12;
 int VAR_13 = 0, VAR_14 = 0;
 char VAR_15[128];

 if (!VAR_9) {
  FUNC_3("EEH: Note: No error log for absent device.\n");
  return 0;
 }

 VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "%04x:%02x:%02x.%01x\n",
         VAR_9->phb->global_number, VAR_9->busno,
         FUNC_1(VAR_9->devfn), FUNC_0(VAR_9->devfn));
 FUNC_3("EEH: of node=%04x:%02x:%02x.%01x\n",
  VAR_9->phb->global_number, VAR_9->busno,
  FUNC_1(VAR_9->devfn), FUNC_0(VAR_9->devfn));

 VAR_5->read_config(VAR_9, VAR_4, 4, &VAR_10);
 VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "dev/vend:%08x\n", VAR_10);
 FUNC_3("EEH: PCI device/vendor: %08x\n", VAR_10);

 VAR_5->read_config(VAR_9, VAR_2, 4, &VAR_10);
 VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "cmd/stat:%x\n", VAR_10);
 FUNC_3("EEH: PCI cmd/status register: %08x\n", VAR_10);


 if (VAR_6->mode & VAR_0) {
  VAR_5->read_config(VAR_9, VAR_3, 2, &VAR_10);
  VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "sec stat:%x\n", VAR_10);
  FUNC_3("EEH: Bridge secondary status: %04x\n", VAR_10);

  VAR_5->read_config(VAR_9, VAR_1, 2, &VAR_10);
  VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "brdg ctl:%x\n", VAR_10);
  FUNC_3("EEH: Bridge control: %04x\n", VAR_10);
 }


 VAR_11 = VAR_6->pcix_cap;
 if (VAR_11) {
  VAR_5->read_config(VAR_9, VAR_11, 4, &VAR_10);
  VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "pcix-cmd:%x\n", VAR_10);
  FUNC_3("EEH: PCI-X cmd: %08x\n", VAR_10);

  VAR_5->read_config(VAR_9, VAR_11+4, 4, &VAR_10);
  VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "pcix-stat:%x\n", VAR_10);
  FUNC_3("EEH: PCI-X status: %08x\n", VAR_10);
 }


 VAR_11 = VAR_6->pcie_cap;
 if (VAR_11) {
  VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "pci-e cap10:\n");
  FUNC_3("EEH: PCI-E capabilities and status follow:\n");

  for (VAR_12=0; VAR_12<=8; VAR_12++) {
   VAR_5->read_config(VAR_9, VAR_11+4*VAR_12, 4, &VAR_10);
   VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "%02x:%x\n", 4*VAR_12, VAR_10);

   if ((VAR_12 % 4) == 0) {
    if (VAR_12 != 0)
     FUNC_3("%s\n", VAR_15);

    VAR_14 = FUNC_4(VAR_15, sizeof(VAR_15),
           "EEH: PCI-E %02x: %08x ",
           4*VAR_12, VAR_10);
   } else {
    VAR_14 += FUNC_4(VAR_15+VAR_14, sizeof(VAR_15)-VAR_14,
            "%08x ", VAR_10);
   }

  }

  FUNC_3("%s\n", VAR_15);
 }


 VAR_11 = VAR_6->aer_cap;
 if (VAR_11) {
  VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "pci-e AER:\n");
  FUNC_3("EEH: PCI-E AER capability register set follows:\n");

  for (VAR_12=0; VAR_12<=13; VAR_12++) {
   VAR_5->read_config(VAR_9, VAR_11+4*VAR_12, 4, &VAR_10);
   VAR_13 += FUNC_4(VAR_7+VAR_13, VAR_8-VAR_13, "%02x:%x\n", 4*VAR_12, VAR_10);

   if ((VAR_12 % 4) == 0) {
    if (VAR_12 != 0)
     FUNC_3("%s\n", VAR_15);

    VAR_14 = FUNC_4(VAR_15, sizeof(VAR_15),
           "EEH: PCI-E AER %02x: %08x ",
           4*VAR_12, VAR_10);
   } else {
    VAR_14 += FUNC_4(VAR_15+VAR_14, sizeof(VAR_15)-VAR_14,
            "%08x ", VAR_10);
   }
  }

  FUNC_3("%s\n", VAR_15);
 }

 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct pci_conf_io {int match_buf_len; scalar_t__ status; size_t num_matches; struct pci_conf* matches; } ;
struct TYPE_2__ {int pc_domain; int pc_bus; int pc_dev; int pc_func; } ;
struct pci_conf {int pc_hdr; int pc_device; int pc_vendor; TYPE_1__ pc_sel; } ;
typedef int pc ;
typedef int filename ;
typedef int devs ;
typedef int action_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 int FUNC_0 (struct pci_conf_io*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int ,struct pci_conf_io*) ;
 int FUNC_3 (int,struct pci_conf*,int *) ;
 int FUNC_4 (int,struct pci_conf*,int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int,struct pci_conf*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_10(int VAR_5, action_t VAR_6)
{
 struct pci_conf VAR_7[VAR_0];
 char VAR_8[16];
 struct pci_conf_io VAR_9;
 struct pci_conf *VAR_10;
 int VAR_11;
 int VAR_12;
 uint16_t VAR_13;

 VAR_11 = -1;
 VAR_12 = 0;

 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9.match_buf_len = sizeof(VAR_7);
 VAR_9.matches = VAR_7;

 if (FUNC_2(VAR_5, VAR_1, &VAR_9) == -1) {
  FUNC_7("ioctl PCIOCGETCONF");
  return;
 }

 if (VAR_9.status == VAR_2) {
  FUNC_1(VAR_4,
      "Error fetching PCI device list from kernel.\r\n");
  return;
 }

 if (VAR_9.status == VAR_3) {
  FUNC_1(VAR_4,
"More than %d devices exist. Only the first %d will be inspected.\r\n",
      VAR_0, VAR_0);
 }

 for (VAR_10 = VAR_7 ; VAR_10 < &VAR_7[VAR_9.num_matches]; VAR_10++) {


  if (VAR_10->pc_hdr != 0x00)
   continue;

  VAR_12 = FUNC_6(VAR_5, VAR_10);

  switch (VAR_6) {
  case 129:
   FUNC_8(
"Domain %04Xh Bus %02Xh Device %02Xh Function %02Xh: ",
    VAR_10->pc_sel.pc_domain, VAR_10->pc_sel.pc_bus,
    VAR_10->pc_sel.pc_dev, VAR_10->pc_sel.pc_func);
   FUNC_8((VAR_12 ? "%dKB ROM aperture detected."
     : "No ROM present."), VAR_12/1024);
   FUNC_8("\r\n");
   break;
  case 128:
   if (VAR_12 == 0)
    continue;

   FUNC_9(VAR_8, sizeof(VAR_8), "%08X.rom",
       ((VAR_10->pc_device << 16) | VAR_10->pc_vendor));

   FUNC_1(VAR_4, "Saving %dKB ROM image to %s...\r\n",
       VAR_12, VAR_8);

   if (FUNC_4(VAR_5, VAR_10, &VAR_13) == 0)
    VAR_11 = FUNC_5(VAR_8, VAR_12);

   FUNC_3(VAR_5, VAR_10, &VAR_13);

   if (VAR_11 == 0) {
    FUNC_1(VAR_4, "Done.\r\n");
   } else {
    FUNC_1(VAR_4,
"An error occurred whilst saving the ROM.\r\n");
   }
   break;
  }
 }
}

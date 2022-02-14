
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rp ;
struct TYPE_2__ {int status; int manufacturer; int hci_version; int hci_revision; int lmp_version; int lmp_subversion; } ;
typedef TYPE_1__ ng_hci_read_local_ver_rp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int ,char*,int*) ;
 char* FUNC_5 (int) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(int VAR_6, int VAR_7, char **VAR_8)
{
 ng_hci_read_local_ver_rp VAR_9;
 int VAR_10;

 VAR_10 = sizeof(VAR_9);
 if (FUNC_4(VAR_6, FUNC_0(VAR_3,
   VAR_2), (char *) &VAR_9, &VAR_10) == VAR_0)
  return (VAR_0);

 if (VAR_9.status != 0x00) {
  FUNC_1(VAR_5, "Status: %s [%#02x]\n",
   FUNC_5(VAR_9.status), VAR_9.status);
  return (VAR_1);
 }

 VAR_9.manufacturer = FUNC_7(VAR_9.manufacturer);

 FUNC_1(VAR_5, "HCI version: %s [%#02x]\n",
  FUNC_6(VAR_9.hci_version), VAR_9.hci_version);
 FUNC_1(VAR_5, "HCI revision: %#04x\n",
  FUNC_7(VAR_9.hci_revision));
 FUNC_1(VAR_5, "LMP version: %s [%#02x]\n",
  FUNC_2(VAR_9.lmp_version), VAR_9.lmp_version);
 FUNC_1(VAR_5, "LMP sub-version: %#04x\n",
  FUNC_7(VAR_9.lmp_subversion));
 FUNC_1(VAR_5, "Manufacturer: %s [%#04x]\n",
  FUNC_3(VAR_9.manufacturer), VAR_9.manufacturer);

 return (VAR_4);
}

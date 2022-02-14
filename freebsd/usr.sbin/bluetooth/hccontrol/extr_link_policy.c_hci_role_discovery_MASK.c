
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int rp ;
struct TYPE_3__ {int status; int role; int con_handle; } ;
typedef TYPE_1__ ng_hci_role_discovery_rp ;
struct TYPE_4__ {int con_handle; } ;
typedef TYPE_2__ ng_hci_role_discovery_cp ;
typedef int cp ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int ,char const*,int,char*,int*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,int*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_7(int VAR_8, int VAR_9, char **VAR_10)
{
 ng_hci_role_discovery_cp VAR_11;
 ng_hci_role_discovery_rp VAR_12;
 int VAR_13;


 switch (VAR_9) {
 case 1:

  if (FUNC_6(VAR_10[0], "%d", &VAR_13) != 1 || VAR_13 <= 0 || VAR_13 > 0x0eff)
   return (VAR_6);

  VAR_11.con_handle = (uint16_t) (VAR_13 & 0x0fff);
  VAR_11.con_handle = FUNC_4(VAR_11.con_handle);
  break;

 default:
  return (VAR_6);
 }


 VAR_13 = sizeof(VAR_12);
 if (FUNC_2(VAR_8, FUNC_0(VAR_3,
   VAR_2),
   (char const *) &VAR_11, sizeof(VAR_11),
   (char *) &VAR_12, &VAR_13) == VAR_0)
  return (VAR_0);

 if (VAR_12.status != 0x00) {
  FUNC_1(VAR_7, "Status: %s [%#02x]\n",
   FUNC_3(VAR_12.status), VAR_12.status);
  return (VAR_1);
 }

 FUNC_1(VAR_7, "Connection handle: %d\n", FUNC_5(VAR_12.con_handle));
 FUNC_1(VAR_7, "Role: %s [%#x]\n",
  (VAR_12.role == VAR_4)? "Master" : "Slave", VAR_12.role);

 return (VAR_5);
}

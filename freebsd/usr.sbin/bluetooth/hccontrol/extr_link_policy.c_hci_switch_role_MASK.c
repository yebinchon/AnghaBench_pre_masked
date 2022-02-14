
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hostent {int h_addr; } ;
struct TYPE_4__ {int role; int bdaddr; } ;
typedef TYPE_1__ ng_hci_switch_role_cp ;
struct TYPE_5__ {int status; int role; int bdaddr; } ;
typedef TYPE_2__ ng_hci_role_change_ep ;
struct TYPE_6__ {scalar_t__ event; } ;
typedef TYPE_3__ ng_hci_event_pkt_t ;
typedef int cp ;
typedef int b ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int *) ;
 struct hostent* FUNC_2 (char*) ;
 int VAR_10 ;
 int FUNC_3 (int ,char*,char*,...) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,char*,int*) ;
 scalar_t__ FUNC_6 (int,int ,char const*,int,char*,int*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (char*,char*,int*) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_10(int VAR_12, int VAR_13, char **VAR_14)
{
 int VAR_15;
 char VAR_16[512];
 ng_hci_switch_role_cp VAR_17;
 ng_hci_event_pkt_t *VAR_18 = (ng_hci_event_pkt_t *) VAR_16;


 switch (VAR_13) {
 case 2:

  if (!FUNC_1(VAR_14[0], &VAR_17.bdaddr)) {
   struct hostent *VAR_19 = ((void*)0);

   if ((VAR_19 = FUNC_2(VAR_14[0])) == ((void*)0))
    return (VAR_9);

   FUNC_8(&VAR_17.bdaddr, VAR_19->h_addr, sizeof(VAR_17.bdaddr));
  }


  if (FUNC_9(VAR_14[1], "%d", &VAR_15) != 1)
   return (VAR_9);

  VAR_17.role = VAR_15? VAR_7 : VAR_6;
  break;

 default:
  return (VAR_9);
 }


 VAR_15 = sizeof(VAR_16);
 if (FUNC_6(VAR_12, FUNC_0(VAR_5,
   VAR_4),
   (char const *) &VAR_17, sizeof(VAR_17), VAR_16, &VAR_15) == VAR_1)
  return (VAR_1);

 if (*VAR_16 != 0x00)
  return (VAR_2);


again:
 VAR_15 = sizeof(VAR_16);
 if (FUNC_5(VAR_12, VAR_16, &VAR_15) == VAR_1)
  return (VAR_1);
 if (VAR_15 < sizeof(*VAR_18)) {
  VAR_10 = VAR_0;
  return (VAR_1);
 }

 if (VAR_18->event == VAR_3) {
  ng_hci_role_change_ep *VAR_20 = (ng_hci_role_change_ep *)(VAR_18 + 1);

  if (VAR_20->status != 0x00) {
   FUNC_3(VAR_11, "Status: %s [%#02x]\n",
    FUNC_7(VAR_20->status), VAR_20->status);
   return (VAR_2);
  }

  FUNC_3(VAR_11, "BD_ADDR: %s\n", FUNC_4(&VAR_20->bdaddr));
  FUNC_3(VAR_11, "Role: %s [%#x]\n",
   (VAR_20->role == VAR_6)? "Master" : "Slave",
   VAR_20->role);
 } else
  goto again;

 return (VAR_8);
}

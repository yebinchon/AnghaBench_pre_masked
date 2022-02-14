
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_5__ {scalar_t__ event; } ;
typedef TYPE_1__ ng_hci_event_pkt_t ;
struct TYPE_6__ {int status; int encryption_mode; int con_handle; int bdaddr; } ;
typedef TYPE_2__ ng_hci_con_compl_ep ;
struct TYPE_7__ {int pkt_type; int con_handle; } ;
typedef TYPE_3__ ng_hci_add_sco_con_cp ;
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (int *) ;
 char* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,char*,int*) ;
 scalar_t__ FUNC_5 (int,int ,char const*,int,char*,int*) ;
 char* FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;
 int FUNC_10 (char*,char*,int*) ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_11(int VAR_13, int VAR_14, char **VAR_15)
{
 int VAR_16;
 char VAR_17[512];
 ng_hci_add_sco_con_cp VAR_18;
 ng_hci_event_pkt_t *VAR_19 = (ng_hci_event_pkt_t *) VAR_17;


 FUNC_9(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.pkt_type = FUNC_7(VAR_6 | VAR_7 | VAR_8);


 switch (VAR_14) {
 case 2:

  if (FUNC_10(VAR_15[1], "%x", &VAR_16) != 1)
   return (VAR_10);

  VAR_16 &= (VAR_6 | VAR_7 | VAR_8);
  if (VAR_16 == 0)
   return (VAR_10);

  VAR_18.pkt_type = (uint16_t) (VAR_16 & 0x0fff);
  VAR_18.pkt_type = FUNC_7(VAR_18.pkt_type);

 case 1:

  if (FUNC_10(VAR_15[0], "%d", &VAR_16) != 1 || VAR_16 <= 0 || VAR_16 > 0x0eff)
   return (VAR_10);

  VAR_18.con_handle = (uint16_t) (VAR_16 & 0x0fff);
  VAR_18.con_handle = FUNC_7(VAR_18.con_handle);
  break;

 default:
  return (VAR_10);
 }


 VAR_16 = sizeof(VAR_17);
 if (FUNC_5(VAR_13, FUNC_0(VAR_5,
   VAR_4),
   (char const *) &VAR_18, sizeof(VAR_18), VAR_17, &VAR_16) == VAR_1)
  return (VAR_1);

 if (*VAR_17 != 0x00)
  return (VAR_2);


again:
 VAR_16 = sizeof(VAR_17);
 if (FUNC_4(VAR_13, VAR_17, &VAR_16) == VAR_1)
  return (VAR_1);
 if (VAR_16 < sizeof(*VAR_19)) {
  VAR_11 = VAR_0;
  return (VAR_1);
 }

 if (VAR_19->event == VAR_3) {
  ng_hci_con_compl_ep *VAR_20 = (ng_hci_con_compl_ep *)(VAR_19 + 1);

  if (VAR_20->status != 0x00) {
   FUNC_1(VAR_12, "Status: %s [%#02x]\n",
    FUNC_6(VAR_20->status), VAR_20->status);
   return (VAR_2);
  }

  FUNC_1(VAR_12, "BD_ADDR: %s\n", FUNC_2(&VAR_20->bdaddr));
  FUNC_1(VAR_12, "Connection handle: %d\n",
   FUNC_8(VAR_20->con_handle));
  FUNC_1(VAR_12, "Encryption mode: %s [%d]\n",
   FUNC_3(VAR_20->encryption_mode, 0),
   VAR_20->encryption_mode);
 } else
  goto again;

 return (VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ event; } ;
typedef TYPE_1__ ng_hci_event_pkt_t ;
struct TYPE_6__ {int reason; int con_handle; } ;
typedef TYPE_2__ ng_hci_discon_cp ;
struct TYPE_7__ {int status; int reason; int con_handle; } ;
typedef TYPE_3__ ng_hci_discon_compl_ep ;
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
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,char*,int*) ;
 scalar_t__ FUNC_3 (int,int ,char const*,int,char*,int*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (char*,char*,int*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_9(int VAR_10, int VAR_11, char **VAR_12)
{
 int VAR_13;
 char VAR_14[512];
 ng_hci_discon_cp VAR_15;
 ng_hci_event_pkt_t *VAR_16 = (ng_hci_event_pkt_t *) VAR_14;


 FUNC_7(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.reason = 0x13;


 switch (VAR_11) {
 case 2:

  if (FUNC_8(VAR_12[1], "%d", &VAR_13) != 1 || VAR_13 <= 0x00 || VAR_13 > 0xff)
   return (VAR_7);

  VAR_15.reason = (uint8_t) (VAR_13 & 0xff);

 case 1:

  if (FUNC_8(VAR_12[0], "%d", &VAR_13) != 1 || VAR_13 <= 0 || VAR_13 > 0x0eff)
   return (VAR_7);

  VAR_15.con_handle = (uint16_t) (VAR_13 & 0x0fff);
  VAR_15.con_handle = FUNC_5(VAR_15.con_handle);
  break;

 default:
  return (VAR_7);
 }


 VAR_13 = sizeof(VAR_14);
 if (FUNC_3(VAR_10, FUNC_0(VAR_5,
   VAR_4),
   (char const *) &VAR_15, sizeof(VAR_15), VAR_14, &VAR_13) == VAR_1)
  return (VAR_1);

 if (*VAR_14 != 0x00)
  return (VAR_2);


again:
 VAR_13 = sizeof(VAR_14);
 if (FUNC_2(VAR_10, VAR_14, &VAR_13) == VAR_1)
  return (VAR_1);
 if (VAR_13 < sizeof(*VAR_16)) {
  VAR_8 = VAR_0;
  return (VAR_1);
 }

 if (VAR_16->event == VAR_3) {
  ng_hci_discon_compl_ep *VAR_17 = (ng_hci_discon_compl_ep *)(VAR_16 + 1);

  if (VAR_17->status != 0x00) {
   FUNC_1(VAR_9, "Status: %s [%#02x]\n",
    FUNC_4(VAR_17->status), VAR_17->status);
   return (VAR_2);
  }

  FUNC_1(VAR_9, "Connection handle: %d\n",
   FUNC_6(VAR_17->con_handle));
  FUNC_1(VAR_9, "Reason: %s [%#02x]\n",
   FUNC_4(VAR_17->reason), VAR_17->reason);
 } else
  goto again;

 return (VAR_6);
}

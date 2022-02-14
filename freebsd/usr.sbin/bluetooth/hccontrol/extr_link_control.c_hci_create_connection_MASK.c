
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hostent {int h_addr; } ;
struct TYPE_5__ {scalar_t__ event; } ;
typedef TYPE_1__ ng_hci_event_pkt_t ;
struct TYPE_6__ {int pkt_type; int page_scan_rep_mode; int page_scan_mode; int clock_offset; int accept_role_switch; int bdaddr; } ;
typedef TYPE_2__ ng_hci_create_con_cp ;
struct TYPE_7__ {int status; int encryption_mode; int con_handle; int bdaddr; } ;
typedef TYPE_3__ ng_hci_con_compl_ep ;
typedef int cp ;
typedef int b ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (char*,int *) ;
 struct hostent* FUNC_2 (char*) ;
 int VAR_15 ;
 int FUNC_3 (int ,char*,...) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int,char*,int*) ;
 scalar_t__ FUNC_7 (int,int ,char const*,int,char*,int*) ;
 char* FUNC_8 (int) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;
 int FUNC_13 (char*,char*,int*) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_14(int VAR_17, int VAR_18, char **VAR_19)
{
 int VAR_20;
 char VAR_21[512];
 ng_hci_create_con_cp VAR_22;
 ng_hci_event_pkt_t *VAR_23 = (ng_hci_event_pkt_t *) VAR_21;


 FUNC_12(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.pkt_type = FUNC_9( VAR_9 | VAR_7 |
    VAR_10 | VAR_8 |
    VAR_11);
 VAR_22.page_scan_rep_mode = VAR_12;
 VAR_22.page_scan_mode = VAR_4;
 VAR_22.clock_offset = 0;
 VAR_22.accept_role_switch = 1;


 switch (VAR_18) {
 case 6:

  if (FUNC_13(VAR_19[5], "%d", &VAR_20) != 1)
   return (VAR_14);

  VAR_22.accept_role_switch = VAR_20 ? 1 : 0;

 case 5:

  if (FUNC_13(VAR_19[4], "%d", &VAR_20) != 1)
   return (VAR_14);

  VAR_22.clock_offset = (VAR_20 & 0xffff);
  VAR_22.clock_offset = FUNC_9(VAR_22.clock_offset);

 case 4:

  if (FUNC_13(VAR_19[3], "%d", &VAR_20) != 1 || VAR_20 < 0 || VAR_20 > 3)
   return (VAR_14);

  VAR_22.page_scan_mode = (VAR_20 & 0xff);

 case 3:

  if (FUNC_13(VAR_19[2], "%d", &VAR_20) != 1 || VAR_20 < 0 || VAR_20 > 2)
   return (VAR_14);

  VAR_22.page_scan_rep_mode = (VAR_20 & 0xff);

 case 2:

  if (FUNC_13(VAR_19[1], "%x", &VAR_20) != 1)
   return (VAR_14);

  VAR_20 &= ( VAR_9 | VAR_7 |
   VAR_10 | VAR_8 |
   VAR_11);
  if (VAR_20 == 0)
   return (VAR_14);

  VAR_22.pkt_type = (VAR_20 & 0xffff);
  VAR_22.pkt_type = FUNC_9(VAR_22.pkt_type);

 case 1:

  if (!FUNC_1(VAR_19[0], &VAR_22.bdaddr)) {
   struct hostent *VAR_24 = ((void*)0);

   if ((VAR_24 = FUNC_2(VAR_19[0])) == ((void*)0))
    return (VAR_14);

   FUNC_11(&VAR_22.bdaddr, VAR_24->h_addr, sizeof(VAR_22.bdaddr));
  }
  break;

 default:
  return (VAR_14);
 }


 VAR_20 = sizeof(VAR_21);
 if (FUNC_7(VAR_17, FUNC_0(VAR_6,
   VAR_5),
   (char const *) &VAR_22, sizeof(VAR_22), VAR_21, &VAR_20) == VAR_1)
  return (VAR_1);

 if (*VAR_21 != 0x00)
  return (VAR_2);


again:
 VAR_20 = sizeof(VAR_21);
 if (FUNC_6(VAR_17, VAR_21, &VAR_20) == VAR_1)
  return (VAR_1);
 if (VAR_20 < sizeof(*VAR_23)) {
  VAR_15 = VAR_0;
  return (VAR_1);
 }

 if (VAR_23->event == VAR_3) {
  ng_hci_con_compl_ep *VAR_25 = (ng_hci_con_compl_ep *)(VAR_23 + 1);

  if (VAR_25->status != 0x00) {
   FUNC_3(VAR_16, "Status: %s [%#02x]\n",
    FUNC_8(VAR_25->status), VAR_25->status);
   return (VAR_2);
  }

  FUNC_3(VAR_16, "BD_ADDR: %s\n", FUNC_4(&VAR_25->bdaddr));
  FUNC_3(VAR_16, "Connection handle: %d\n",
   FUNC_10(VAR_25->con_handle));
  FUNC_3(VAR_16, "Encryption mode: %s [%d]\n",
   FUNC_5(VAR_25->encryption_mode, 0),
   VAR_25->encryption_mode);
 } else
  goto again;

 return (VAR_13);
}

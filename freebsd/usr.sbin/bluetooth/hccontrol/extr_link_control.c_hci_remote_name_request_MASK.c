
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hostent {int h_addr; } ;
struct TYPE_5__ {int page_scan_rep_mode; int page_scan_mode; int clock_offset; int bdaddr; } ;
typedef TYPE_1__ ng_hci_remote_name_req_cp ;
struct TYPE_6__ {int status; char* name; int bdaddr; } ;
typedef TYPE_2__ ng_hci_remote_name_req_compl_ep ;
struct TYPE_7__ {scalar_t__ event; } ;
typedef TYPE_3__ ng_hci_event_pkt_t ;
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
 int FUNC_1 (char*,int *) ;
 struct hostent* FUNC_2 (char*) ;
 int VAR_10 ;
 int FUNC_3 (int ,char*,char*,...) ;
 char* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,char*,int*) ;
 scalar_t__ FUNC_6 (int,int ,char const*,int,char*,int*) ;
 char* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int FUNC_11 (char*,char*,int*) ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_12(int VAR_12, int VAR_13, char **VAR_14)
{
 int VAR_15;
 char VAR_16[512];
 ng_hci_remote_name_req_cp VAR_17;
 ng_hci_event_pkt_t *VAR_18 = (ng_hci_event_pkt_t *) VAR_16;

 FUNC_10(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.page_scan_rep_mode = VAR_7;
 VAR_17.page_scan_mode = VAR_4;


 switch (VAR_13) {
 case 4:

  if (FUNC_11(VAR_14[3], "%x", &VAR_15) != 1)
   return (VAR_9);

  VAR_17.clock_offset = (VAR_15 & 0xffff);
  VAR_17.clock_offset = FUNC_8(VAR_17.clock_offset);

 case 3:

  if (FUNC_11(VAR_14[2], "%d", &VAR_15) != 1 || VAR_15 < 0x00 || VAR_15 > 0x03)
   return (VAR_9);

  VAR_17.page_scan_mode = (VAR_15 & 0xff);

 case 2:

  if (FUNC_11(VAR_14[1], "%d", &VAR_15) != 1 || VAR_15 < 0x00 || VAR_15 > 0x02)
   return (VAR_9);

  VAR_17.page_scan_rep_mode = (VAR_15 & 0xff);

 case 1:

  if (!FUNC_1(VAR_14[0], &VAR_17.bdaddr)) {
   struct hostent *VAR_19 = ((void*)0);

   if ((VAR_19 = FUNC_2(VAR_14[0])) == ((void*)0))
    return (VAR_9);

   FUNC_9(&VAR_17.bdaddr, VAR_19->h_addr, sizeof(VAR_17.bdaddr));
  }
  break;

 default:
  return (VAR_9);
 }


 VAR_15 = sizeof(VAR_16);
 if (FUNC_6(VAR_12, FUNC_0(VAR_6,
   VAR_5),
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
  ng_hci_remote_name_req_compl_ep *VAR_20 =
    (ng_hci_remote_name_req_compl_ep *)(VAR_18 + 1);

  if (VAR_20->status != 0x00) {
   FUNC_3(VAR_11, "Status: %s [%#02x]\n",
    FUNC_7(VAR_20->status), VAR_20->status);
   return (VAR_2);
  }

  FUNC_3(VAR_11, "BD_ADDR: %s\n", FUNC_4(&VAR_20->bdaddr));
  FUNC_3(VAR_11, "Name: %s\n", VAR_20->name);
 } else
  goto again;

 return (VAR_8);
}

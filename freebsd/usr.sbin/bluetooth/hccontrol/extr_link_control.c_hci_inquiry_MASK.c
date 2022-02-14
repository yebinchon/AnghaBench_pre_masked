
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int num_responses; } ;
typedef TYPE_1__ ng_hci_inquiry_result_ep ;
struct TYPE_5__ {int* lap; int inquiry_length; int num_responses; } ;
typedef TYPE_2__ ng_hci_inquiry_cp ;
struct TYPE_6__ {int event; } ;
typedef TYPE_3__ ng_hci_event_pkt_t ;
typedef int cp ;
typedef int b ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int **) ;
 scalar_t__ FUNC_3 (int,char*,int*) ;
 scalar_t__ FUNC_4 (int,int ,char const*,int,char*,int*) ;
 char* FUNC_5 (char) ;
 int FUNC_6 (char*,char*,int*,...) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_7(int VAR_10, int VAR_11, char **VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 char VAR_17[512];
 ng_hci_inquiry_cp VAR_18;
 ng_hci_event_pkt_t *VAR_19 = (ng_hci_event_pkt_t *) VAR_17;


 VAR_18.lap[2] = 0x9e;
 VAR_18.lap[1] = 0x8b;
 VAR_18.lap[0] = 0x33;
 VAR_18.inquiry_length = 5;
 VAR_18.num_responses = 8;


 switch (VAR_11) {
 case 3:

  if (FUNC_6(VAR_12[2], "%d", &VAR_13) != 1 || VAR_13 < 0 || VAR_13 > 0xff)
   return (VAR_6);

  VAR_18.num_responses = (VAR_13 & 0xff);

 case 2:

  if (FUNC_6(VAR_12[1], "%d", &VAR_13) != 1 || VAR_13 < 0x1 || VAR_13 > 0x30)
   return (VAR_6);

  VAR_18.inquiry_length = (VAR_13 & 0xff);

 case 1:

  if (FUNC_6(VAR_12[0], "%x:%x:%x", &VAR_15, &VAR_14, &VAR_13) != 3)
   return (VAR_6);

  VAR_18.lap[0] = (VAR_13 & 0xff);
  VAR_18.lap[1] = (VAR_14 & 0xff);
  VAR_18.lap[2] = (VAR_15 & 0xff);

 case 0:

  break;

 default:
  return (VAR_6);
 }


 VAR_13 = sizeof(VAR_17);
 if (FUNC_4(VAR_10, FUNC_0(VAR_4,
   VAR_3), (char const *) &VAR_18, sizeof(VAR_18),
   VAR_17, &VAR_13) == VAR_1)
  return (VAR_1);

 if (*VAR_17 != 0x00)
  return (VAR_2);

 VAR_16 = VAR_9;
 VAR_9 = VAR_18.inquiry_length * 1.28 + 1;

wait_for_more:

 VAR_13 = sizeof(VAR_17);
 if (FUNC_3(VAR_10, VAR_17, &VAR_13) == VAR_1) {
  VAR_9 = VAR_16;
  return (VAR_1);
 }

 if (VAR_13 < sizeof(*VAR_19)) {
  VAR_9 = VAR_16;
  VAR_7 = VAR_0;
  return (VAR_1);
 }

 switch (VAR_19->event) {
 case 128: {
  ng_hci_inquiry_result_ep *VAR_20 =
    (ng_hci_inquiry_result_ep *)(VAR_19 + 1);
  uint8_t *VAR_21 = (uint8_t *)(VAR_20 + 1);

  FUNC_1(VAR_8, "Inquiry result, num_responses=%d\n",
   VAR_20->num_responses);

  for (VAR_13 = 0; VAR_13 < VAR_20->num_responses; VAR_13++)
   FUNC_2(VAR_13, &VAR_21);

  goto wait_for_more;
  }

 case 129:
  FUNC_1(VAR_8, "Inquiry complete. Status: %s [%#02x]\n",
   FUNC_5(*(VAR_17 + sizeof(*VAR_19))), *(VAR_17 + sizeof(*VAR_19)));
  break;

 default:
  goto wait_for_more;
 }

 VAR_9 = VAR_16;

 return (VAR_5);
}

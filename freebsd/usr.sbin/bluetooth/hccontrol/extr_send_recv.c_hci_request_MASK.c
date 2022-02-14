
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ type; int event; } ;
typedef TYPE_1__ ng_hci_event_pkt_t ;
struct TYPE_6__ {int opcode; char status; } ;
typedef TYPE_2__ ng_hci_command_status_ep ;
struct TYPE_7__ {int opcode; } ;
typedef TYPE_3__ ng_hci_command_compl_ep ;
struct TYPE_8__ {scalar_t__ length; scalar_t__ opcode; int type; } ;
typedef TYPE_4__ ng_hci_cmd_pkt_t ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int,char*,int*) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*,char const*,int) ;

int
FUNC_6(int VAR_8, int VAR_9, char const *VAR_10, int VAR_11, char *VAR_12, int *VAR_13)
{
 char VAR_14[512];
 int VAR_15;
 ng_hci_cmd_pkt_t *VAR_16 = (ng_hci_cmd_pkt_t *) VAR_14;
 ng_hci_event_pkt_t *VAR_17 = (ng_hci_event_pkt_t *) VAR_14;

 FUNC_0(VAR_12 != ((void*)0));
 FUNC_0(VAR_13 != ((void*)0));
 FUNC_0(*VAR_13 > 0);

 VAR_16->type = VAR_3;
 VAR_16->opcode = (uint16_t) VAR_9;
 VAR_16->opcode = FUNC_3(VAR_16->opcode);

 if (VAR_10 != ((void*)0)) {
  FUNC_0(0 < VAR_11 && VAR_11 <= VAR_4);

  VAR_16->length = (uint8_t) VAR_11;
  FUNC_5(VAR_14 + sizeof(*VAR_16), VAR_10, VAR_11);
 } else
  VAR_16->length = 0;

 if (FUNC_2(VAR_8, VAR_14, sizeof(*VAR_16) + VAR_11) == VAR_2)
  return (VAR_2);

again:
 VAR_15 = sizeof(VAR_14);
 if (FUNC_1(VAR_8, VAR_14, &VAR_15) == VAR_2)
  return (VAR_2);

 if (VAR_15 < sizeof(*VAR_17)) {
  VAR_7 = VAR_1;
  return (VAR_2);
 }

 if (VAR_17->type != VAR_5) {
  VAR_7 = VAR_0;
  return (VAR_2);
 }

 switch (VAR_17->event) {
 case 129: {
  ng_hci_command_compl_ep *VAR_18 =
    (ng_hci_command_compl_ep *)(VAR_17 + 1);

  VAR_18->opcode = FUNC_4(VAR_18->opcode);

  if (VAR_18->opcode == 0x0000 || VAR_18->opcode != VAR_9)
   goto again;

  VAR_15 -= (sizeof(*VAR_17) + sizeof(*VAR_18));
  if (VAR_15 < *VAR_13)
   *VAR_13 = VAR_15;

  FUNC_5(VAR_12, VAR_14 + sizeof(*VAR_17) + sizeof(*VAR_18), *VAR_13);
  } break;

 case 128: {
  ng_hci_command_status_ep *VAR_19 =
    (ng_hci_command_status_ep *)(VAR_17 + 1);

  VAR_19->opcode = FUNC_4(VAR_19->opcode);

  if (VAR_19->opcode == 0x0000 || VAR_19->opcode != VAR_9)
   goto again;

  *VAR_13 = 1;
  *VAR_12 = VAR_19->status;
  } break;

 default:
  goto again;
 }

 return (VAR_6);
}

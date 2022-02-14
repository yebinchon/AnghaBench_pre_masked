
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_event_hdr {scalar_t__ evt; } ;
struct hci_ev_cmd_complete {int opcode; } ;
struct TYPE_3__ {int sendcmdflag; } ;
struct btmrvl_private {TYPE_2__* adapter; TYPE_1__ btmrvl_dev; } ;
struct TYPE_4__ {int cmd_complete; int cmd_wait_q; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct btmrvl_private *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_event_hdr *VAR_4 = (void *) VAR_3->data;

 if (VAR_4->evt == VAR_1) {
  struct hci_ev_cmd_complete *VAR_5;
  u16 VAR_6;

  VAR_5 = (void *) (VAR_3->data + VAR_0);
  VAR_6 = FUNC_1(VAR_5->opcode);

  if (VAR_2->btmrvl_dev.sendcmdflag) {
   VAR_2->btmrvl_dev.sendcmdflag = 0;
   VAR_2->adapter->cmd_complete = 1;
   FUNC_4(&VAR_2->adapter->cmd_wait_q);

   if (FUNC_2(VAR_6) == 0x3F) {
    FUNC_0("vendor event skipped: opcode=%#4.4x",
           VAR_6);
    FUNC_3(VAR_3);
    return 0;
   }
  }
 }

 return 1;
}

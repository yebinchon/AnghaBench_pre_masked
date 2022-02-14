
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; int name; } ;
struct hci_command_hdr {int opcode; } ;
struct btusb_data {int flags; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*) ;
 int VAR_3 ;
 struct urb* FUNC_3 (struct hci_dev*,struct sk_buff*) ;
 struct urb* FUNC_4 (struct hci_dev*,struct sk_buff*) ;
 struct urb* FUNC_5 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 struct btusb_data* FUNC_7 (struct hci_dev*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct hci_dev*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct hci_dev*,struct urb*) ;
 int FUNC_12 (struct hci_dev*,struct urb*) ;
 int FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct hci_dev *VAR_4, struct sk_buff *VAR_5)
{
 struct btusb_data *VAR_6 = FUNC_7(VAR_4);
 struct urb *VAR_7;

 FUNC_0("%s", VAR_4->name);

 switch (FUNC_8(VAR_5)) {
 case 129:
  if (FUNC_13(VAR_0, &VAR_6->flags)) {
   struct hci_command_hdr *VAR_8 = (void *)VAR_5->data;
   __u16 VAR_9 = FUNC_10(VAR_8->opcode);





   if (VAR_9 == 0xfc09)
    VAR_7 = FUNC_3(VAR_4, VAR_5);
   else
    VAR_7 = FUNC_4(VAR_4, VAR_5);






   if (VAR_9 == 0xfc01)
    FUNC_9(VAR_4, VAR_9);
  } else {
   VAR_7 = FUNC_4(VAR_4, VAR_5);
  }
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);

  VAR_4->stat.cmd_tx++;
  return FUNC_11(VAR_4, VAR_7);

 case 130:
  VAR_7 = FUNC_3(VAR_4, VAR_5);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);

  VAR_4->stat.acl_tx++;
  return FUNC_11(VAR_4, VAR_7);

 case 128:
  if (FUNC_6(VAR_4, VAR_3) < 1)
   return -VAR_2;

  VAR_7 = FUNC_5(VAR_4, VAR_5);
  if (FUNC_1(VAR_7))
   return FUNC_2(VAR_7);

  VAR_4->stat.sco_tx++;
  return FUNC_12(VAR_4, VAR_7);
 }

 return -VAR_1;
}

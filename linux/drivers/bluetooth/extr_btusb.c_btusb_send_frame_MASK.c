
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct urb*) ;
 int VAR_2 ;
 struct urb* FUNC_3 (struct hci_dev*,struct sk_buff*) ;
 struct urb* FUNC_4 (struct hci_dev*,struct sk_buff*) ;
 struct urb* FUNC_5 (struct hci_dev*,struct sk_buff*) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct hci_dev*,struct urb*) ;
 int FUNC_9 (struct hci_dev*,struct urb*) ;

__attribute__((used)) static int FUNC_10(struct hci_dev *VAR_3, struct sk_buff *VAR_4)
{
 struct urb *VAR_5;

 FUNC_0("%s", VAR_3->name);

 switch (FUNC_7(VAR_4)) {
 case 129:
  VAR_5 = FUNC_4(VAR_3, VAR_4);
  if (FUNC_1(VAR_5))
   return FUNC_2(VAR_5);

  VAR_3->stat.cmd_tx++;
  return FUNC_8(VAR_3, VAR_5);

 case 130:
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  if (FUNC_1(VAR_5))
   return FUNC_2(VAR_5);

  VAR_3->stat.acl_tx++;
  return FUNC_8(VAR_3, VAR_5);

 case 128:
  if (FUNC_6(VAR_3, VAR_2) < 1)
   return -VAR_1;

  VAR_5 = FUNC_5(VAR_3, VAR_4);
  if (FUNC_1(VAR_5))
   return FUNC_2(VAR_5);

  VAR_3->stat.sco_tx++;
  return FUNC_9(VAR_3, VAR_5);
 }

 return -VAR_0;
}

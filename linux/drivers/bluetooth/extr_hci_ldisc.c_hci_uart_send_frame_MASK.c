
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct hci_uart {int proto_lock; TYPE_1__* proto; int flags; } ;
struct hci_dev {int name; } ;
struct TYPE_2__ {int (* enqueue ) (struct hci_uart*,struct sk_buff*) ;} ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct hci_uart* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct hci_uart*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct hci_uart*,struct sk_buff*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_uart *VAR_4 = FUNC_1(VAR_2);

 FUNC_0("%s: type %d len %d", VAR_2->name, FUNC_2(VAR_3),
        VAR_3->len);

 FUNC_4(&VAR_4->proto_lock);

 if (!FUNC_7(VAR_1, &VAR_4->flags)) {
  FUNC_5(&VAR_4->proto_lock);
  return -VAR_0;
 }

 VAR_4->proto->enqueue(VAR_4, VAR_3);
 FUNC_5(&VAR_4->proto_lock);

 FUNC_3(VAR_4);

 return 0;
}

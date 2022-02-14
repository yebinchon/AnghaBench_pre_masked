
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct hci_uart {TYPE_1__* proto; } ;
struct hci_dev {int name; } ;
struct TYPE_2__ {int (* enqueue ) (struct hci_uart*,struct sk_buff*) ;} ;


 int FUNC_0 (char*,int ,int ,int ) ;
 struct hci_uart* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct hci_uart*) ;
 int FUNC_4 (struct hci_uart*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct hci_dev *VAR_0, struct sk_buff *VAR_1)
{
 struct hci_uart *VAR_2 = FUNC_1(VAR_0);

 FUNC_0("%s: type %d len %d", VAR_0->name, FUNC_2(VAR_1),
        VAR_1->len);

 VAR_2->proto->enqueue(VAR_2, VAR_1);

 FUNC_3(VAR_2);

 return 0;
}

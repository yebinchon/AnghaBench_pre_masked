
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nokia_bt_dev {int txq; } ;
struct hci_uart {struct nokia_bt_dev* priv; } ;
struct TYPE_2__ {int pkt_type; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct hci_uart *VAR_0, struct sk_buff *VAR_1)
{
 struct nokia_bt_dev *VAR_2 = VAR_0->priv;
 int VAR_3;


 FUNC_1(FUNC_3(VAR_1, 1), &FUNC_0(VAR_1)->pkt_type, 1);


 if (VAR_1->len % 2) {
  VAR_3 = FUNC_2(VAR_1, 1);
  if (VAR_3)
   return VAR_3;
  FUNC_4(VAR_1, 0x00);
 }

 FUNC_5(&VAR_2->txq, VAR_1);

 return 0;
}

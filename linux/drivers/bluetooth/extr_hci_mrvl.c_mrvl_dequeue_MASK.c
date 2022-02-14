
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mrvl_data {int rawq; int txq; } ;
struct hci_uart {struct mrvl_data* priv; } ;
struct TYPE_2__ {int pkt_type; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int *,int) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct hci_uart *VAR_0)
{
 struct mrvl_data *VAR_1 = VAR_0->priv;
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_2(&VAR_1->txq);
 if (!VAR_2) {

  VAR_2 = FUNC_2(&VAR_1->rawq);
 } else {

  FUNC_1(FUNC_3(VAR_2, 1), &FUNC_0(VAR_2)->pkt_type, 1);
 }

 return VAR_2;
}

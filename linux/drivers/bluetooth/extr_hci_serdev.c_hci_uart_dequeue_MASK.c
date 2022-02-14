
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hci_uart {struct sk_buff* tx_skb; TYPE_1__* proto; int flags; } ;
struct TYPE_2__ {struct sk_buff* (* dequeue ) (struct hci_uart*) ;} ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct hci_uart*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline struct sk_buff *FUNC_2(struct hci_uart *VAR_1)
{
 struct sk_buff *VAR_2 = VAR_1->tx_skb;

 if (!VAR_2) {
  if (FUNC_1(VAR_0, &VAR_1->flags))
   VAR_2 = VAR_1->proto->dequeue(VAR_1);
 } else
  VAR_1->tx_skb = ((void*)0);

 return VAR_2;
}

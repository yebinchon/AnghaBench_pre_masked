
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct chtls_sock {struct sk_buff* wr_skb_tail; struct sk_buff* wr_skb_head; } ;
struct TYPE_2__ {struct sk_buff* next_wr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(struct chtls_sock *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_0(VAR_1)->next_wr = ((void*)0);

 FUNC_1(VAR_1);

 if (!VAR_0->wr_skb_head)
  VAR_0->wr_skb_head = VAR_1;
 else
  FUNC_0(VAR_0->wr_skb_tail)->next_wr = VAR_1;
 VAR_0->wr_skb_tail = VAR_1;
}

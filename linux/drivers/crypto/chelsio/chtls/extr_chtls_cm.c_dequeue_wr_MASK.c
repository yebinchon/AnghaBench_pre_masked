
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct chtls_sock {struct sk_buff* wr_skb_head; } ;
struct TYPE_2__ {struct sk_buff* next_wr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct chtls_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct sock *VAR_0)
{
 struct chtls_sock *VAR_1 = FUNC_2(VAR_0);
 struct sk_buff *VAR_2 = VAR_1->wr_skb_head;

 if (FUNC_1(VAR_2)) {

  VAR_1->wr_skb_head = FUNC_0(VAR_2)->next_wr;
  FUNC_0(VAR_2)->next_wr = ((void*)0);
 }
 return VAR_2;
}

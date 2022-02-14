
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct cpl_abort_req {int dummy; } ;
struct chtls_sock {int txdata_skb_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_1 (int ,int) ;
 int FUNC_2 (struct sock*,int ,struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 struct chtls_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2)
{
 struct chtls_sock *VAR_3 = FUNC_4(VAR_2);
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_1(VAR_3->txdata_skb_cache,
        sizeof(struct cpl_abort_req));

 FUNC_2(VAR_2, VAR_0, VAR_4);
 FUNC_5(VAR_2);
 FUNC_0(VAR_2);
 if (VAR_2->sk_state == VAR_1)
  FUNC_3(VAR_2);
}

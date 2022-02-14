
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_nxt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cpl_abort_req {int rsvd1; int cmd; int rsvd0; } ;
struct chtls_sock {int txq_idx; int cdev; int tid; int txdata_skb_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cpl_abort_req*,int ,int ) ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (int ,int) ;
 int FUNC_2 (struct chtls_sock*,int ) ;
 int FUNC_3 (int ) ;
 struct chtls_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct tcp_sock*,struct sk_buff*,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_5, int VAR_6, struct sk_buff *VAR_7)
{
 struct cpl_abort_req *VAR_8;
 struct chtls_sock *VAR_9;
 struct tcp_sock *VAR_10;

 VAR_9 = FUNC_4(VAR_5);
 VAR_10 = FUNC_9(VAR_5);

 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_9->txdata_skb_cache, sizeof(*VAR_8));

 VAR_8 = (struct cpl_abort_req *)FUNC_6(VAR_7, sizeof(*VAR_8));
 FUNC_0(VAR_8, VAR_0, VAR_9->tid);
 FUNC_7(VAR_7, (VAR_9->txq_idx << 1) | VAR_2);
 VAR_8->rsvd0 = FUNC_3(VAR_10->snd_nxt);
 VAR_8->rsvd1 = !FUNC_2(VAR_9, VAR_3);
 VAR_8->cmd = VAR_6;
 FUNC_8(VAR_7, VAR_9->cdev, VAR_4);
 FUNC_5(VAR_5, VAR_10, VAR_7, VAR_6 == VAR_1);
}

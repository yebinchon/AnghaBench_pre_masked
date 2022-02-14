
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int rcv_nxt; int snd_nxt; } ;
struct sock {scalar_t__ sk_state; int (* sk_error_report ) (struct sock*) ;int sk_err; struct chtls_sock* sk_user_data; } ;
struct sk_buff {int dummy; } ;
struct cpl_abort_req_rss {int status; } ;
struct chtls_sock {int txq_idx; int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int ,int,int) ;
 int FUNC_5 (struct sock*,int ,int ) ;
 struct cpl_abort_req_rss* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct chtls_sock*,int ) ;
 int FUNC_8 (struct chtls_sock*,int ) ;
 int FUNC_9 (struct chtls_sock*,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sock*,int ,int ,int ) ;
 int FUNC_13 (struct sock*,int ) ;
 int FUNC_14 (struct sock*) ;
 struct tcp_sock* FUNC_15 (struct sock*) ;

__attribute__((used)) static void FUNC_16(struct sock *VAR_9, struct sk_buff *VAR_10)
{
 const struct cpl_abort_req_rss *VAR_11 = FUNC_6(VAR_10) + VAR_6;
 struct chtls_sock *VAR_12 = VAR_9->sk_user_data;
 int VAR_13 = VAR_0;
 int VAR_14 = VAR_12->txq_idx;

 if (FUNC_10(VAR_11->status)) {
  if (VAR_9->sk_state == VAR_8)
   FUNC_5(VAR_9, 0, 0);

  FUNC_11(VAR_10);
  return;
 }

 FUNC_8(VAR_12, VAR_1);

 if (!FUNC_7(VAR_12, VAR_3) &&
     !FUNC_7(VAR_12, VAR_4)) {
  struct tcp_sock *VAR_15 = FUNC_15(VAR_9);

  if (FUNC_12(VAR_9, 0, VAR_15->snd_nxt, VAR_15->rcv_nxt) < 0)
   FUNC_0(1, "send_tx_flowc error");
  FUNC_9(VAR_12, VAR_4);
 }

 FUNC_9(VAR_12, VAR_3);

 if (!FUNC_7(VAR_12, VAR_2)) {
  VAR_9->sk_err = VAR_5;

  if (!FUNC_13(VAR_9, VAR_7))
   VAR_9->sk_error_report(VAR_9);

  if (VAR_9->sk_state == VAR_8 && !FUNC_1(VAR_9, VAR_10))
   return;

  FUNC_3(VAR_9);
  FUNC_2(VAR_9);
 }

 FUNC_4(VAR_9, VAR_10, VAR_12->cdev, VAR_13, VAR_14);
}

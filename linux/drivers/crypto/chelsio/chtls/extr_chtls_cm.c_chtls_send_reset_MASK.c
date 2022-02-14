
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int rcv_nxt; int snd_nxt; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct chtls_sock {int cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct chtls_sock*,int ) ;
 int FUNC_4 (struct chtls_sock*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 struct chtls_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*,int ,int ,int ) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_5, int VAR_6, struct sk_buff *VAR_7)
{
 struct chtls_sock *VAR_8 = FUNC_6(VAR_5);

 if (FUNC_9(FUNC_3(VAR_8, VAR_1) ||
       !VAR_8->cdev)) {
  if (VAR_5->sk_state == VAR_4)
   FUNC_4(VAR_8, VAR_2);
  goto out;
 }

 if (!FUNC_3(VAR_8, VAR_3)) {
  struct tcp_sock *VAR_9 = FUNC_8(VAR_5);

  if (FUNC_7(VAR_5, 0, VAR_9->snd_nxt, VAR_9->rcv_nxt) < 0)
   FUNC_0(1, "send tx flowc error");
  FUNC_4(VAR_8, VAR_3);
 }

 FUNC_4(VAR_8, VAR_0);
 FUNC_1(VAR_5);

 FUNC_4(VAR_8, VAR_1);
 if (VAR_5->sk_state != VAR_4)
  FUNC_2(VAR_5, VAR_6, VAR_7);
 else
  goto out;

 return;
out:
 FUNC_5(VAR_7);
}

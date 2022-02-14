
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int linger2; scalar_t__ snd_una; } ;
struct sock {int sk_state; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; } ;
struct sk_buff {int dummy; } ;
struct cpl_close_con_rpl {int snd_nxt; } ;
struct chtls_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct cpl_close_con_rpl* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct chtls_sock*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 struct chtls_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int ) ;
 struct tcp_sock* FUNC_13 (struct sock*) ;

__attribute__((used)) static void FUNC_14(struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct cpl_close_con_rpl *VAR_8 = FUNC_4(VAR_7) + VAR_2;
 struct chtls_sock *VAR_9;
 struct tcp_sock *VAR_10;

 VAR_9 = FUNC_9(VAR_6);
 VAR_10 = FUNC_13(VAR_6);

 VAR_10->snd_una = FUNC_7(VAR_8->snd_nxt) - 1;

 switch (VAR_6->sk_state) {
 case 130:
  FUNC_2(VAR_6);
  if (FUNC_5(VAR_9, VAR_0))
   FUNC_1(VAR_6);
  else
   FUNC_3(VAR_6);
  break;
 case 128:
  FUNC_2(VAR_6);
  FUNC_1(VAR_6);
  break;
 case 129:
  FUNC_12(VAR_6, VAR_5);
  VAR_6->sk_shutdown |= VAR_3;

  if (!FUNC_10(VAR_6, VAR_4))
   VAR_6->sk_state_change(VAR_6);
  else if (FUNC_13(VAR_6)->linger2 < 0 &&
    !FUNC_5(VAR_9, VAR_1))
   FUNC_0(VAR_6, VAR_7);
  break;
 default:
  FUNC_8("close_con_rpl in bad state %d\n", VAR_6->sk_state);
 }
 FUNC_6(VAR_7);
}

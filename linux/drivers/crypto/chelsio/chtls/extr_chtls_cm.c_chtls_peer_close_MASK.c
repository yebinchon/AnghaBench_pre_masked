
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_shutdown; int sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff {int dummy; } ;
struct chtls_sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct chtls_sock*,int ) ;
 int FUNC_4 (char*,int) ;
 struct chtls_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ,int ) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_11, struct sk_buff *VAR_12)
{
 struct chtls_sock *VAR_13 = FUNC_5(VAR_11);

 VAR_11->sk_shutdown |= VAR_3;
 FUNC_8(VAR_11, VAR_6);

 switch (VAR_11->sk_state) {
 case 128:
 case 131:
  FUNC_10(VAR_11, VAR_9);
  break;
 case 130:
  FUNC_10(VAR_11, VAR_10);
  break;
 case 129:
  FUNC_1(VAR_11);
  if (FUNC_3(VAR_13, VAR_0))
   FUNC_0(VAR_11);
  else
   FUNC_2(VAR_11);
  break;
 default:
  FUNC_4("cpl_peer_close in bad state %d\n", VAR_11->sk_state);
 }

 if (!FUNC_7(VAR_11, VAR_5)) {
  VAR_11->sk_state_change(VAR_11);


  if ((VAR_11->sk_shutdown & VAR_4) ||
      VAR_11->sk_state == VAR_8)
   FUNC_6(VAR_11, VAR_7, VAR_1);
  else
   FUNC_6(VAR_11, VAR_7, VAR_2);
 }
}

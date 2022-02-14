
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct chtls_sock {int txq; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct chtls_sock*,int) ;
 scalar_t__ FUNC_2 (struct tcp_sock*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct tcp_sock*,int,struct sk_buff*) ;
 struct chtls_sock* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (struct sock*) ;
 struct sk_buff* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;

void FUNC_10(struct sock *VAR_2, int VAR_3)
{
 struct chtls_sock *VAR_4 = FUNC_5(VAR_2);
 int VAR_5 = FUNC_8(&VAR_4->txq);

 if (FUNC_3(VAR_5)) {
  struct sk_buff *VAR_6 = FUNC_7(&VAR_4->txq);
  struct tcp_sock *VAR_7 = FUNC_9(VAR_2);

  FUNC_4(VAR_7, VAR_3, VAR_6);

  if (!(FUNC_0(VAR_6)->flags & VAR_1) &&
      FUNC_2(VAR_7, VAR_3)) {
   FUNC_0(VAR_6)->flags |= VAR_0;
   return;
  }

  FUNC_0(VAR_6)->flags &= ~VAR_0;
  if (VAR_5 == 1 &&
      ((FUNC_0(VAR_6)->flags & VAR_1) ||
       FUNC_6(VAR_2)))
   FUNC_1(VAR_4, 1);
 }
}

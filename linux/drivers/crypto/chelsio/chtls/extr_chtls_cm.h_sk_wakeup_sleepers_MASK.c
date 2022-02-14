
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_wq {int dummy; } ;
struct sock {int sk_wq; } ;


 struct socket_wq* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct socket_wq*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(struct sock *VAR_0, bool VAR_1)
{
 struct socket_wq *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_0->sk_wq);
 if (FUNC_4(VAR_2)) {
  if (VAR_1)
   FUNC_6(FUNC_3(VAR_0));
  else
   FUNC_5(FUNC_3(VAR_0));
 }
 FUNC_2();
}

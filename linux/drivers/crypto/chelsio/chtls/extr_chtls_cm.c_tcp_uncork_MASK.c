
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int nonagle; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,int ) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->nonagle & VAR_0) {
  VAR_2->nonagle &= ~VAR_0;
  FUNC_0(VAR_1, 0);
 }
}

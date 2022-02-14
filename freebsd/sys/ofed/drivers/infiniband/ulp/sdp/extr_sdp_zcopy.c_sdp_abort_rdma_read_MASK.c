
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sdp_sock {struct rx_srcavail_state* rx_sa; } ;
struct rx_srcavail_state {int umem; int fmr; } ;


 int FUNC_0 (struct socket*,int *,int *) ;
 struct sdp_sock* FUNC_1 (struct socket*) ;

void FUNC_2(struct socket *VAR_0)
{
 struct sdp_sock *VAR_1 = FUNC_1(VAR_0);
 struct rx_srcavail_state *VAR_2 = VAR_1->rx_sa;

 if (!VAR_2)
  return;

 FUNC_0(VAR_0, &VAR_2->fmr, &VAR_2->umem);

 VAR_1->rx_sa = ((void*)0);
}

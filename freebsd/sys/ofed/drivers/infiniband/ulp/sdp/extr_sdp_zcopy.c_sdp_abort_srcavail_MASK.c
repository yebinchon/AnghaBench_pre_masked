
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_srcavail_state {int umem; int fmr; } ;
struct socket {int dummy; } ;
struct sdp_sock {int tx_sa_lock; struct tx_srcavail_state* tx_sa; int srcavail_cancel_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct socket*,int *,int *) ;
 struct sdp_sock* FUNC_3 (struct socket*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct socket *VAR_0)
{
 struct sdp_sock *VAR_1 = FUNC_3(VAR_0);
 struct tx_srcavail_state *VAR_2 = VAR_1->tx_sa;
 unsigned long VAR_3;

 if (!VAR_2)
  return;

 FUNC_0(&VAR_1->srcavail_cancel_work);
 FUNC_1();

 FUNC_4(&VAR_1->tx_sa_lock, VAR_3);

 FUNC_2(VAR_0, &VAR_2->fmr, &VAR_2->umem);

 VAR_1->tx_sa = ((void*)0);

 FUNC_5(&VAR_1->tx_sa_lock, VAR_3);
}

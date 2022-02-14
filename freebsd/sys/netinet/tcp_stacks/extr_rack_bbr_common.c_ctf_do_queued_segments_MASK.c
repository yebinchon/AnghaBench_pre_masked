
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int * t_tail_pkt; struct mbuf* t_in_pkt; } ;
struct socket {int dummy; } ;
struct mbuf {int dummy; } ;


 scalar_t__ FUNC_0 (struct tcpcb*,struct socket*,struct mbuf*,int) ;

int
FUNC_1(struct socket *VAR_0, struct tcpcb *VAR_1, int VAR_2)
{
 struct mbuf *VAR_3;


 if (VAR_1->t_in_pkt) {
  VAR_3 = VAR_1->t_in_pkt;
  VAR_1->t_in_pkt = ((void*)0);
  VAR_1->t_tail_pkt = ((void*)0);
  if (FUNC_0(VAR_1, VAR_0, VAR_3, VAR_2)) {

   return(1);
  }
 }
 return (0);
}

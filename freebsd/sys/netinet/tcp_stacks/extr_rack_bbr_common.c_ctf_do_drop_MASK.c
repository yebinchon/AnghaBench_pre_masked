
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_inpcb; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mbuf*) ;

void
FUNC_2(struct mbuf *VAR_0, struct tcpcb *VAR_1)
{




 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_1->t_inpcb);
 if (VAR_0)
  FUNC_1(VAR_0);
}

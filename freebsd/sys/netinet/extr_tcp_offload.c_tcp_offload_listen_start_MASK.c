
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_inpcb; } ;


 int FUNC_0 (void (*) (struct tcpcb*),struct tcpcb*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct tcpcb *VAR_0)
{

 FUNC_1(VAR_0->t_inpcb);

 FUNC_0(FUNC_2, VAR_0);
}

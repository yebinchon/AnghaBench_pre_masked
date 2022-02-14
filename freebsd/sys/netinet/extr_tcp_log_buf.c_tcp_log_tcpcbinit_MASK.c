
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_flags2; int t_logstate; int t_logs; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;

void
FUNC_2(struct tcpcb *VAR_2)
{


 FUNC_0(&VAR_2->t_logs);





 if (FUNC_1()) {
  VAR_2->t_logstate = VAR_1;
  VAR_2->t_flags2 |= VAR_0;
 }
}

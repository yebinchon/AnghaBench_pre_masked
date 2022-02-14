
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_logstate; int t_flags2; int t_logs; int t_inpcb; } ;
struct tcp_log_mem {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct tcp_log_mem* FUNC_1 (int *) ;







 int VAR_1 ;
 int FUNC_2 (struct tcpcb*,struct tcp_log_mem*) ;

int
FUNC_3(struct tcpcb *VAR_2, int VAR_3)
{
 struct tcp_log_mem *VAR_4;

 FUNC_0(VAR_2->t_inpcb);
 switch(VAR_3) {
 case 134:
  while ((VAR_4 = FUNC_1(&VAR_2->t_logs)) != ((void*)0))
   FUNC_2(VAR_2, VAR_4);


 case 130:
  VAR_2->t_logstate = 130;
  break;

 case 129:
 case 132:
 case 133:
 case 131:
 case 128:
  VAR_2->t_logstate = VAR_3;
  break;

 default:
  return (VAR_0);
 }

 VAR_2->t_flags2 &= ~(VAR_1);

 return (0);
}

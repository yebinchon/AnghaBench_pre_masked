
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {TYPE_1__* sackblks; scalar_t__ rcv_numsacks; int t_inpcb; } ;
struct TYPE_2__ {scalar_t__ end; scalar_t__ start; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

void
FUNC_1(struct tcpcb *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->t_inpcb);
 VAR_1->rcv_numsacks = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->sackblks[VAR_2].start = VAR_1->sackblks[VAR_2].end=0;
}

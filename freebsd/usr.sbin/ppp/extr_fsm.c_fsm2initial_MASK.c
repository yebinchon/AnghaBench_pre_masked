
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsm {scalar_t__ state; int StoppedTimer; int OpenTimer; int FsmTimer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct fsm*) ;
 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct fsm *VAR_2)
{
  FUNC_2(&VAR_2->FsmTimer);
  FUNC_2(&VAR_2->OpenTimer);
  FUNC_2(&VAR_2->StoppedTimer);
  if (VAR_2->state == VAR_1)
    FUNC_0(VAR_2);
  if (VAR_2->state > VAR_0)
    FUNC_1(VAR_2);
  if (VAR_2->state > VAR_0)
    FUNC_0(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* arg; int func; } ;
struct fsm {TYPE_1__* fn; TYPE_2__ FsmTimer; } ;
struct TYPE_3__ {int (* InitRestartCounter ) (struct fsm*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fsm*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(struct fsm *VAR_1, int VAR_2)
{
  FUNC_1(&VAR_1->FsmTimer);
  VAR_1->FsmTimer.func = VAR_0;
  VAR_1->FsmTimer.arg = (void *)VAR_1;
  (*VAR_1->fn->InitRestartCounter)(VAR_1, VAR_2);
}

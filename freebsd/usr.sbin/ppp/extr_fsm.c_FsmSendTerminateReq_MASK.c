
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsm {int restart; int FsmTimer; TYPE_1__* fn; int reqid; } ;
struct TYPE_2__ {int (* SentTerminateReq ) (struct fsm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsm*,int ,int ,int *,int ,int ) ;
 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct fsm *VAR_2)
{
  FUNC_0(VAR_2, VAR_0, VAR_2->reqid, ((void*)0), 0, VAR_1);
  (*VAR_2->fn->SentTerminateReq)(VAR_2);
  FUNC_2(&VAR_2->FsmTimer);
  VAR_2->restart--;
}

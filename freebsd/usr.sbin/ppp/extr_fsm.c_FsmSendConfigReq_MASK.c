
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ reqs; } ;
struct fsm {TYPE_1__* link; int name; TYPE_2__ more; int FsmTimer; TYPE_3__* fn; int restart; } ;
struct TYPE_6__ {int (* SendConfigReq ) (struct fsm*) ;} ;
struct TYPE_4__ {int lcp; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct fsm*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct fsm *VAR_1)
{
  if (VAR_1->more.reqs-- > 0 && VAR_1->restart-- > 0) {
    (*VAR_1->fn->SendConfigReq)(VAR_1);
    FUNC_4(&VAR_1->FsmTimer);
  } else {
    if (VAR_1->more.reqs < 0)
      FUNC_2(VAR_0, "%s: Too many %s REQs sent - abandoning "
                 "negotiation\n", VAR_1->link->name, VAR_1->name);
    FUNC_1(&VAR_1->link->lcp);
    FUNC_0(VAR_1);
  }
}

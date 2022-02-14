
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int timeout; int maxreq; int maxtrm; } ;
struct TYPE_6__ {TYPE_2__ fsm; } ;
struct lcp {TYPE_3__ cfg; } ;
struct TYPE_4__ {int load; } ;
struct fsm {int restart; TYPE_1__ FsmTimer; } ;




 int VAR_0 ;
 struct lcp* FUNC_0 (struct fsm*) ;

__attribute__((used)) static void
FUNC_1(struct fsm *VAR_1, int VAR_2)
{

  struct lcp *VAR_3 = FUNC_0(VAR_1);

  VAR_1->FsmTimer.load = VAR_3->cfg.fsm.timeout * VAR_0;
  switch (VAR_2) {
    case 129:
      VAR_1->restart = VAR_3->cfg.fsm.maxreq;
      break;
    case 128:
      VAR_1->restart = VAR_3->cfg.fsm.maxtrm;
      break;
    default:
      VAR_1->restart = 1;
      break;
  }
}

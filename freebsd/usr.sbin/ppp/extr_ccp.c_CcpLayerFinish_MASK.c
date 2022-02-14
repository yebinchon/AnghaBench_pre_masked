
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct fsm {TYPE_3__* link; } ;
struct ccp_opt {struct ccp_opt* next; } ;
struct TYPE_5__ {struct ccp_opt* opt; } ;
struct ccp {TYPE_1__ out; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct TYPE_6__ {TYPE_4__ fsm; } ;
struct TYPE_7__ {TYPE_2__ lcp; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ccp*) ;
 int FUNC_1 (struct ccp_opt*) ;
 struct ccp* FUNC_2 (struct fsm*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_5(struct fsm *VAR_3)
{

  struct ccp *VAR_4 = FUNC_2(VAR_3);
  struct ccp_opt *VAR_5;

  FUNC_4(VAR_0, "%s: LayerFinish.\n", VAR_3->link->name);





  while (VAR_4->out.opt) {
    VAR_5 = VAR_4->out.opt->next;
    FUNC_1(VAR_4->out.opt);
    VAR_4->out.opt = VAR_5;
  }

  if (FUNC_0(VAR_4)) {
    if (VAR_3->link->lcp.fsm.state == VAR_2)
      FUNC_4(VAR_1, "%s: Closing due to CCP completion\n", VAR_3->link->name);
    FUNC_3(&VAR_3->link->lcp.fsm);
  }
}

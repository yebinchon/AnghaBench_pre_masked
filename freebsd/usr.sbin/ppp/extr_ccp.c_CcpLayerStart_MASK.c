
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int reqs; int naks; int rejs; } ;
struct fsm {TYPE_2__ more; TYPE_1__* link; } ;
struct TYPE_7__ {int maxreq; } ;
struct TYPE_8__ {TYPE_3__ fsm; } ;
struct ccp {TYPE_4__ cfg; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 struct ccp* FUNC_0 (struct fsm*) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(struct fsm *VAR_1)
{

  struct ccp *VAR_2 = FUNC_0(VAR_1);

  FUNC_1(VAR_0, "%s: LayerStart.\n", VAR_1->link->name);
  VAR_1->more.reqs = VAR_1->more.naks = VAR_1->more.rejs = VAR_2->cfg.fsm.maxreq * 3;
}

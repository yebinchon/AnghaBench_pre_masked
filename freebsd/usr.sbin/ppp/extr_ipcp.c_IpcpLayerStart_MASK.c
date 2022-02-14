
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int maxreq; } ;
struct TYPE_7__ {TYPE_2__ fsm; } ;
struct ipcp {scalar_t__ peer_req; TYPE_3__ cfg; int throughput; } ;
struct TYPE_5__ {int reqs; int naks; int rejs; } ;
struct fsm {TYPE_1__ more; int bundle; TYPE_4__* link; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipcp* FUNC_1 (struct fsm*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct fsm *VAR_2)
{

  struct ipcp *VAR_3 = FUNC_1(VAR_2);

  FUNC_2(VAR_0, "%s: LayerStart.\n", VAR_2->link->name);
  FUNC_3(&VAR_3->throughput, "IPCP throughput",
                   FUNC_0(VAR_2->bundle, VAR_1));
  VAR_2->more.reqs = VAR_2->more.naks = VAR_2->more.rejs = VAR_3->cfg.fsm.maxreq * 3;
  VAR_3->peer_req = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct physical {int hdlc; } ;
struct TYPE_6__ {int maxreq; } ;
struct TYPE_7__ {TYPE_2__ fsm; } ;
struct lcp {TYPE_3__ cfg; int his_accmap; int want_accmap; } ;
struct TYPE_5__ {int reqs; int naks; int rejs; } ;
struct fsm {TYPE_1__ more; TYPE_4__* link; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 struct lcp* FUNC_0 (struct fsm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lcp*) ;
 struct physical* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct lcp*) ;
 int FUNC_6 (struct physical*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct fsm *VAR_1)
{

  struct physical *VAR_2 = FUNC_3(VAR_1->link);
  struct lcp *VAR_3 = FUNC_0(VAR_1);

  FUNC_4(VAR_0, "%s: LayerUp\n", VAR_1->link->name);
  FUNC_6(VAR_2, VAR_3->want_accmap, VAR_3->his_accmap);
  FUNC_5(VAR_3);
  FUNC_1(&VAR_2->hdlc);
  VAR_1->more.reqs = VAR_1->more.naks = VAR_1->more.rejs = VAR_3->cfg.fsm.maxreq * 3;

  FUNC_2(VAR_3);

  return 1;
}

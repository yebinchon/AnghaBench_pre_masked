
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ load; } ;
struct TYPE_6__ {TYPE_4__ timer; } ;
struct TYPE_7__ {TYPE_2__ lqm; } ;
struct physical {TYPE_3__ hdlc; } ;
struct TYPE_5__ {int link; } ;
struct lcp {TYPE_1__ fsm; } ;


 struct physical* FUNC_0 (int ) ;
 int FUNC_1 (struct lcp*) ;
 int FUNC_2 (TYPE_4__*) ;

void
FUNC_3(struct lcp *VAR_0)
{
  struct physical *VAR_1 = FUNC_0(VAR_0->fsm.link);

  FUNC_1(VAR_0);
  if (VAR_1->hdlc.lqm.timer.load)
    FUNC_2(&VAR_1->hdlc.lqm.timer);
}

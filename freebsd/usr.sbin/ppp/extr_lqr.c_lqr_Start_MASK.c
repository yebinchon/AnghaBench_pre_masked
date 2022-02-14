
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ load; } ;
struct TYPE_7__ {TYPE_2__ timer; } ;
struct TYPE_8__ {TYPE_3__ lqm; } ;
struct physical {TYPE_4__ hdlc; } ;
struct TYPE_5__ {int link; } ;
struct lcp {TYPE_1__ fsm; } ;


 int FUNC_0 (struct lcp*) ;
 struct physical* FUNC_1 (int ) ;
 int FUNC_2 (struct lcp*) ;

void
FUNC_3(struct lcp *VAR_0)
{
  struct physical *VAR_1 = FUNC_1(VAR_0->fsm.link);

  FUNC_2(VAR_0);
  if (VAR_1->hdlc.lqm.timer.load)
    FUNC_0(VAR_0);
}

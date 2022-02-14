
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct cmdargs {int prompt; TYPE_9__* cx; } ;
struct TYPE_18__ {TYPE_8__* physical; } ;
struct TYPE_13__ {int load; } ;
struct TYPE_14__ {TYPE_4__ StoppedTimer; } ;
struct TYPE_15__ {TYPE_5__ fsm; } ;
struct TYPE_10__ {int load; } ;
struct TYPE_11__ {TYPE_1__ StoppedTimer; } ;
struct TYPE_12__ {TYPE_2__ fsm; } ;
struct TYPE_16__ {TYPE_6__ ccp; TYPE_3__ lcp; } ;
struct TYPE_17__ {TYPE_7__ link; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct cmdargs const *VAR_1)
{
  FUNC_0(VAR_1->prompt, " Stopped Timer:  LCP: ");
  if (!VAR_1->cx->physical->link.lcp.fsm.StoppedTimer.load)
    FUNC_0(VAR_1->prompt, "Disabled");
  else
    FUNC_0(VAR_1->prompt, "%ld secs",
                  VAR_1->cx->physical->link.lcp.fsm.StoppedTimer.load / VAR_0);

  FUNC_0(VAR_1->prompt, ", CCP: ");
  if (!VAR_1->cx->physical->link.ccp.fsm.StoppedTimer.load)
    FUNC_0(VAR_1->prompt, "Disabled");
  else
    FUNC_0(VAR_1->prompt, "%ld secs",
                  VAR_1->cx->physical->link.ccp.fsm.StoppedTimer.load / VAR_0);

  FUNC_0(VAR_1->prompt, "\n");

  return 0;
}

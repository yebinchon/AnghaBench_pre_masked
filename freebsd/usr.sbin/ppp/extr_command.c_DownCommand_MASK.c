
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


struct fsm {int dummy; } ;
struct cmdargs {int argc; int argn; TYPE_9__* bundle; TYPE_8__* cx; int * argv; } ;
struct TYPE_13__ {struct fsm fsm; } ;
struct TYPE_14__ {TYPE_4__ ccp; } ;
struct TYPE_15__ {TYPE_5__ link; } ;
struct TYPE_16__ {TYPE_6__ mp; } ;
struct TYPE_18__ {TYPE_7__ ncp; } ;
struct TYPE_17__ {TYPE_3__* physical; } ;
struct TYPE_10__ {struct fsm fsm; } ;
struct TYPE_11__ {TYPE_1__ ccp; } ;
struct TYPE_12__ {TYPE_2__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_9__*,int ) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 int FUNC_2 (struct fsm*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct cmdargs const *VAR_2)
{
  if (VAR_2->argc == VAR_2->argn) {
      if (VAR_2->cx)
        FUNC_1(VAR_2->cx, VAR_1);
      else
        FUNC_0(VAR_2->bundle, VAR_1);
  } else if (VAR_2->argc == VAR_2->argn + 1) {
    if (!FUNC_3(VAR_2->argv[VAR_2->argn], "lcp")) {
      if (VAR_2->cx)
        FUNC_1(VAR_2->cx, VAR_0);
      else
        FUNC_0(VAR_2->bundle, VAR_0);
    } else if (!FUNC_3(VAR_2->argv[VAR_2->argn], "ccp")) {
      struct fsm *VAR_3 = VAR_2->cx ? &VAR_2->cx->physical->link.ccp.fsm :
                                 &VAR_2->bundle->ncp.mp.link.ccp.fsm;
      FUNC_2(VAR_3);
    } else
      return -1;
  } else
    return -1;

  return 0;
}

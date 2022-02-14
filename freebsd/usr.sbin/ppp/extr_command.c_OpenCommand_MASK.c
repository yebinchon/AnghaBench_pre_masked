
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct fsm {scalar_t__ state; scalar_t__ open_mode; TYPE_7__* link; } ;
struct datalink {int * name; TYPE_3__* physical; } ;
struct cmdargs {int argc; int argn; TYPE_11__* bundle; struct datalink* cx; int * argv; } ;
struct TYPE_22__ {struct fsm fsm; } ;
struct TYPE_23__ {TYPE_8__ ipcp; } ;
struct TYPE_19__ {scalar_t__ state; } ;
struct TYPE_20__ {TYPE_5__ fsm; } ;
struct TYPE_21__ {TYPE_6__ lcp; } ;
struct TYPE_18__ {struct fsm fsm; } ;
struct TYPE_15__ {struct fsm fsm; } ;
struct TYPE_16__ {TYPE_1__ lcp; } ;
struct TYPE_17__ {TYPE_2__ link; } ;
struct TYPE_14__ {TYPE_9__ ncp; } ;
struct TYPE_13__ {TYPE_4__ ccp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct datalink* FUNC_0 (TYPE_11__*,int *) ;
 int FUNC_1 (TYPE_11__*,int *,int ,int) ;
 TYPE_10__* FUNC_2 (struct cmdargs const*) ;
 int FUNC_3 (struct fsm*) ;
 int FUNC_4 (struct fsm*) ;
 int FUNC_5 (struct fsm*) ;
 int FUNC_6 (struct fsm*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static int
FUNC_9(struct cmdargs const *VAR_4)
{
  if (VAR_4->argc == VAR_4->argn)
    FUNC_1(VAR_4->bundle, VAR_4->cx ? VAR_4->cx->name : ((void*)0), VAR_1, 1);
  else if (VAR_4->argc == VAR_4->argn + 1) {
    if (!FUNC_8(VAR_4->argv[VAR_4->argn], "lcp")) {
      struct datalink *VAR_5 = VAR_4->cx ?
        VAR_4->cx : FUNC_0(VAR_4->bundle, ((void*)0));
      if (VAR_5) {
        if (VAR_5->physical->link.lcp.fsm.state == VAR_2)
          FUNC_5(&VAR_5->physical->link.lcp.fsm);
        else
          FUNC_1(VAR_4->bundle, VAR_5->name, VAR_1, 1);
      } else
        FUNC_7(VAR_0, "open lcp: You must specify a link\n");
    } else if (!FUNC_8(VAR_4->argv[VAR_4->argn], "ccp")) {
      struct fsm *VAR_6;

      VAR_6 = &FUNC_2(VAR_4)->ccp.fsm;
      if (VAR_6->link->lcp.fsm.state != VAR_2)
        FUNC_7(VAR_0, "open: LCP must be open before opening CCP\n");
      else if (VAR_6->state == VAR_2)
        FUNC_5(VAR_6);
      else {
        VAR_6->open_mode = 0;
        if (VAR_6->state == VAR_3) {
          FUNC_3(VAR_6);
          FUNC_6(VAR_6);
        } else {
          FUNC_6(VAR_6);
          FUNC_4(VAR_6);
        }
      }
    } else if (!FUNC_8(VAR_4->argv[VAR_4->argn], "ipcp")) {
      if (VAR_4->cx)
        FUNC_7(VAR_0, "open ipcp: You need not specify a link\n");
      if (VAR_4->bundle->ncp.ipcp.fsm.state == VAR_2)
        FUNC_5(&VAR_4->bundle->ncp.ipcp.fsm);
      else
        FUNC_1(VAR_4->bundle, ((void*)0), VAR_1, 1);
    } else
      return -1;
  } else
    return -1;

  return 0;
}

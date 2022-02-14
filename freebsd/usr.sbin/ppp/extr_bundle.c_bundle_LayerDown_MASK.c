
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct fsm {scalar_t__ proto; TYPE_6__* link; TYPE_1__* bundle; } ;
struct datalink {scalar_t__ state; TYPE_5__* physical; struct datalink* next; } ;
struct TYPE_18__ {scalar_t__ active; } ;
struct TYPE_17__ {TYPE_8__ mp; } ;
struct TYPE_12__ {scalar_t__ sessiontime; } ;
struct bundle {TYPE_7__ ncp; struct datalink* links; scalar_t__ upat; TYPE_2__ radius; } ;
struct TYPE_16__ {int name; } ;
struct TYPE_13__ {struct fsm fsm; } ;
struct TYPE_14__ {TYPE_3__ lcp; } ;
struct TYPE_15__ {TYPE_4__ link; } ;
struct TYPE_11__ {int ncp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bundle*) ;
 int FUNC_1 (struct bundle*) ;
 int FUNC_2 (struct bundle*) ;
 int FUNC_3 (struct bundle*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*,struct datalink*) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_7__*) ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(void *VAR_4, struct fsm *VAR_5)
{
  struct bundle *VAR_6 = (struct bundle *)VAR_4;

  if (FUNC_4(VAR_5->proto)) {
    if (FUNC_10(&VAR_5->bundle->ncp) == 0) {

      if (VAR_6->radius.sessiontime)
        FUNC_3(VAR_6);

      FUNC_2(VAR_6);
      VAR_6->upat = 0;
      FUNC_8(&VAR_6->ncp.mp);
    }
  } else if (VAR_5->proto == VAR_3) {
    struct datalink *VAR_7;
    struct datalink *VAR_8;
    int VAR_9;

    FUNC_1(VAR_6);

    VAR_8 = ((void*)0);
    VAR_9 = 0;
    for (VAR_7 = VAR_6->links; VAR_7; VAR_7 = VAR_7->next) {
      if (VAR_5 == &VAR_7->physical->link.lcp.fsm)
        VAR_8 = VAR_7;
      else if (VAR_7->state != VAR_0 && VAR_7->state != VAR_1)
        VAR_9++;
    }

    if (VAR_6->ncp.mp.active) {
      FUNC_0(VAR_6);

      if (VAR_8)
        FUNC_7(&VAR_6->ncp.mp, VAR_8);
      else
        FUNC_5(VAR_2, "Oops, lost an unrecognised datalink (%s) !\n",
                   VAR_5->link->name);
    }

    if (!VAR_9) {

      FUNC_9(&VAR_6->ncp);
      FUNC_6(&VAR_6->ncp.mp);
    }
  }
}

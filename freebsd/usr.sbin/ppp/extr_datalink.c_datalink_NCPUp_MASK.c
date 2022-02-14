
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_17__ {int authname; } ;
struct datalink {TYPE_4__* physical; TYPE_2__* parent; TYPE_11__* bundle; TYPE_1__ peer; int name; } ;
struct TYPE_24__ {int open_mode; } ;
struct TYPE_23__ {TYPE_1__ peer; } ;
struct TYPE_19__ {int fsm; scalar_t__ his_mrru; scalar_t__ want_mrru; } ;
struct TYPE_15__ {TYPE_8__ fsm; } ;
struct TYPE_22__ {TYPE_3__ lcp; TYPE_10__ ccp; } ;
struct TYPE_21__ {TYPE_7__ mp; } ;
struct TYPE_20__ {TYPE_6__ link; } ;
struct TYPE_18__ {int object; int (* LayerUp ) (int ,int *) ;} ;
struct TYPE_16__ {TYPE_5__ ncp; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_11__*,int ) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (struct datalink*) ;
 int FUNC_6 (struct datalink*,int ) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (TYPE_7__*,struct datalink*) ;
 int FUNC_11 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *) ;

void
FUNC_14(struct datalink *VAR_4)
{
  int VAR_5 = FUNC_4(&VAR_4->physical->link.ccp);

  if (VAR_4->physical->link.lcp.want_mrru && VAR_4->physical->link.lcp.his_mrru) {

    switch (FUNC_10(&VAR_4->bundle->ncp.mp, VAR_4)) {
      case 129:

        return;
      case 128:

        FUNC_0(VAR_4->bundle, VAR_4->peer.authname);
        FUNC_1(VAR_4->bundle);

      case 131:

        VAR_4->physical->link.ccp.fsm.open_mode = VAR_2;
        FUNC_1(VAR_4->bundle);
        break;
      case 130:
        FUNC_5(VAR_4);
        return;
    }
  } else if (FUNC_3(VAR_4->bundle) == VAR_3) {
    FUNC_9(VAR_1, "%s: Already in NETWORK phase\n", VAR_4->name);
    FUNC_6(VAR_4, VAR_0);
    FUNC_1(VAR_4->bundle);
    (*VAR_4->parent->LayerUp)(VAR_4->parent->object, &VAR_4->physical->link.lcp.fsm);
    return;
  } else {
    VAR_4->bundle->ncp.mp.peer = VAR_4->peer;
    FUNC_11(&VAR_4->bundle->ncp, &VAR_4->physical->link);
    FUNC_0(VAR_4->bundle, VAR_4->peer.authname);
  }

  if (VAR_5) {
    FUNC_8(&VAR_4->physical->link.ccp.fsm);
    FUNC_7(&VAR_4->physical->link.ccp.fsm);
  }
  FUNC_6(VAR_4, VAR_0);
  FUNC_2(VAR_4->bundle, VAR_3);
  (*VAR_4->parent->LayerUp)(VAR_4->parent->object, &VAR_4->physical->link.lcp.fsm);
}

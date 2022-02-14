
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct fsm {scalar_t__ proto; } ;
struct TYPE_14__ {int authtimer; } ;
struct TYPE_15__ {TYPE_6__ auth; } ;
struct TYPE_13__ {int authtimer; } ;
struct TYPE_16__ {int required; } ;
struct datalink {int state; TYPE_7__ chap; TYPE_5__ pap; TYPE_8__ cbcp; TYPE_4__* parent; TYPE_3__* physical; int peer; } ;
struct TYPE_12__ {int object; int (* LayerDown ) (int ,struct fsm*) ;} ;
struct TYPE_9__ {int fsm; } ;
struct TYPE_10__ {TYPE_1__ ccp; } ;
struct TYPE_11__ {TYPE_2__ link; } ;




 int VAR_0 ;

 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (struct datalink*) ;
 int FUNC_2 (struct datalink*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct fsm*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2, struct fsm *VAR_3)
{

  struct datalink *VAR_4 = (struct datalink *)VAR_2;

  if (VAR_3->proto == VAR_1) {
    switch (VAR_4->state) {
      case 128:
        FUNC_4(&VAR_4->peer);
        FUNC_3(&VAR_4->physical->link.ccp.fsm);
        FUNC_2(VAR_4, VAR_0);
        (*VAR_4->parent->LayerDown)(VAR_4->parent->object, VAR_3);


      case 129:
        if (!VAR_4->cbcp.required)
          FUNC_0(&VAR_4->cbcp);


      case 130:
        FUNC_6(&VAR_4->pap.authtimer);
        FUNC_6(&VAR_4->chap.auth.authtimer);
    }
    FUNC_2(VAR_4, VAR_0);
    FUNC_1(VAR_4);
  }
}

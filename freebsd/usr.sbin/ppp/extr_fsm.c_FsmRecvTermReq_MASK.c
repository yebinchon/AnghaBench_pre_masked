
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct fsmheader {int id; } ;
struct fsm {int state; TYPE_3__* parent; int restart; int FsmTimer; TYPE_2__* fn; TYPE_1__* link; int LogLevel; } ;
struct TYPE_6__ {int object; int (* LayerDown ) (int ,struct fsm*) ;} ;
struct TYPE_5__ {int (* SendTerminateAck ) (struct fsm*,int ) ;int (* LayerDown ) (struct fsm*) ;} ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsm*,int ) ;
 int FUNC_1 (struct fsm*,int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 (struct fsm*,int ) ;
 int FUNC_6 (struct fsm*,int ) ;
 int FUNC_7 (struct fsm*) ;
 int FUNC_8 (struct fsm*,int ) ;
 int FUNC_9 (int ,struct fsm*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct fsm *VAR_1, struct fsmheader *VAR_2, struct mbuf *VAR_3)

{
  switch (VAR_1->state) {
  case 133:
  case 130:
    FUNC_3(VAR_1->LogLevel, "%s: Oops, RTR in %s\n",
              VAR_1->link->name, FUNC_2(VAR_1->state));
    break;
  case 135:
  case 129:
  case 134:
  case 128:
  case 131:
    (*VAR_1->fn->SendTerminateAck)(VAR_1, VAR_2->id);
    break;
  case 137:
  case 136:
    (*VAR_1->fn->SendTerminateAck)(VAR_1, VAR_2->id);
    FUNC_1(VAR_1, 131);
    break;
  case 132:
    (*VAR_1->fn->LayerDown)(VAR_1);
    (*VAR_1->fn->SendTerminateAck)(VAR_1, VAR_2->id);
    FUNC_0(VAR_1, VAR_0);
    FUNC_10(&VAR_1->FsmTimer);
    VAR_1->restart = 0;
    FUNC_1(VAR_1, 128);
    (*VAR_1->parent->LayerDown)(VAR_1->parent->object, VAR_1);

    break;
  }
  FUNC_4(VAR_3);
}

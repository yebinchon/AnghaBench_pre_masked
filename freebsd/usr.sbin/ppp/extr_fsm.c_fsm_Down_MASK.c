
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsm {int state; TYPE_2__* parent; TYPE_1__* fn; } ;
struct TYPE_4__ {int object; int (* LayerDown ) (int ,struct fsm*) ;int (* LayerStart ) (int ,struct fsm*) ;int (* LayerFinish ) (int ,struct fsm*) ;} ;
struct TYPE_3__ {int (* LayerDown ) (struct fsm*) ;int (* LayerStart ) (struct fsm*) ;int (* LayerFinish ) (struct fsm*) ;} ;


 int FUNC_0 (struct fsm*,int ) ;




 int VAR_0 ;


 int VAR_1 ;


 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (int ,struct fsm*) ;
 int FUNC_3 (struct fsm*) ;
 int FUNC_4 (int ,struct fsm*) ;
 int FUNC_5 (struct fsm*) ;
 int FUNC_6 (int ,struct fsm*) ;

void
FUNC_7(struct fsm *VAR_2)
{
  switch (VAR_2->state) {
  case 133:
    FUNC_0(VAR_2, VAR_0);
    break;
  case 132:

    (*VAR_2->fn->LayerFinish)(VAR_2);
    FUNC_0(VAR_2, VAR_0);
    (*VAR_2->parent->LayerFinish)(VAR_2->parent->object, VAR_2);
    break;
  case 129:
    FUNC_0(VAR_2, VAR_1);
    (*VAR_2->fn->LayerStart)(VAR_2);
    (*VAR_2->parent->LayerStart)(VAR_2->parent->object, VAR_2);
    break;
  case 128:
  case 130:
  case 135:
  case 134:
    FUNC_0(VAR_2, VAR_1);
    break;
  case 131:
    (*VAR_2->fn->LayerDown)(VAR_2);
    FUNC_0(VAR_2, VAR_1);
    (*VAR_2->parent->LayerDown)(VAR_2->parent->object, VAR_2);
    break;
  }
}

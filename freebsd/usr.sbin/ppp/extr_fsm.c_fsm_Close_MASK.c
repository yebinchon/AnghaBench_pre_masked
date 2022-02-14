
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsm {int state; TYPE_1__* parent; TYPE_2__* fn; } ;
struct TYPE_4__ {int (* LayerDown ) (struct fsm*) ;int (* LayerFinish ) (struct fsm*) ;} ;
struct TYPE_3__ {int object; int (* LayerDown ) (int ,struct fsm*) ;int (* LayerFinish ) (int ,struct fsm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fsm*,int ) ;
 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (struct fsm*,int ) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_3 (struct fsm*) ;
 int FUNC_4 (int ,struct fsm*) ;
 int FUNC_5 (struct fsm*) ;
 int FUNC_6 (int ,struct fsm*) ;

void
FUNC_7(struct fsm *VAR_4)
{
  switch (VAR_4->state) {
  case 130:
    (*VAR_4->fn->LayerFinish)(VAR_4);
    FUNC_2(VAR_4, VAR_3);
    (*VAR_4->parent->LayerFinish)(VAR_4->parent->object, VAR_4);
    break;
  case 129:
    FUNC_2(VAR_4, VAR_1);
    break;
  case 128:
    FUNC_2(VAR_4, VAR_2);
    break;
  case 132:
    (*VAR_4->fn->LayerDown)(VAR_4);
    if (VAR_4->state == 132) {
      FUNC_0(VAR_4, VAR_0);
      FUNC_1(VAR_4);
      FUNC_2(VAR_4, VAR_2);
      (*VAR_4->parent->LayerDown)(VAR_4->parent->object, VAR_4);
    }
    break;
  case 131:
  case 134:
  case 133:
    FUNC_0(VAR_4, VAR_0);
    FUNC_1(VAR_4);
    FUNC_2(VAR_4, VAR_2);
    break;
  }
}

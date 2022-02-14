
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsm {int state; TYPE_2__* parent; TYPE_1__* fn; int FsmTimer; scalar_t__ restart; } ;
struct TYPE_4__ {int object; int (* LayerFinish ) (int ,struct fsm*) ;} ;
struct TYPE_3__ {int (* LayerFinish ) (struct fsm*) ;} ;


 int FUNC_0 (struct fsm*) ;
 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (struct fsm*,int const) ;


 int const VAR_0 ;


 int const VAR_1 ;

 int FUNC_3 (struct fsm*) ;
 int FUNC_4 (int ,struct fsm*) ;
 int FUNC_5 (struct fsm*) ;
 int FUNC_6 (int ,struct fsm*) ;
 int FUNC_7 (struct fsm*) ;
 int FUNC_8 (int ,struct fsm*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(void *VAR_2)
{
  struct fsm *VAR_3 = (struct fsm *)VAR_2;

  if (VAR_3->restart) {
    switch (VAR_3->state) {
    case 130:
    case 128:
      FUNC_1(VAR_3);
      break;
    case 129:
    case 131:
      FUNC_0(VAR_3);
      break;
    case 132:
      FUNC_0(VAR_3);
      FUNC_2(VAR_3, 129);
      break;
    }
    FUNC_9(&VAR_3->FsmTimer);
  } else {
    switch (VAR_3->state) {
    case 130:
      (*VAR_3->fn->LayerFinish)(VAR_3);
      FUNC_2(VAR_3, VAR_0);
      (*VAR_3->parent->LayerFinish)(VAR_3->parent->object, VAR_3);
      break;
    case 128:
      (*VAR_3->fn->LayerFinish)(VAR_3);
      FUNC_2(VAR_3, VAR_1);
      (*VAR_3->parent->LayerFinish)(VAR_3->parent->object, VAR_3);
      break;
    case 129:
    case 131:
    case 132:
      (*VAR_3->fn->LayerFinish)(VAR_3);
      FUNC_2(VAR_3, VAR_1);
      (*VAR_3->parent->LayerFinish)(VAR_3->parent->object, VAR_3);
      break;
    }
  }
}

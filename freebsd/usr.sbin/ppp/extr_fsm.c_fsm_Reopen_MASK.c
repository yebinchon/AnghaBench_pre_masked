
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsm {scalar_t__ state; TYPE_2__* parent; TYPE_1__* fn; } ;
struct TYPE_4__ {int object; int (* LayerDown ) (int ,struct fsm*) ;} ;
struct TYPE_3__ {int (* LayerDown ) (struct fsm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fsm*,int ) ;
 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (struct fsm*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct fsm*) ;
 int FUNC_4 (int ,struct fsm*) ;

void
FUNC_5(struct fsm *VAR_3)
{
  if (VAR_3->state == VAR_1) {
    (*VAR_3->fn->LayerDown)(VAR_3);
    FUNC_0(VAR_3, VAR_0);
    FUNC_1(VAR_3);
    FUNC_2(VAR_3, VAR_2);
    (*VAR_3->parent->LayerDown)(VAR_3->parent->object, VAR_3);
  }
}

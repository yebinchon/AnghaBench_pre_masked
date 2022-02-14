
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fsm {scalar_t__ state; TYPE_1__* parent; TYPE_2__* fn; int OpenTimer; } ;
struct TYPE_4__ {int (* LayerStart ) (struct fsm*) ;} ;
struct TYPE_3__ {int object; int (* LayerStart ) (int ,struct fsm*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct fsm*,int ) ;
 int FUNC_1 (struct fsm*) ;
 int FUNC_2 (struct fsm*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct fsm*) ;
 int FUNC_4 (int ,struct fsm*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_4)
{
  struct fsm *VAR_5 = (struct fsm *)VAR_4;

  FUNC_5(&VAR_5->OpenTimer);
  if (VAR_5->state <= VAR_3) {
    if (VAR_5->state != VAR_2) {
      (*VAR_5->fn->LayerStart)(VAR_5);
      (*VAR_5->parent->LayerStart)(VAR_5->parent->object, VAR_5);
    }
    FUNC_0(VAR_5, VAR_0);
    FUNC_1(VAR_5);
    FUNC_2(VAR_5, VAR_1);
  }
}

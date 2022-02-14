
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int load; void* arg; int (* func ) (struct fsm*) ;} ;
struct fsm {int state; int open_mode; TYPE_4__ OpenTimer; TYPE_3__* link; TYPE_2__* parent; TYPE_1__* fn; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int object; int (* LayerStart ) (int ,struct fsm*) ;} ;
struct TYPE_6__ {int (* LayerStart ) (struct fsm*) ;} ;


 int FUNC_0 (struct fsm*) ;
 int VAR_0 ;
 int FUNC_1 (struct fsm*,int const) ;
 int VAR_1 ;
 int VAR_2 ;







 int const VAR_3 ;


 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct fsm*) ;
 int FUNC_4 (int ,struct fsm*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;

void
FUNC_7(struct fsm *VAR_4)
{
  switch (VAR_4->state) {
  case 132:
    FUNC_1(VAR_4, VAR_3);
    (*VAR_4->fn->LayerStart)(VAR_4);
    (*VAR_4->parent->LayerStart)(VAR_4->parent->object, VAR_4);
    break;
  case 134:
    if (VAR_4->open_mode == VAR_1) {
      FUNC_1(VAR_4, 129);
    } else if (VAR_4->open_mode > 0) {
      if (VAR_4->open_mode > 1)
        FUNC_2(VAR_0, "%s: Entering STOPPED state for %d seconds\n",
                  VAR_4->link->name, VAR_4->open_mode);
      FUNC_1(VAR_4, 129);
      FUNC_6(&VAR_4->OpenTimer);
      VAR_4->OpenTimer.load = VAR_4->open_mode * VAR_2;
      VAR_4->OpenTimer.func = FUNC_0;
      VAR_4->OpenTimer.arg = (void *)VAR_4;
      FUNC_5(&VAR_4->OpenTimer);
    } else
      FUNC_0(VAR_4);
    break;
  case 129:
  case 130:
  case 136:
  case 135:
  case 131:
    break;
  case 133:
  case 128:
    FUNC_1(VAR_4, 128);
    break;
  }
}

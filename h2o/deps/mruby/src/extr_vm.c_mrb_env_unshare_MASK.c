
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct REnv {int * stack; TYPE_1__* cxt; } ;
struct RBasic {int dummy; } ;
typedef int mrb_value ;
struct TYPE_9__ {TYPE_1__* c; } ;
typedef TYPE_3__ mrb_state ;
struct TYPE_8__ {struct REnv* env; } ;
struct TYPE_7__ {TYPE_2__* cibase; } ;


 int FUNC_0 (struct REnv*) ;
 int FUNC_1 (struct REnv*) ;
 int FUNC_2 (struct REnv*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,struct RBasic*) ;
 int FUNC_5 (int *,int *,size_t) ;

void
FUNC_6(mrb_state *VAR_0, struct REnv *VAR_1)
{
  if (VAR_1 == ((void*)0)) return;
  else {
    size_t VAR_2 = (size_t)FUNC_0(VAR_1);
    mrb_value *VAR_3;

    if (!FUNC_1(VAR_1)) return;
    if (VAR_1->cxt != VAR_0->c) return;
    if (VAR_1 == VAR_0->c->cibase->env) return;
    VAR_3 = (mrb_value *)FUNC_3(VAR_0, sizeof(mrb_value)*VAR_2);
    if (VAR_2 > 0) {
      FUNC_5(VAR_3, VAR_1->stack, VAR_2);
    }
    VAR_1->stack = VAR_3;
    FUNC_2(VAR_1);
    FUNC_4(VAR_0, (struct RBasic *)VAR_1);
  }
}

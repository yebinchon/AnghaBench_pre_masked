
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mrb_context {scalar_t__ status; int eidx; struct mrb_context* prev; scalar_t__ fib; scalar_t__* ensure; TYPE_1__* ci; TYPE_1__* cibase; } ;
struct RBasic {int dummy; } ;
typedef int mrb_state ;
struct TYPE_2__ {scalar_t__ target_class; scalar_t__ proc; scalar_t__ env; } ;
typedef TYPE_1__ mrb_callinfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct mrb_context*) ;
 int FUNC_1 (int *,struct RBasic*) ;

__attribute__((used)) static void
FUNC_2(mrb_state *VAR_1, struct mrb_context *VAR_2)
{
  int VAR_3;
  mrb_callinfo *VAR_4;

 start:
  if (VAR_2->status == VAR_0) return;


  FUNC_0(VAR_1, VAR_2);


  if (VAR_2->cibase) {
    for (VAR_4 = VAR_2->cibase; VAR_4 <= VAR_2->ci; VAR_4++) {
      FUNC_1(VAR_1, (struct RBasic*)VAR_4->env);
      FUNC_1(VAR_1, (struct RBasic*)VAR_4->proc);
      FUNC_1(VAR_1, (struct RBasic*)VAR_4->target_class);
    }
  }

  for (VAR_3=0; VAR_3<VAR_2->eidx; VAR_3++) {
    FUNC_1(VAR_1, (struct RBasic*)VAR_2->ensure[VAR_3]);
  }

  FUNC_1(VAR_1, (struct RBasic*)VAR_2->fib);
  if (VAR_2->prev) {
    VAR_2 = VAR_2->prev;
    goto start;
  }
}

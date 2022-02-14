
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct RProc {struct RProc* upper; } ;
struct REnv {int dummy; } ;
struct TYPE_6__ {TYPE_1__* c; } ;
typedef TYPE_2__ mrb_state ;
struct TYPE_7__ {struct REnv* env; struct RProc* proc; } ;
typedef TYPE_3__ mrb_callinfo ;
struct TYPE_5__ {TYPE_3__* cibase; TYPE_3__* ci; } ;


 struct REnv* FUNC_0 (struct RProc*) ;

__attribute__((used)) static inline struct REnv*
FUNC_1(mrb_state *VAR_0, int VAR_1)
{
  struct RProc *VAR_2 = VAR_0->c->ci->proc;
  struct REnv *VAR_3;

  while (VAR_1--) {
    VAR_2 = VAR_2->upper;
    if (!VAR_2) return ((void*)0);
  }
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3) return VAR_3;
  else {
    mrb_callinfo *VAR_4 = VAR_0->c->ci;
    mrb_callinfo *VAR_5 = VAR_0->c->cibase;

    while (VAR_5 <= VAR_4) {
      if (VAR_4->proc == VAR_2) {
        return VAR_4->env;
      }
      VAR_4--;
    }
  }
  return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {struct REnv* env; } ;
struct TYPE_12__ {TYPE_2__* irep; } ;
struct RProc {int flags; TYPE_4__ e; TYPE_3__ body; struct RProc* upper; } ;
struct REnv {struct RClass* c; } ;
struct RClass {int dummy; } ;
struct RBasic {int dummy; } ;
struct TYPE_14__ {TYPE_1__* c; } ;
typedef TYPE_5__ mrb_state ;
struct TYPE_15__ {struct REnv* env; } ;
typedef TYPE_6__ mrb_callinfo ;
struct TYPE_11__ {int nlocals; } ;
struct TYPE_10__ {TYPE_6__* ci; } ;


 int VAR_0 ;
 struct RClass* FUNC_0 (struct RProc*) ;
 struct REnv* FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,struct RBasic*,struct RBasic*) ;

__attribute__((used)) static void
FUNC_3(mrb_state *VAR_1, struct RProc *VAR_2)
{
  mrb_callinfo *VAR_3 = VAR_1->c->ci;
  struct RProc *VAR_4 = VAR_2->upper;
  struct REnv *VAR_5 = ((void*)0);

  if (VAR_3 && VAR_3->env) {
    VAR_5 = VAR_3->env;
  }
  else if (VAR_4) {
    struct RClass *VAR_6 = FUNC_0(VAR_2);

    VAR_5 = FUNC_1(VAR_1, VAR_4->body.irep->nlocals);
    VAR_3->env = VAR_5;
    if (VAR_6) {
      VAR_5->c = VAR_6;
      FUNC_2(VAR_1, (struct RBasic*)VAR_5, (struct RBasic*)VAR_6);
    }
  }
  if (VAR_5) {
    VAR_2->e.env = VAR_5;
    VAR_2->flags |= VAR_0;
    FUNC_2(VAR_1, (struct RBasic*)VAR_2, (struct RBasic*)VAR_5);
  }
}

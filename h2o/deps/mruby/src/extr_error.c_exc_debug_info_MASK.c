
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct RObject {int dummy; } ;
struct TYPE_17__ {TYPE_1__* c; } ;
typedef TYPE_3__ mrb_state ;
struct TYPE_18__ {int iseq; } ;
typedef TYPE_4__ mrb_irep ;
typedef int mrb_code ;
struct TYPE_19__ {int * pc; TYPE_13__* proc; int * err; } ;
typedef TYPE_5__ mrb_callinfo ;
typedef int int32_t ;
struct TYPE_16__ {TYPE_4__* irep; } ;
struct TYPE_15__ {TYPE_5__* cibase; TYPE_5__* ci; } ;
struct TYPE_14__ {TYPE_2__ body; } ;


 int FUNC_0 (TYPE_13__*) ;
 char* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,struct RObject*,int ) ;
 int FUNC_6 (TYPE_3__*,struct RObject*,int ,int ) ;
 int FUNC_7 (TYPE_3__*,char const*) ;

__attribute__((used)) static void
FUNC_8(mrb_state *VAR_0, struct RObject *VAR_1)
{
  mrb_callinfo *VAR_2 = VAR_0->c->ci;
  mrb_code *VAR_3 = VAR_2->pc;

  if (FUNC_5(VAR_0, VAR_1, FUNC_4(VAR_0, "file"))) return;
  while (VAR_2 >= VAR_0->c->cibase) {
    mrb_code *VAR_4 = VAR_2->err;

    if (!VAR_4 && VAR_3) VAR_4 = VAR_3 - 1;
    if (VAR_4 && VAR_2->proc && !FUNC_0(VAR_2->proc)) {
      mrb_irep *VAR_5 = VAR_2->proc->body.irep;

      int32_t const VAR_6 = FUNC_2(VAR_5, VAR_4 - VAR_5->iseq);
      char const* VAR_7 = FUNC_1(VAR_5, VAR_4 - VAR_5->iseq);
      if (VAR_6 != -1 && VAR_7) {
        FUNC_6(VAR_0, VAR_1, FUNC_4(VAR_0, "file"), FUNC_7(VAR_0, VAR_7));
        FUNC_6(VAR_0, VAR_1, FUNC_4(VAR_0, "line"), FUNC_3(VAR_6));
        return;
      }
    }
    VAR_3 = VAR_2->pc;
    VAR_2--;
  }
}

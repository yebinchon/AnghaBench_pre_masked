
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct mrb_context {int status; TYPE_2__* ci; int vmexec; int * stack; TYPE_1__* cibase; struct mrb_context* prev; } ;
typedef int mrb_value ;
struct TYPE_16__ {struct mrb_context* c; struct mrb_context* root_c; } ;
typedef TYPE_3__ mrb_state ;
typedef int mrb_int ;
typedef scalar_t__ mrb_bool ;
typedef enum mrb_fiber_state { ____Placeholder_mrb_fiber_state } mrb_fiber_state ;
struct TYPE_15__ {int pc; int proc; } ;
struct TYPE_14__ {int argc; } ;
struct TYPE_13__ {int * stack; } ;


 int VAR_0 ;
 int FUNC_0 (struct mrb_context*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_12__* FUNC_1 (int ) ;
 int VAR_6 ;
 struct mrb_context* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,struct mrb_context*) ;
 int FUNC_4 (TYPE_3__*,int const*,int) ;
 int FUNC_5 (TYPE_3__*,struct mrb_context*) ;
 int FUNC_6 (TYPE_3__*,int ,char*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static mrb_value
FUNC_9(mrb_state *VAR_7, mrb_value VAR_8, mrb_int VAR_9, const mrb_value *VAR_10, mrb_bool VAR_11, mrb_bool VAR_12)
{
  struct mrb_context *VAR_13 = FUNC_2(VAR_7, VAR_8);
  struct mrb_context *VAR_14 = VAR_7->c;
  enum mrb_fiber_state VAR_15;
  mrb_value VAR_16;

  FUNC_3(VAR_7, VAR_13);
  VAR_15 = VAR_13->status;
  if (VAR_11 && VAR_15 == VAR_5) {
    FUNC_6(VAR_7, VAR_0, "resuming transferred fiber");
  }
  if (VAR_15 == VAR_3 || VAR_15 == VAR_2) {
    FUNC_6(VAR_7, VAR_0, "double resume");
  }
  if (VAR_15 == VAR_4) {
    FUNC_6(VAR_7, VAR_0, "resuming dead fiber");
  }
  VAR_14->status = VAR_11 ? VAR_2 : VAR_5;
  VAR_13->prev = VAR_11 ? VAR_7->c : (VAR_13->prev ? VAR_13->prev : VAR_7->root_c);
  FUNC_5(VAR_7, VAR_13);
  if (VAR_15 == VAR_1) {
    mrb_value *VAR_17, *VAR_18;

    if (!VAR_13->ci->proc) {
      FUNC_6(VAR_7, VAR_0, "double resume (current)");
    }
    FUNC_7(VAR_7, VAR_9+2);
    VAR_17 = VAR_13->stack+1;
    VAR_18 = VAR_17 + VAR_9;
    while (VAR_17<VAR_18) {
      *VAR_17++ = *VAR_10++;
    }
    VAR_13->cibase->argc = (int)VAR_9;
    VAR_16 = VAR_13->stack[0] = FUNC_1(VAR_13->ci->proc)->stack[0];
  }
  else {
    VAR_16 = FUNC_4(VAR_7, VAR_10, VAR_9);
  }

  if (VAR_12) {
    VAR_13->vmexec = VAR_6;
    VAR_16 = FUNC_8(VAR_7, VAR_13->ci[-1].proc, VAR_13->ci->pc);
    VAR_7->c = VAR_14;
  }
  else {
    FUNC_0(VAR_13);
  }
  return VAR_16;
}

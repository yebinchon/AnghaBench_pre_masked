
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct mrb_insn_data {int insn; size_t a; size_t b; } ;
struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef scalar_t__ mrb_sym ;
struct TYPE_17__ {TYPE_3__* c; } ;
typedef TYPE_4__ mrb_state ;
struct TYPE_18__ {scalar_t__* syms; } ;
typedef TYPE_5__ mrb_irep ;
struct TYPE_19__ {scalar_t__ isCfunc; scalar_t__ method_bpno; } ;
typedef TYPE_6__ mrb_debug_context ;
typedef int mrb_code ;
typedef scalar_t__ mrb_bool ;
typedef scalar_t__ int32_t ;
struct TYPE_16__ {TYPE_2__* ci; } ;
struct TYPE_15__ {scalar_t__ mid; TYPE_1__* target_class; } ;
struct TYPE_14__ {struct RClass* super; } ;


 scalar_t__ VAR_0 ;



 struct RClass* FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_6__*,struct RClass*,scalar_t__,scalar_t__*) ;
 TYPE_6__* FUNC_2 (TYPE_4__*) ;
 struct mrb_insn_data FUNC_3 (int *) ;

__attribute__((used)) static int32_t
FUNC_4(mrb_state *VAR_1, mrb_irep *VAR_2, mrb_code *VAR_3, mrb_value *VAR_4)
{
  struct RClass* VAR_5;
  mrb_sym VAR_6;
  int32_t VAR_7;
  mrb_bool VAR_8;
  struct mrb_insn_data VAR_9;

  mrb_debug_context *VAR_10 = FUNC_2(VAR_1);

  VAR_8 = VAR_0;
  VAR_7 = VAR_10->method_bpno;
  VAR_10->method_bpno = 0;

  VAR_9 = FUNC_3(VAR_3);
  switch(VAR_9.insn) {
    case 130:
    case 129:
      VAR_5 = FUNC_0(VAR_1, VAR_4[VAR_9.a]);
      VAR_6 = VAR_2->syms[VAR_9.b];
      break;
    case 128:
      VAR_5 = VAR_1->c->ci->target_class->super;
      VAR_6 = VAR_1->c->ci->mid;
      break;
    default:
      VAR_6 = 0;
      break;
  }
  if (VAR_6 != 0) {
    VAR_10->method_bpno = FUNC_1(VAR_1, VAR_10, VAR_5, VAR_6, &VAR_8);
    if (VAR_8) {
      VAR_7 = VAR_10->method_bpno;
      VAR_10->method_bpno = 0;
    }
  }
  VAR_10->isCfunc = VAR_8;
  return VAR_7;
}

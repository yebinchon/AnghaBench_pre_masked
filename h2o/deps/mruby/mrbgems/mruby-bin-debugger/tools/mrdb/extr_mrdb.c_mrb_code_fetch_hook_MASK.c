
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_19__ {TYPE_1__* c; } ;
typedef TYPE_2__ mrb_state ;
struct TYPE_20__ {int iseq; } ;
typedef TYPE_3__ mrb_irep ;
struct TYPE_21__ {scalar_t__ xphase; char const* prvfile; scalar_t__ prvline; int xm; scalar_t__ bm; scalar_t__ ccnt; int (* break_hook ) (TYPE_2__*,TYPE_4__*) ;TYPE_3__* root_irep; scalar_t__ stopped_bpno; int method_bpno; int * prvci; int * regs; int * pc; TYPE_3__* irep; } ;
typedef TYPE_4__ mrb_debug_context ;
typedef int mrb_code ;
typedef scalar_t__ int32_t ;
struct TYPE_18__ {int ci; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 scalar_t__ VAR_4 ;
 void* VAR_5 ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int *,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_4__*,char const*,scalar_t__) ;
 TYPE_4__* FUNC_3 (TYPE_2__*) ;
 char* FUNC_4 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_8(mrb_state *VAR_6, mrb_irep *VAR_7, mrb_code *VAR_8, mrb_value *VAR_9)
{
  const char *VAR_10;
  int32_t VAR_11;
  int32_t VAR_12;

  mrb_debug_context *VAR_13 = FUNC_3(VAR_6);

  FUNC_1(VAR_13);

  VAR_13->irep = VAR_7;
  VAR_13->pc = VAR_8;
  VAR_13->regs = VAR_9;

  if (VAR_13->xphase == VAR_4) {
    VAR_13->root_irep = VAR_7;
    VAR_13->prvfile = ((void*)0);
    VAR_13->prvline = 0;
    VAR_13->prvci = ((void*)0);
    VAR_13->xm = 129;
    VAR_13->xphase = VAR_5;
  }

  VAR_10 = FUNC_4(VAR_7, VAR_8 - VAR_7->iseq);
  VAR_11 = FUNC_5(VAR_7, VAR_8 - VAR_7->iseq);

  switch (VAR_13->xm) {
  case 128:
    if (!VAR_10 || (VAR_13->prvfile == VAR_10 && VAR_13->prvline == VAR_11)) {
      return;
    }
    VAR_13->method_bpno = 0;
    VAR_13->bm = VAR_3;
    break;

  case 130:
    if (!VAR_10 || (VAR_13->prvfile == VAR_10 && VAR_13->prvline == VAR_11)) {
      return;
    }
    if ((intptr_t)(VAR_13->prvci) < (intptr_t)(VAR_6->c->ci)) {
      return;
    }
    VAR_13->prvci = ((void*)0);
    VAR_13->method_bpno = 0;
    VAR_13->bm = VAR_2;
    break;

  case 129:
    VAR_12 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_9);
    if (VAR_12 > 0) {
      VAR_13->stopped_bpno = VAR_12;
      VAR_13->bm = VAR_0;
      break;
    }
    if (VAR_13->prvfile != VAR_10 || VAR_13->prvline != VAR_11) {
      VAR_12 = FUNC_2(VAR_6, VAR_13, VAR_10, VAR_11);
      if (VAR_12 > 0) {
        VAR_13->stopped_bpno = VAR_12;
        VAR_13->bm = VAR_0;
        break;
      }
    }
    VAR_13->prvfile = VAR_10;
    VAR_13->prvline = VAR_11;
    return;
  case 131:
    VAR_13->root_irep = VAR_7;
    VAR_13->bm = VAR_1;
    if (!VAR_10 || VAR_11 < 0) {
      FUNC_6("Cannot get debugging information.");
    }
    break;

  default:
    return;
  }

  VAR_13->prvfile = VAR_10;
  VAR_13->prvline = VAR_11;

  if (VAR_13->bm == VAR_0 && --VAR_13->ccnt > 0) {
    return;
  }
  VAR_13->break_hook(VAR_6, VAR_13);

  VAR_13->xphase = VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_28__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct mrb_parser_state {scalar_t__ nerr; TYPE_1__* error_buffer; } ;
struct TYPE_36__ {int irep; } ;
struct TYPE_34__ {struct REnv* env; } ;
struct RProc {TYPE_6__ body; TYPE_28__* upper; int flags; TYPE_4__ e; } ;
struct REnv {TYPE_5__* cxt; int stack; int mid; } ;
struct RClass {int dummy; } ;
struct RBasic {int dummy; } ;
struct TYPE_37__ {short lineno; void* on_eval; void* no_optimize; void* capture_errors; } ;
typedef TYPE_7__ mrbc_context ;
typedef int mrb_value ;
struct TYPE_38__ {TYPE_5__* c; } ;
typedef TYPE_8__ mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_39__ {int argc; struct RClass* target_class; TYPE_28__* proc; struct REnv* env; int stackent; int mid; } ;
typedef TYPE_9__ mrb_callinfo ;
struct TYPE_35__ {TYPE_9__* ci; TYPE_9__* cibase; } ;
struct TYPE_33__ {TYPE_2__* irep; } ;
struct TYPE_32__ {int nlocals; } ;
struct TYPE_31__ {TYPE_3__ body; } ;
struct TYPE_30__ {char const* message; int lineno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct REnv*,int) ;
 int FUNC_1 (struct REnv*,int ) ;
 int FUNC_2 (TYPE_28__*) ;
 int VAR_4 ;
 struct RClass* FUNC_3 (TYPE_28__*) ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_4 (TYPE_8__*,int ,int ) ;
 int FUNC_5 (TYPE_8__*,int ) ;
 int FUNC_6 (TYPE_8__*,struct RBasic*,struct RBasic*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_8__*,char*,int ,int ,...) ;
 struct RProc* FUNC_9 (TYPE_8__*,struct mrb_parser_state*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_8__*,int ,struct RClass*) ;
 struct mrb_parser_state* FUNC_12 (TYPE_8__*,char*,scalar_t__,TYPE_7__*) ;
 int FUNC_13 (struct mrb_parser_state*) ;
 int FUNC_14 (TYPE_8__*,int ,char*) ;
 int FUNC_15 (TYPE_8__*,char const*) ;
 int FUNC_16 (TYPE_8__*,TYPE_7__*) ;
 TYPE_7__* FUNC_17 (TYPE_8__*) ;
 int FUNC_18 (TYPE_8__*,TYPE_7__*,char const*) ;
 int FUNC_19 (TYPE_8__*,int ,int ,int ) ;

__attribute__((used)) static struct RProc*
FUNC_20(mrb_state *VAR_7, char *VAR_8, mrb_int VAR_9, mrb_value VAR_10, const char *VAR_11, mrb_int VAR_12)
{
  mrbc_context *VAR_13;
  struct mrb_parser_state *VAR_14;
  struct RProc *VAR_15;
  struct REnv *VAR_16;
  mrb_callinfo *VAR_17;
  struct RClass *VAR_18 = ((void*)0);
  int VAR_19;

  if (!FUNC_10(VAR_10)) {
    FUNC_14(VAR_7, VAR_0, "Binding of eval must be nil.");
  }

  VAR_13 = FUNC_17(VAR_7);
  VAR_13->lineno = (short)VAR_12;

  FUNC_18(VAR_7, VAR_13, VAR_11 ? VAR_11 : "(eval)");
  VAR_13->capture_errors = VAR_6;
  VAR_13->no_optimize = VAR_6;
  VAR_13->on_eval = VAR_6;

  VAR_14 = FUNC_12(VAR_7, VAR_8, VAR_9, VAR_13);


  if (!VAR_14) {
    FUNC_14(VAR_7, VAR_1, "Failed to create parser state.");
  }

  if (0 < VAR_14->nerr) {

    mrb_value VAR_20;

    if (VAR_11) {
      VAR_20 = FUNC_8(VAR_7, " file %S line %S: %S",
                       FUNC_15(VAR_7, VAR_11),
                       FUNC_7(VAR_14->error_buffer[0].lineno),
                       FUNC_15(VAR_7, VAR_14->error_buffer[0].message));
    }
    else {
      VAR_20 = FUNC_8(VAR_7, " line %S: %S",
                       FUNC_7(VAR_14->error_buffer[0].lineno),
                       FUNC_15(VAR_7, VAR_14->error_buffer[0].message));
    }
    FUNC_13(VAR_14);
    FUNC_16(VAR_7, VAR_13);
    FUNC_5(VAR_7, FUNC_4(VAR_7, VAR_3, VAR_20));
  }

  VAR_15 = FUNC_9(VAR_7, VAR_14);
  if (VAR_15 == ((void*)0)) {

    FUNC_13(VAR_14);
    FUNC_16(VAR_7, VAR_13);
    FUNC_14(VAR_7, VAR_2, "codegen error");
  }
  if (VAR_7->c->ci > VAR_7->c->cibase) {
    VAR_17 = &VAR_7->c->ci[-1];
  }
  else {
    VAR_17 = VAR_7->c->cibase;
  }
  if (VAR_17->proc) {
    VAR_18 = FUNC_3(VAR_17->proc);
  }
  if (VAR_17->proc && !FUNC_2(VAR_17->proc)) {
    if (VAR_17->env) {
      VAR_16 = VAR_17->env;
    }
    else {
      VAR_16 = (struct REnv*)FUNC_11(VAR_7, VAR_5,
                                      (struct RClass*)VAR_18);
      VAR_16->mid = VAR_17->mid;
      VAR_16->stack = VAR_17[1].stackent;
      VAR_16->cxt = VAR_7->c;
      FUNC_1(VAR_16, VAR_17->proc->body.irep->nlocals);
      VAR_19 = VAR_17->argc;
      if (VAR_17->argc < 0) VAR_19 = 2;
      else VAR_19 += 1;
      FUNC_0(VAR_16, VAR_19);
      VAR_17->env = VAR_16;
    }
    VAR_15->e.env = VAR_16;
    VAR_15->flags |= VAR_4;
    FUNC_6(VAR_7, (struct RBasic*)VAR_15, (struct RBasic*)VAR_16);
  }
  VAR_15->upper = VAR_17->proc;
  VAR_7->c->ci->target_class = VAR_18;
  FUNC_19(VAR_7, VAR_15->body.irep, 0, VAR_15->body.irep);


  FUNC_13(VAR_14);
  FUNC_16(VAR_7, VAR_13);

  return VAR_15;
}

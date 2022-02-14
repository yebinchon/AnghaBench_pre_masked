
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mrb_context {int status; struct RFiber* fib; TYPE_5__* ci; int * stack; TYPE_5__* cibase; TYPE_5__* ciend; int * stbase; int * stend; int member_0; } ;
struct TYPE_14__ {TYPE_2__* irep; } ;
struct RProc {TYPE_3__ body; } ;
struct RFiber {struct mrb_context* cxt; } ;
struct RBasic {int dummy; } ;
typedef int mrb_value ;
struct TYPE_15__ {TYPE_1__* c; } ;
typedef TYPE_4__ mrb_state ;
struct TYPE_16__ {int pc; struct RProc* proc; int target_class; int * stackent; } ;
typedef TYPE_5__ mrb_callinfo ;
struct TYPE_13__ {size_t nregs; int iseq; } ;
struct TYPE_12__ {int * stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct RProc*) ;
 int FUNC_1 (struct RProc*) ;
 int FUNC_2 (int ) ;
 struct RFiber* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,size_t) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int,int) ;
 int FUNC_6 (TYPE_4__*,struct RBasic*,struct RBasic*) ;
 int FUNC_7 (TYPE_4__*,char*,int *) ;
 scalar_t__ FUNC_8 (TYPE_4__*,size_t) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 struct RProc* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_4__*,int ,char*) ;

__attribute__((used)) static mrb_value
FUNC_13(mrb_state *VAR_6, mrb_value VAR_7)
{
  static const struct mrb_context VAR_8 = { 0 };
  struct RFiber *VAR_9 = FUNC_3(VAR_7);
  struct mrb_context *VAR_10;
  struct RProc *VAR_11;
  mrb_callinfo *VAR_12;
  mrb_value VAR_13;
  size_t VAR_14;

  FUNC_7(VAR_6, "&", &VAR_13);

  if (VAR_9->cxt) {
    FUNC_12(VAR_6, VAR_2, "cannot initialize twice");
  }
  if (FUNC_9(VAR_13)) {
    FUNC_12(VAR_6, VAR_0, "tried to create Fiber object without a block");
  }
  VAR_11 = FUNC_11(VAR_13);
  if (FUNC_0(VAR_11)) {
    FUNC_12(VAR_6, VAR_1, "tried to create Fiber from C defined method");
  }

  VAR_10 = (struct mrb_context*)FUNC_8(VAR_6, sizeof(struct mrb_context));
  *VAR_10 = VAR_8;
  VAR_9->cxt = VAR_10;


  VAR_14 = VAR_4;
  if (VAR_11->body.irep->nregs > VAR_14) {
    VAR_14 += VAR_11->body.irep->nregs;
  }
  VAR_10->stbase = (mrb_value *)FUNC_8(VAR_6, VAR_14*sizeof(mrb_value));
  VAR_10->stend = VAR_10->stbase + VAR_14;
  VAR_10->stack = VAR_10->stbase;
  FUNC_4(VAR_10->stbase, 0, VAR_14 * sizeof(mrb_value));



  VAR_10->stack[0] = VAR_6->c->stack[0];


  VAR_10->cibase = (mrb_callinfo *)FUNC_5(VAR_6, VAR_3, sizeof(mrb_callinfo));
  VAR_10->ciend = VAR_10->cibase + VAR_3;
  VAR_10->ci = VAR_10->cibase;
  VAR_10->ci->stackent = VAR_10->stack;


  VAR_12 = VAR_10->ci;
  VAR_12->target_class = FUNC_1(VAR_11);
  VAR_12->proc = VAR_11;
  FUNC_6(VAR_6, (struct RBasic*)FUNC_10(VAR_7), (struct RBasic*)VAR_11);
  VAR_12->pc = VAR_11->body.irep->iseq;
  VAR_12[1] = VAR_12[0];
  VAR_10->ci++;

  VAR_10->fib = VAR_9;
  VAR_10->status = VAR_5;

  return VAR_7;
}

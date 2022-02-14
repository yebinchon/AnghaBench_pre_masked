
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct mrb_context {TYPE_7__* cibase; TYPE_7__* ci; int status; } ;
struct RString {int dummy; } ;
struct RRange {int dummy; } ;
struct TYPE_25__ {int * irep; } ;
struct RProc {TYPE_4__ body; } ;
struct RObject {int dummy; } ;
struct RHash {int dummy; } ;
struct RFiber {struct mrb_context* cxt; } ;
struct REnv {int const tt; int * stack; } ;
struct RData {int data; TYPE_5__* type; } ;
struct RClass {int dummy; } ;
struct RBasic {int tt; } ;
struct TYPE_22__ {int shared; } ;
struct TYPE_23__ {int * ptr; TYPE_1__ aux; } ;
struct TYPE_24__ {TYPE_2__ heap; } ;
struct RArray {TYPE_3__ as; } ;
struct TYPE_27__ {struct mrb_context* root_c; } ;
typedef TYPE_6__ mrb_state ;
typedef int mrb_irep ;
struct TYPE_28__ {struct REnv* env; } ;
typedef TYPE_7__ mrb_callinfo ;
struct TYPE_26__ {int (* dfree ) (TYPE_6__*,int ) ;} ;


 int FUNC_0 (struct RBasic*) ;
 int FUNC_1 (struct RBasic*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct REnv*) ;
 int VAR_0 ;
 int FUNC_4 (struct RBasic*,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct RProc*) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,struct RBasic*,int) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_6__*,struct REnv*) ;
 int FUNC_9 (TYPE_6__*,int *) ;
 int FUNC_10 (TYPE_6__*,struct mrb_context*) ;
 int FUNC_11 (TYPE_6__*,struct RHash*) ;
 int FUNC_12 (TYPE_6__*,struct RObject*) ;
 int FUNC_13 (TYPE_6__*,struct RClass*) ;
 int FUNC_14 (TYPE_6__*,struct RRange*) ;
 int FUNC_15 (TYPE_6__*,struct RString*) ;
 int FUNC_16 (TYPE_6__*,int *) ;
 int FUNC_17 (TYPE_6__*,int *) ;
 int FUNC_18 (TYPE_6__*,struct RBasic*) ;
 int VAR_3 ;
 int FUNC_19 (TYPE_6__*,int ) ;

__attribute__((used)) static void
FUNC_20(mrb_state *VAR_4, struct RBasic *VAR_5, int VAR_6)
{
  FUNC_2(FUNC_6(VAR_3, "obj_free(%p,tt=%d)\n",VAR_5,VAR_5->tt));
  switch (VAR_5->tt) {

  case 128:
  case 139:
  case 129:

    return;


  case 138:



    return;



  case 134:
    FUNC_12(VAR_4, (struct RObject*)VAR_5);
    break;

  case 141:
    FUNC_12(VAR_4, (struct RObject*)VAR_5);
    break;

  case 144:
  case 135:
  case 131:
    FUNC_13(VAR_4, (struct RClass*)VAR_5);
    FUNC_12(VAR_4, (struct RObject*)VAR_5);
    break;
  case 136:
    if (FUNC_4(VAR_5, VAR_1))
      FUNC_13(VAR_4, (struct RClass*)VAR_5);
    break;
  case 142:
    {
      struct REnv *VAR_7 = (struct REnv*)VAR_5;

      if (FUNC_3(VAR_7)) {

        VAR_7->stack = ((void*)0);
        break;
      }
      FUNC_9(VAR_4, VAR_7->stack);
      VAR_7->stack = ((void*)0);
    }
    break;

  case 140:
    {
      struct mrb_context *VAR_8 = ((struct RFiber*)VAR_5)->cxt;

      if (VAR_8 && VAR_8 != VAR_4->root_c) {
        if (!VAR_6 && VAR_8->status != VAR_0) {
          mrb_callinfo *VAR_9 = VAR_8->ci;
          mrb_callinfo *VAR_10 = VAR_8->cibase;

          while (VAR_10 <= VAR_9) {
            struct REnv *VAR_11 = VAR_9->env;
            if (VAR_11 && !FUNC_18(VAR_4, (struct RBasic*)VAR_11) &&
                VAR_11->tt == 142 && FUNC_3(VAR_11)) {
              FUNC_8(VAR_4, VAR_11);
            }
            VAR_9--;
          }
        }
        FUNC_10(VAR_4, VAR_8);
      }
    }
    break;

  case 145:
    if (FUNC_1(VAR_5))
      FUNC_7(VAR_4, ((struct RArray*)VAR_5)->as.heap.aux.shared);
    else if (!FUNC_0(VAR_5))
      FUNC_9(VAR_4, ((struct RArray*)VAR_5)->as.heap.ptr);
    break;

  case 137:
    FUNC_12(VAR_4, (struct RObject*)VAR_5);
    FUNC_11(VAR_4, (struct RHash*)VAR_5);
    break;

  case 130:
    FUNC_15(VAR_4, (struct RString*)VAR_5);
    break;

  case 133:
    {
      struct RProc *VAR_12 = (struct RProc*)VAR_5;

      if (!FUNC_5(VAR_12) && VAR_12->body.irep) {
        mrb_irep *VAR_13 = VAR_12->body.irep;
        if (VAR_6) {
          FUNC_16(VAR_4, VAR_13);
        }
        FUNC_17(VAR_4, VAR_13);
      }
    }
    break;

  case 132:
    FUNC_14(VAR_4, ((struct RRange*)VAR_5));
    break;

  case 143:
    {
      struct RData *VAR_14 = (struct RData*)VAR_5;
      if (VAR_14->type && VAR_14->type->dfree) {
        VAR_14->type->dfree(VAR_4, VAR_14->data);
      }
      FUNC_12(VAR_4, (struct RObject*)VAR_5);
    }
    break;

  default:
    break;
  }
  VAR_5->tt = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * irep; } ;
struct TYPE_9__ {struct RClass* target_class; } ;
struct RProc {TYPE_2__ body; TYPE_1__ e; scalar_t__ upper; } ;
struct RClass {int dummy; } ;
struct TYPE_12__ {int proc_class; TYPE_3__* c; } ;
typedef TYPE_4__ mrb_state ;
typedef int mrb_irep ;
struct TYPE_13__ {scalar_t__ proc; struct RClass* target_class; } ;
typedef TYPE_5__ mrb_callinfo ;
struct TYPE_11__ {TYPE_5__* ci; } ;


 struct RClass* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int ,int ) ;

struct RProc*
FUNC_3(mrb_state *VAR_1, mrb_irep *VAR_2)
{
  struct RProc *VAR_3;
  mrb_callinfo *VAR_4 = VAR_1->c->ci;

  VAR_3 = (struct RProc*)FUNC_2(VAR_1, VAR_0, VAR_1->proc_class);
  if (VAR_4) {
    struct RClass *VAR_5 = ((void*)0);

    if (VAR_4->proc) {
      VAR_5 = FUNC_0(VAR_4->proc);
    }
    if (VAR_5 == ((void*)0)) {
      VAR_5 = VAR_4->target_class;
    }
    VAR_3->upper = VAR_4->proc;
    VAR_3->e.target_class = VAR_5;
  }
  VAR_3->body.irep = VAR_2;
  FUNC_1(VAR_1, VAR_2);

  return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_9__ {int exc; } ;
typedef TYPE_2__ mrb_state ;
typedef scalar_t__ mrb_int ;
struct TYPE_10__ {int blocking_reqs; TYPE_1__* shared; } ;
typedef TYPE_3__ h2o_mruby_context_t ;
struct TYPE_8__ {TYPE_2__* mrb; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

mrb_value FUNC_8(h2o_mruby_context_t *VAR_0, mrb_value VAR_1, mrb_value *VAR_2, mrb_value VAR_3,
                                         int *VAR_4)
{
    mrb_state *VAR_5 = VAR_0->shared->mrb;

    mrb_value VAR_6 = FUNC_4(VAR_3, 0);
    if (!FUNC_5(VAR_6)) {
        VAR_5->exc = FUNC_7(VAR_6);
        FUNC_2(VAR_0, ((void*)0));
    }

    mrb_int VAR_7;
    mrb_int VAR_8 = FUNC_0(VAR_0->blocking_reqs);
    for (VAR_7 = 0; VAR_7 != VAR_8; ++VAR_7) {
        mrb_value VAR_9 = FUNC_4(VAR_0->blocking_reqs, VAR_7);
        mrb_value VAR_10 = FUNC_4(VAR_9, 0);
        mrb_value VAR_11 = FUNC_4(VAR_9, 1);
        FUNC_1(VAR_0, VAR_10, VAR_11, ((void*)0));
    }
    FUNC_3(VAR_5, VAR_0->blocking_reqs);

    return FUNC_6();
}

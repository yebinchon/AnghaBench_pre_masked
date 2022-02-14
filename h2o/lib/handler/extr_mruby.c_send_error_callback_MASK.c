
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_8__ {int exc; } ;
typedef TYPE_2__ mrb_state ;
typedef int h2o_mruby_generator_t ;
struct TYPE_9__ {TYPE_1__* shared; } ;
typedef TYPE_3__ h2o_mruby_context_t ;
struct TYPE_7__ {TYPE_2__* mrb; } ;


 int * FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

mrb_value FUNC_5(h2o_mruby_context_t *VAR_0, mrb_value VAR_1, mrb_value *VAR_2, mrb_value VAR_3, int *VAR_4)
{
    mrb_state *VAR_5 = VAR_0->shared->mrb;
    VAR_5->exc = FUNC_4(FUNC_2(VAR_3, 0));
    h2o_mruby_generator_t *VAR_6 = FUNC_0(VAR_5, FUNC_2(VAR_3, 1));
    FUNC_1(VAR_0, VAR_6);
    return FUNC_3();
}

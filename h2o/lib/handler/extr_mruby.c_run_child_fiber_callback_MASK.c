
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_5__ {int resumers; TYPE_1__* shared; } ;
typedef TYPE_2__ h2o_mruby_context_t ;
struct TYPE_4__ {int * mrb; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 () ;

mrb_value FUNC_3(h2o_mruby_context_t *VAR_0, mrb_value VAR_1, mrb_value *VAR_2, mrb_value VAR_3, int *VAR_4)
{
    mrb_state *VAR_5 = VAR_0->shared->mrb;

    mrb_value VAR_6 = FUNC_0(VAR_3, 0);





    FUNC_1(VAR_5, VAR_0->resumers, *VAR_2);
    *VAR_2 = VAR_6;
    *VAR_4 = 1;

    return FUNC_2();
}

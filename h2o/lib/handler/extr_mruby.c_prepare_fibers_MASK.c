
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


typedef int mrb_value ;
struct TYPE_17__ {int kernel_module; } ;
typedef TYPE_4__ mrb_state ;
struct TYPE_18__ {TYPE_1__* handler; TYPE_3__* shared; } ;
typedef TYPE_5__ h2o_mruby_context_t ;
struct TYPE_15__ {int len; int base; } ;
struct TYPE_19__ {int lineno; int path; TYPE_2__ source; } ;
typedef TYPE_6__ h2o_mruby_config_vars_t ;
struct TYPE_16__ {TYPE_4__* mrb; } ;
struct TYPE_14__ {TYPE_6__ config; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,char*,int,int ) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_8 (TYPE_4__*,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

mrb_value FUNC_12(h2o_mruby_context_t *VAR_0)
{
    mrb_state *VAR_1 = VAR_0->shared->mrb;

    h2o_mruby_config_vars_t VAR_2 = VAR_0->handler->config;
    mrb_value VAR_3 = FUNC_6(VAR_1, 3);
    FUNC_7(VAR_1, VAR_3, FUNC_10(FUNC_8(VAR_1, "code")),
                 FUNC_2(VAR_1, VAR_2.source.base, VAR_2.source.len));
    FUNC_7(VAR_1, VAR_3, FUNC_10(FUNC_8(VAR_1, "file")),
                 FUNC_2(VAR_1, VAR_2.path, FUNC_11(VAR_2.path)));
    FUNC_7(VAR_1, VAR_3, FUNC_10(FUNC_8(VAR_1, "line")), FUNC_4(VAR_2.lineno));


    mrb_value VAR_4 = FUNC_5(VAR_1, FUNC_9(VAR_1->kernel_module), "_h2o_prepare_app", 1, VAR_3);
    FUNC_1(VAR_1);
    FUNC_0(FUNC_3(VAR_4));

    return VAR_4;
}

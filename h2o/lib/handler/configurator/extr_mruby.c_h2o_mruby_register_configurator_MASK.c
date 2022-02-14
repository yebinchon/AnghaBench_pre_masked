
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exit; int enter; } ;
struct mruby_configurator_t {TYPE_1__ super; int _vars_stack; int vars; } ;
typedef int h2o_globalconf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,char*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_2(h2o_globalconf_t *VAR_8)
{
    struct mruby_configurator_t *VAR_9 = (void *)FUNC_0(VAR_8, sizeof(*VAR_9));

    VAR_9->vars = VAR_9->_vars_stack;
    VAR_9->super.enter = VAR_3;
    VAR_9->super.exit = VAR_4;

    FUNC_1(
        &VAR_9->super, "mruby.handler",
        VAR_2 | VAR_0 | VAR_1, VAR_5);
    FUNC_1(&VAR_9->super, "mruby.handler-file",
                                    VAR_2 | VAR_0 |
                                        VAR_1,
                                    VAR_6);
    FUNC_1(&VAR_9->super, "mruby.handler_path", VAR_2 | VAR_0,
                                    VAR_7);
}

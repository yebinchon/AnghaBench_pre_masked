
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exit; int enter; } ;
struct throttle_resp_configurator_t {int _vars_stack; int vars; TYPE_1__ super; } ;
typedef int h2o_globalconf_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2(h2o_globalconf_t *VAR_5)
{
    struct throttle_resp_configurator_t *VAR_6 = (void *)FUNC_0(VAR_5, sizeof(*VAR_6));

    VAR_6->super.enter = VAR_2;
    VAR_6->super.exit = VAR_3;
    FUNC_1(&VAR_6->super, "throttle-response",
                                    VAR_0 | VAR_1,
                                    VAR_4);
    VAR_6->vars = VAR_6->_vars_stack;
}

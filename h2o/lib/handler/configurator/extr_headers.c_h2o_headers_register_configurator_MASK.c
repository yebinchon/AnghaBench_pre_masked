
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exit; int enter; } ;
struct headers_configurator_t {int _cmd_stack; int cmds; TYPE_1__ super; } ;
typedef int h2o_globalconf_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,TYPE_1__*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(h2o_globalconf_t *VAR_3)
{
    struct headers_configurator_t *VAR_4 = (void *)FUNC_0(VAR_3, sizeof(*VAR_4));

    VAR_4->super.enter = VAR_1;
    VAR_4->super.exit = VAR_2;

    FUNC_1(VAR_3, &VAR_4->super, "header", VAR_0);
    VAR_4->cmds = VAR_4->_cmd_stack;
}

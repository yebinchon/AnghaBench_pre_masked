
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yoml_t ;
struct throttle_resp_configurator_t {TYPE_1__* vars; } ;
typedef int h2o_configurator_context_t ;
struct TYPE_6__ {scalar_t__ configurator; } ;
typedef TYPE_2__ h2o_configurator_command_t ;
struct TYPE_5__ {int on; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *,char*) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct throttle_resp_configurator_t *VAR_3 = (void *)VAR_0->configurator;

    if ((VAR_3->vars->on = (int)FUNC_0(VAR_0, VAR_2, "OFF,ON")) == -1)
        return -1;
    return 0;
}

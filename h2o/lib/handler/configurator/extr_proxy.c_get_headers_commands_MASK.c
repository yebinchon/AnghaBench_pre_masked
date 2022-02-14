
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proxy_configurator_t {TYPE_2__* vars; } ;
typedef int h2o_headers_command_t ;
typedef int h2o_configurator_t ;
struct TYPE_3__ {int * headers_cmds; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;



__attribute__((used)) static h2o_headers_command_t **FUNC_0(h2o_configurator_t *VAR_0)
{
    struct proxy_configurator_t *VAR_1 = (void *)VAR_0;
    return &VAR_1->vars->conf.headers_cmds;
}

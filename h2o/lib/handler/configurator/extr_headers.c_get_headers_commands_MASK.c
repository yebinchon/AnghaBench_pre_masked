
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct headers_configurator_t {int ** cmds; } ;
typedef int h2o_headers_command_t ;
typedef int h2o_configurator_t ;



__attribute__((used)) static h2o_headers_command_t **FUNC_0(h2o_configurator_t *VAR_0)
{
    struct headers_configurator_t *VAR_1 = (void *)VAR_0;
    return VAR_1->cmds;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int yoml_t ;
struct proxy_configurator_t {TYPE_2__* vars; } ;
typedef int h2o_configurator_context_t ;
struct TYPE_8__ {scalar_t__ configurator; } ;
typedef TYPE_3__ h2o_configurator_command_t ;
struct TYPE_6__ {int max_buffer_size; } ;
struct TYPE_7__ {TYPE_1__ conf; } ;


 int FUNC_0 (TYPE_3__*,int *,char*,int *) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct proxy_configurator_t *VAR_3 = (void *)VAR_0->configurator;
    return FUNC_0(VAR_0, VAR_2, "%zu", &VAR_3->vars->conf.max_buffer_size);
}

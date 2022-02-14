
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int yoml_t ;
struct proxy_configurator_t {TYPE_3__* vars; } ;
typedef int h2o_configurator_context_t ;
struct TYPE_10__ {scalar_t__ configurator; } ;
typedef TYPE_4__ h2o_configurator_command_t ;
struct TYPE_7__ {int max_concurrent_strams; } ;
struct TYPE_8__ {TYPE_1__ http2; } ;
struct TYPE_9__ {TYPE_2__ conf; } ;


 int FUNC_0 (TYPE_4__*,int *,char*,int *) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct proxy_configurator_t *VAR_3 = (void *)VAR_0->configurator;
    return FUNC_0(VAR_0, VAR_2, "%u", &VAR_3->vars->conf.http2.max_concurrent_strams);
}

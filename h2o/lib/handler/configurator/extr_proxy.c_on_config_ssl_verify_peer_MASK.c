
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yoml_t ;
struct proxy_configurator_t {TYPE_1__* vars; } ;
typedef int ssize_t ;
typedef int h2o_configurator_context_t ;
struct TYPE_6__ {scalar_t__ configurator; } ;
typedef TYPE_2__ h2o_configurator_command_t ;
struct TYPE_5__ {int ssl_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int FUNC_1 (int *,int *,int,int *) ;

__attribute__((used)) static int FUNC_2(h2o_configurator_command_t *VAR_3, h2o_configurator_context_t *VAR_4, yoml_t *VAR_5)
{
    struct proxy_configurator_t *VAR_6 = (void *)VAR_3->configurator;
    ssize_t VAR_7 = FUNC_0(VAR_3, VAR_5, "OFF,ON");
    if (VAR_7 == -1)
        return -1;

    FUNC_1(&VAR_6->vars->ssl_ctx, ((void*)0), VAR_7 != 0 ? VAR_2 | VAR_0 : VAR_1,
                   ((void*)0));

    return 0;
}

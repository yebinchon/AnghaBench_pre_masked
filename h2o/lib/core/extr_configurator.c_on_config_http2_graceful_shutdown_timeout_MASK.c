
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yoml_t ;
struct TYPE_7__ {TYPE_2__* globalconf; } ;
typedef TYPE_3__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_5__ {int graceful_shutdown_timeout; } ;
struct TYPE_6__ {TYPE_1__ http2; } ;


 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    return FUNC_0(VAR_0, VAR_2, &VAR_1->globalconf->http2.graceful_shutdown_timeout);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int yoml_t ;
struct TYPE_9__ {TYPE_3__* globalconf; } ;
typedef TYPE_4__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_6__ {int max_cwnd; } ;
struct TYPE_7__ {TYPE_1__ latency_optimization; } ;
struct TYPE_8__ {TYPE_2__ http2; } ;


 int FUNC_0 (int *,int *,char*,int *) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1,
                                                         yoml_t *VAR_2)
{
    return FUNC_0(VAR_0, VAR_2, "%u", &VAR_1->globalconf->http2.latency_optimization.max_cwnd);
}

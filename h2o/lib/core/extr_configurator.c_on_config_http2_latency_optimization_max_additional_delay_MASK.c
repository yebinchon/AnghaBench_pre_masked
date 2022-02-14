
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
struct TYPE_6__ {int max_additional_delay; } ;
struct TYPE_7__ {TYPE_1__ latency_optimization; } ;
struct TYPE_8__ {TYPE_2__ http2; } ;


 int FUNC_0 (int *,int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *,char*,double*) ;

__attribute__((used)) static int FUNC_2(h2o_configurator_command_t *VAR_0,
                                                                     h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    double VAR_3;
    if (FUNC_1(VAR_0, VAR_2, "%lf", &VAR_3) != 0)
        return -1;
    if (!(0.0 < VAR_3)) {
        FUNC_0(VAR_0, VAR_2, "ratio must be a positive number");
        return -1;
    }
    VAR_1->globalconf->http2.latency_optimization.max_additional_delay = 100 * VAR_3;
    return 0;
}

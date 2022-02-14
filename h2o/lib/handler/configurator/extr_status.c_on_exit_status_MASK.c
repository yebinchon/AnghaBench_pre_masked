
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yoml_t ;
struct st_status_configurator {scalar_t__ duration_stats; int stack; } ;
typedef int h2o_configurator_t ;
struct TYPE_3__ {int globalconf; } ;
typedef TYPE_1__ h2o_configurator_context_t ;


 int FUNC_0 (int ) ;

int FUNC_1(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct st_status_configurator *VAR_3 = (void *)VAR_0;
    VAR_3->stack--;
    if (!VAR_3->stack && VAR_3->duration_stats) {
        FUNC_0(VAR_1->globalconf);
    }
    return 0;
}

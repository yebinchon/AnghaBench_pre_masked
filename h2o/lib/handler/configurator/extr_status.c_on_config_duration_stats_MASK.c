
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yoml_t ;
struct st_status_configurator {int duration_stats; } ;
typedef scalar_t__ ssize_t ;
typedef int h2o_configurator_context_t ;
struct TYPE_4__ {scalar_t__ configurator; } ;
typedef TYPE_1__ h2o_configurator_command_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *,char*) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct st_status_configurator *VAR_3 = (void *)VAR_0->configurator;
    ssize_t VAR_4;
    switch (VAR_4 = FUNC_0(VAR_0, VAR_2, "OFF,ON")) {
    case 0:
    case 1:
        VAR_3->duration_stats = (int)VAR_4;
        return 0;
    default:
        return -1;
    }
}

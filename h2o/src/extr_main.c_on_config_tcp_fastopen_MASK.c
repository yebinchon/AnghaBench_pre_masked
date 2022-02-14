
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int yoml_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_2__ {scalar_t__ tfo_queues; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    if (FUNC_1(VAR_1, VAR_3, "%d", &VAR_0.tfo_queues) != 0)
        return -1;

    if (VAR_0.tfo_queues != 0) {
        FUNC_0(VAR_1, VAR_3, "[warning] ignoring the value; the platform does not support TCP_FASTOPEN");
        VAR_0.tfo_queues = 0;
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int yoml_t ;
typedef int ssize_t ;
typedef int h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_2__ {int crash_handler_wait_pipe_close; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    ssize_t VAR_4;

    if ((VAR_4 = FUNC_0(VAR_1, VAR_3, "OFF,ON")) == -1)
        return -1;

    VAR_0.crash_handler_wait_pipe_close = (int)VAR_4;
    return 0;
}

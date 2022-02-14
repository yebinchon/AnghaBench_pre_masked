
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yoml_t ;
typedef int ssize_t ;
struct TYPE_7__ {TYPE_2__* globalconf; } ;
typedef TYPE_3__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_5__ {int emit_missing_date_header; } ;
struct TYPE_6__ {TYPE_1__ proxy; } ;


 int FUNC_0 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    ssize_t VAR_3 = FUNC_0(VAR_0, VAR_2, "OFF,ON");
    if (VAR_3 == -1)
        return -1;
    VAR_1->globalconf->proxy.emit_missing_date_header = (int)VAR_3;
    return 0;
}

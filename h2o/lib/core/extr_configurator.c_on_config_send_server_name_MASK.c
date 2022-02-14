
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
struct TYPE_5__ {int preserve_server_header; } ;
struct TYPE_6__ {TYPE_1__ proxy; void* server_name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,char*) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    switch (FUNC_1(VAR_0, VAR_2, "OFF,ON,preserve")) {
    case 0:
        VAR_1->globalconf->server_name = FUNC_2(FUNC_0(""));
        break;
    case 1:
        break;
    case 2:
        VAR_1->globalconf->server_name = FUNC_2(FUNC_0(""));
        VAR_1->globalconf->proxy.preserve_server_header = 1;
        break;
    default:
        return -1;
    }
    return 0;
}

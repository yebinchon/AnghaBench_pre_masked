
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int yoml_t ;
struct TYPE_5__ {TYPE_1__* globalconf; } ;
typedef TYPE_2__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;
struct TYPE_4__ {int send_informational_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,char*) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_3, h2o_configurator_context_t *VAR_4, yoml_t *VAR_5)
{
    switch (FUNC_0(VAR_3, VAR_5, "except-h1,none,all")) {
    case 0:
        VAR_4->globalconf->send_informational_mode = VAR_1;
        break;
    case 1:
        VAR_4->globalconf->send_informational_mode = VAR_2;
        break;
    case 2:
        VAR_4->globalconf->send_informational_mode = VAR_0;
        break;
    default:
        return -1;
    }
    return 0;
}

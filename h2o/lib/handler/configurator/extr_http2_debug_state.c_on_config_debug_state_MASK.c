
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yoml_t ;
struct TYPE_3__ {int hostconf; } ;
typedef TYPE_1__ h2o_configurator_context_t ;
typedef int h2o_configurator_command_t ;


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(h2o_configurator_command_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    switch (FUNC_0(VAR_0, VAR_2, "minimum,hpack")) {
    case 0:
        FUNC_1(VAR_1->hostconf, 0);
        return 0;
    case 1:
        FUNC_1(VAR_1->hostconf, 1);
        return 0;
    default:
        return -1;
    }
}

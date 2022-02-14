
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int yoml_t ;
struct st_h2o_file_configurator_t {TYPE_1__* vars; } ;
typedef int h2o_configurator_context_t ;
struct TYPE_6__ {scalar_t__ configurator; } ;
typedef TYPE_2__ h2o_configurator_command_t ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,char*) ;

__attribute__((used)) static int FUNC_1(h2o_configurator_command_t *VAR_1, h2o_configurator_context_t *VAR_2, yoml_t *VAR_3)
{
    struct st_h2o_file_configurator_t *VAR_4 = (void *)VAR_1->configurator;

    switch (FUNC_0(VAR_1, VAR_3, "OFF,ON")) {
    case 0:
        VAR_4->vars->flags &= ~VAR_0;
        break;
    case 1:
        VAR_4->vars->flags |= VAR_0;
        break;
    default:
        return -1;
    }

    return 0;
}

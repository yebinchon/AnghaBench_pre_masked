
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exit; int enter; } ;
struct st_h2o_access_log_configurator_t {TYPE_1__ super; int _handles_stack; int handles; } ;
typedef int h2o_globalconf_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(h2o_globalconf_t *VAR_4)
{
    struct st_h2o_access_log_configurator_t *VAR_5 = (void *)FUNC_0(VAR_4, sizeof(*VAR_5));

    VAR_5->super.enter = VAR_2;
    VAR_5->super.exit = VAR_3;
    VAR_5->handles = VAR_5->_handles_stack;

    FUNC_1(&VAR_5->super, "access-log", VAR_0, VAR_1);
}

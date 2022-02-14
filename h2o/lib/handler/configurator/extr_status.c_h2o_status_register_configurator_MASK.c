
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exit; int enter; } ;
struct st_status_configurator {TYPE_1__ super; } ;
typedef int h2o_globalconf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,char*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_2(h2o_globalconf_t *VAR_8)
{
    struct st_status_configurator *VAR_9 = (void *)FUNC_0(VAR_8, sizeof(*VAR_9));
    VAR_9->super.enter = VAR_6;
    VAR_9->super.exit = VAR_7;

    FUNC_1(
        &VAR_9->super, "status", VAR_3 | VAR_0 | VAR_1,
        VAR_5);

    FUNC_1(&VAR_9->super, "duration-stats", VAR_2 | VAR_1,
                                    VAR_4);
}

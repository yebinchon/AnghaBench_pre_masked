
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int on_req; int on_context_dispose; int on_context_init; } ;
struct st_h2o_root_status_handler_t {TYPE_1__ super; } ;
struct TYPE_6__ {int global; } ;
typedef TYPE_2__ h2o_pathconf_t ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_2(h2o_pathconf_t *VAR_7)
{
    struct st_h2o_root_status_handler_t *VAR_8 = (void *)FUNC_1(VAR_7, sizeof(*VAR_8));
    VAR_8->super.on_context_init = VAR_5;
    VAR_8->super.on_context_dispose = VAR_4;
    VAR_8->super.on_req = VAR_6;
    FUNC_0(VAR_7->global, &VAR_2);
    FUNC_0(VAR_7->global, &VAR_1);
    FUNC_0(VAR_7->global, &VAR_3);
    FUNC_0(VAR_7->global, &VAR_0);
}

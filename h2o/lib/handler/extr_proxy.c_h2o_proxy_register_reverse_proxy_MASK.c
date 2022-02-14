
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int supports_request_streaming; int on_req; int dispose; int on_context_dispose; int on_context_init; } ;
struct rp_handler_t {int * sockpool; int config; TYPE_1__ super; } ;
typedef int h2o_socketpool_t ;
typedef int h2o_proxy_config_vars_t ;
typedef int h2o_pathconf_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(h2o_pathconf_t *VAR_4, h2o_proxy_config_vars_t *VAR_5, h2o_socketpool_t *VAR_6)
{
    struct rp_handler_t *VAR_7 = (void *)FUNC_0(VAR_4, sizeof(*VAR_7));

    VAR_7->super.on_context_init = VAR_1;
    VAR_7->super.on_context_dispose = VAR_0;
    VAR_7->super.dispose = VAR_2;
    VAR_7->super.on_req = VAR_3;
    VAR_7->super.supports_request_streaming = 1;
    VAR_7->config = *VAR_5;
    VAR_7->sockpool = VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int on_req; } ;
struct st_h2o_http2_debug_state_handler_t {int hpack_enabled; TYPE_1__ super; } ;
typedef int h2o_pathconf_t ;
typedef int h2o_hostconf_t ;


 int * FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_0 ;

void FUNC_2(h2o_hostconf_t *VAR_1, int VAR_2)
{
    h2o_pathconf_t *VAR_3 = FUNC_0(VAR_1, "/.well-known/h2/state", 0);
    struct st_h2o_http2_debug_state_handler_t *VAR_4 = (void *)FUNC_1(VAR_3, sizeof(*VAR_4));
    VAR_4->super.on_req = VAR_0;
    VAR_4->hpack_enabled = VAR_2;
}

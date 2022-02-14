
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int on_req; int dispose; } ;
struct TYPE_5__ {int internal; int status; int prefix; TYPE_1__ super; } ;
typedef TYPE_2__ h2o_redirect_handler_t ;
typedef int h2o_pathconf_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

h2o_redirect_handler_t *FUNC_2(h2o_pathconf_t *VAR_3, int VAR_4, int VAR_5, const char *VAR_6)
{
    h2o_redirect_handler_t *VAR_7 = (void *)FUNC_0(VAR_3, sizeof(*VAR_7));
    VAR_7->super.dispose = VAR_1;
    VAR_7->super.on_req = VAR_2;
    VAR_7->internal = VAR_4;
    VAR_7->status = VAR_5;
    VAR_7->prefix = FUNC_1(((void*)0), VAR_6, VAR_0);
    return VAR_7;
}

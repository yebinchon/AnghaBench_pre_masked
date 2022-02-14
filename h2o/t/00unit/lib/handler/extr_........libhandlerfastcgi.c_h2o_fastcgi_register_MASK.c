
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int h2o_url_t ;
typedef int h2o_socketpool_target_t ;
typedef int h2o_pathconf_t ;
struct TYPE_10__ {int len; int * base; } ;
struct TYPE_9__ {int keepalive_timeout; TYPE_4__ document_root; } ;
struct TYPE_7__ {int on_req; int dispose; int on_context_dispose; int on_context_init; } ;
struct TYPE_8__ {TYPE_3__ config; int sockpool; TYPE_1__ super; } ;
typedef TYPE_2__ h2o_fastcgi_handler_t ;
typedef TYPE_3__ h2o_fastcgi_config_vars_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int **,int,int *) ;
 int FUNC_3 (int *,int ) ;
 TYPE_4__ FUNC_4 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

h2o_fastcgi_handler_t *FUNC_5(h2o_pathconf_t *VAR_5, h2o_url_t *VAR_6, h2o_fastcgi_config_vars_t *VAR_7)
{
    h2o_fastcgi_handler_t *VAR_8 = (void *)FUNC_0(VAR_5, sizeof(*VAR_8));

    VAR_8->super.on_context_init = VAR_2;
    VAR_8->super.on_context_dispose = VAR_1;
    VAR_8->super.dispose = VAR_3;
    VAR_8->super.on_req = VAR_4;
    VAR_8->config = *VAR_7;
    if (VAR_7->document_root.base != ((void*)0))
        VAR_8->config.document_root = FUNC_4(((void*)0), VAR_7->document_root.base, VAR_7->document_root.len);

    h2o_socketpool_target_t *VAR_9 = FUNC_1(VAR_6, ((void*)0));
    h2o_socketpool_target_t **VAR_10 = &VAR_9;
    FUNC_2(&VAR_8->sockpool, VAR_0 , VAR_10, 1, ((void*)0));
    FUNC_3(&VAR_8->sockpool, VAR_8->config.keepalive_timeout);
    return VAR_8;
}

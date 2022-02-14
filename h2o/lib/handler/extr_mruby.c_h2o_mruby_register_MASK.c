
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int h2o_pathconf_t ;
struct TYPE_14__ {int base; } ;
struct TYPE_11__ {int lineno; int path; TYPE_6__ source; } ;
struct TYPE_9__ {int on_req; int dispose; int on_context_dispose; int on_context_init; } ;
struct TYPE_12__ {int * pathconf; TYPE_3__ config; TYPE_1__ super; } ;
typedef TYPE_4__ h2o_mruby_handler_t ;
struct TYPE_10__ {int len; int * base; } ;
struct TYPE_13__ {int lineno; int * path; TYPE_2__ source; } ;
typedef TYPE_5__ h2o_mruby_config_vars_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 TYPE_6__ FUNC_1 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

h2o_mruby_handler_t *FUNC_2(h2o_pathconf_t *VAR_5, h2o_mruby_config_vars_t *VAR_6)
{
    h2o_mruby_handler_t *VAR_7 = (void *)FUNC_0(VAR_5, sizeof(*VAR_7));

    VAR_7->super.on_context_init = VAR_2;
    VAR_7->super.on_context_dispose = VAR_1;
    VAR_7->super.dispose = VAR_3;
    VAR_7->super.on_req = VAR_4;
    VAR_7->config.source = FUNC_1(((void*)0), VAR_6->source.base, VAR_6->source.len);
    if (VAR_6->path != ((void*)0))
        VAR_7->config.path = FUNC_1(((void*)0), VAR_6->path, VAR_0).base;
    VAR_7->config.lineno = VAR_6->lineno;
    VAR_7->pathconf = VAR_5;

    return VAR_7;
}

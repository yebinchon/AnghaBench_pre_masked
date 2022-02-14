
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int yoml_t ;
struct st_core_configurator_t {TYPE_7__* vars; } ;
typedef int h2o_configurator_t ;
struct TYPE_17__ {TYPE_5__* pathconf; TYPE_2__* hostconf; } ;
typedef TYPE_8__ h2o_configurator_context_t ;
struct TYPE_15__ {int emit_request_errors; } ;
struct TYPE_12__ {int casper; int allow_cross_origin_push; int push_preload; int reprioritize_blocking_assets; } ;
struct TYPE_16__ {TYPE_6__ error_log; TYPE_3__ http2; } ;
struct TYPE_13__ {int emit_request_errors; } ;
struct TYPE_14__ {TYPE_4__ error_log; } ;
struct TYPE_10__ {int casper; int allow_cross_origin_push; int push_preload; int reprioritize_blocking_assets; } ;
struct TYPE_11__ {TYPE_1__ http2; } ;



__attribute__((used)) static int FUNC_0(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct st_core_configurator_t *VAR_3 = (void *)VAR_0;

    if (VAR_1->hostconf != ((void*)0) && VAR_1->pathconf == ((void*)0)) {

        VAR_1->hostconf->http2.reprioritize_blocking_assets = VAR_3->vars->http2.reprioritize_blocking_assets;
        VAR_1->hostconf->http2.push_preload = VAR_3->vars->http2.push_preload;
        VAR_1->hostconf->http2.allow_cross_origin_push = VAR_3->vars->http2.allow_cross_origin_push;
        VAR_1->hostconf->http2.casper = VAR_3->vars->http2.casper;
    } else if (VAR_1->pathconf != ((void*)0)) {

        VAR_1->pathconf->error_log.emit_request_errors = VAR_3->vars->error_log.emit_request_errors;
    }

    --VAR_3->vars;
    return 0;
}

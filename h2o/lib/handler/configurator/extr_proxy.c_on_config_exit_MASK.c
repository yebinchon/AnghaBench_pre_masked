
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int yoml_t ;
struct proxy_configurator_t {TYPE_6__* vars; } ;
typedef int h2o_configurator_t ;
struct TYPE_15__ {TYPE_4__* globalconf; int * hostconf; int * pathconf; } ;
typedef TYPE_7__ h2o_configurator_context_t ;
struct TYPE_10__ {int ratio; int max_concurrent_strams; } ;
struct TYPE_13__ {int * headers_cmds; int keepalive_timeout; TYPE_2__ http2; int max_buffer_size; int first_byte_timeout; int connect_timeout; int io_timeout; } ;
struct TYPE_14__ {TYPE_5__ conf; int ssl_ctx; } ;
struct TYPE_9__ {int ratio; int max_concurrent_streams; } ;
struct TYPE_11__ {int global_socketpool; TYPE_1__ http2; int max_buffer_size; int keepalive_timeout; int first_byte_timeout; int connect_timeout; int io_timeout; } ;
struct TYPE_12__ {TYPE_3__ proxy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(h2o_configurator_t *VAR_0, h2o_configurator_context_t *VAR_1, yoml_t *VAR_2)
{
    struct proxy_configurator_t *VAR_3 = (void *)VAR_0;

    if (VAR_1->pathconf == ((void*)0) && VAR_1->hostconf == ((void*)0)) {

        VAR_1->globalconf->proxy.io_timeout = VAR_3->vars->conf.io_timeout;
        VAR_1->globalconf->proxy.connect_timeout = VAR_3->vars->conf.connect_timeout;
        VAR_1->globalconf->proxy.first_byte_timeout = VAR_3->vars->conf.first_byte_timeout;
        VAR_1->globalconf->proxy.keepalive_timeout = VAR_3->vars->conf.keepalive_timeout;
        VAR_1->globalconf->proxy.max_buffer_size = VAR_3->vars->conf.max_buffer_size;
        VAR_1->globalconf->proxy.http2.max_concurrent_streams = VAR_3->vars->conf.http2.max_concurrent_strams;
        VAR_1->globalconf->proxy.http2.ratio = VAR_3->vars->conf.http2.ratio;
        FUNC_2(&VAR_1->globalconf->proxy.global_socketpool, VAR_3->vars->ssl_ctx);
        FUNC_3(&VAR_1->globalconf->proxy.global_socketpool, VAR_3->vars->conf.keepalive_timeout);
    }
    FUNC_0(VAR_3->vars->ssl_ctx);

    if (VAR_3->vars->conf.headers_cmds != ((void*)0))
        FUNC_1(VAR_3->vars->conf.headers_cmds);

    --VAR_3->vars;
    return 0;
}

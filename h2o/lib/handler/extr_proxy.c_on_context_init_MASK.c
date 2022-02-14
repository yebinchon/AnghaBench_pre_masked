
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_19__ {scalar_t__ ratio; } ;
struct TYPE_18__ {int timeout; scalar_t__ enabled; } ;
struct TYPE_20__ {scalar_t__ io_timeout; scalar_t__ connect_timeout; scalar_t__ first_byte_timeout; scalar_t__ keepalive_timeout; scalar_t__ max_buffer_size; TYPE_6__ http2; TYPE_5__ websocket; } ;
struct rp_handler_t {TYPE_7__ config; int super; int sockpool; } ;
struct rp_handler_context_t {TYPE_9__* client_ctx; int connpool; } ;
struct TYPE_21__ {scalar_t__ ratio; int counter; } ;
struct TYPE_22__ {scalar_t__ io_timeout; scalar_t__ connect_timeout; scalar_t__ first_byte_timeout; scalar_t__ keepalive_timeout; scalar_t__ max_buffer_size; TYPE_8__ http2; int * websocket_timeout; int * getaddr_receiver; int loop; } ;
typedef TYPE_9__ h2o_httpclient_ctx_t ;
typedef int h2o_handler_t ;
struct TYPE_17__ {int hostinfo_getaddr; } ;
struct TYPE_13__ {TYPE_4__ receivers; int loop; TYPE_3__* globalconf; } ;
typedef TYPE_10__ h2o_context_t ;
struct TYPE_14__ {scalar_t__ ratio; } ;
struct TYPE_15__ {scalar_t__ io_timeout; scalar_t__ connect_timeout; scalar_t__ first_byte_timeout; scalar_t__ keepalive_timeout; scalar_t__ max_buffer_size; TYPE_1__ http2; } ;
struct TYPE_16__ {TYPE_2__ proxy; } ;


 int FUNC_0 (TYPE_10__*,int *,struct rp_handler_context_t*) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct rp_handler_context_t*,int ,int) ;

__attribute__((used)) static void FUNC_5(h2o_handler_t *VAR_0, h2o_context_t *VAR_1)
{
    struct rp_handler_t *VAR_2 = (void *)VAR_0;


    FUNC_3(VAR_2->sockpool, VAR_1->loop);

    struct rp_handler_context_t *VAR_3 = FUNC_2(sizeof(*VAR_3));
    FUNC_4(VAR_3, 0, sizeof(*VAR_3));
    FUNC_1(&VAR_3->connpool, VAR_2->sockpool);
    FUNC_0(VAR_1, &VAR_2->super, VAR_3);


    if (VAR_1->globalconf->proxy.io_timeout == VAR_2->config.io_timeout &&
        VAR_1->globalconf->proxy.connect_timeout == VAR_2->config.connect_timeout &&
        VAR_1->globalconf->proxy.first_byte_timeout == VAR_2->config.first_byte_timeout &&
        VAR_1->globalconf->proxy.keepalive_timeout == VAR_2->config.keepalive_timeout &&
        VAR_1->globalconf->proxy.max_buffer_size == VAR_2->config.max_buffer_size &&
        VAR_1->globalconf->proxy.http2.ratio == VAR_2->config.http2.ratio && !VAR_2->config.websocket.enabled)
        return;

    h2o_httpclient_ctx_t *VAR_4 = FUNC_2(sizeof(*VAR_1));
    VAR_4->loop = VAR_1->loop;
    VAR_4->getaddr_receiver = &VAR_1->receivers.hostinfo_getaddr;
    VAR_4->io_timeout = VAR_2->config.io_timeout;
    VAR_4->connect_timeout = VAR_2->config.connect_timeout;
    VAR_4->first_byte_timeout = VAR_2->config.first_byte_timeout;
    VAR_4->keepalive_timeout = VAR_2->config.keepalive_timeout;
    if (VAR_2->config.websocket.enabled) {
        VAR_4->websocket_timeout = &VAR_2->config.websocket.timeout;
    } else {
        VAR_4->websocket_timeout = ((void*)0);
    }

    VAR_4->max_buffer_size = VAR_2->config.max_buffer_size;
    VAR_4->http2.ratio = VAR_2->config.http2.ratio;
    VAR_4->http2.counter = -1;

    VAR_3->client_ctx = VAR_4;
}

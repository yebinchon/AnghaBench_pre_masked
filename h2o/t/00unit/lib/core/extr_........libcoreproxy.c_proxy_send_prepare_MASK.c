
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int is_head; } ;
struct TYPE_10__ {int stop; int proceed; } ;
struct rp_generator_t {int is_websocket_handshake; scalar_t__ res_done; scalar_t__ req_done; int send_headers_timeout; int sending; int * last_content_before_send; TYPE_3__ up_req; scalar_t__ had_body_error; TYPE_5__* src_req; TYPE_1__ super; } ;
struct TYPE_13__ {int len; int base; } ;
struct TYPE_11__ {int len; int base; } ;
struct TYPE_14__ {int proxy_stats; TYPE_4__ method; TYPE_2__ upgrade; int pool; } ;
typedef TYPE_5__ h2o_req_t ;
struct TYPE_15__ {int * websocket_timeout; } ;
typedef TYPE_6__ h2o_httpclient_ctx_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 struct rp_generator_t* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct rp_generator_t *FUNC_8(h2o_req_t *VAR_5)
{
    struct rp_generator_t *VAR_6 = FUNC_4(&VAR_5->pool, sizeof(*VAR_6), VAR_3);
    h2o_httpclient_ctx_t *VAR_7 = FUNC_1(VAR_5);

    VAR_6->super.proceed = VAR_0;
    VAR_6->super.stop = VAR_1;
    VAR_6->src_req = VAR_5;
    if (VAR_7->websocket_timeout != ((void*)0) && FUNC_3(VAR_5->upgrade.base, VAR_5->upgrade.len, FUNC_0("websocket"))) {
        VAR_6->is_websocket_handshake = 1;
    } else {
        VAR_6->is_websocket_handshake = 0;
    }
    VAR_6->had_body_error = 0;
    VAR_6->up_req.is_head = FUNC_5(VAR_5->method.base, VAR_5->method.len, FUNC_0("HEAD"));
    VAR_6->last_content_before_send = ((void*)0);
    FUNC_2(&VAR_6->sending, &VAR_2);
    FUNC_7(&VAR_5->proxy_stats, 0, sizeof(VAR_5->proxy_stats));
    FUNC_6(&VAR_6->send_headers_timeout, VAR_4);
    VAR_6->req_done = 0;
    VAR_6->res_done = 0;

    return VAR_6;
}

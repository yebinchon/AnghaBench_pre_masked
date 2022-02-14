
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int h2o_websocket_msg_callback ;
struct TYPE_15__ {int on_msg_recv_callback; int send_callback; int recv_callback; } ;
struct TYPE_13__ {TYPE_4__ ws_callbacks; int ws_ctx; int cb; void* data; } ;
typedef TYPE_2__ h2o_websocket_conn_t ;
struct TYPE_12__ {int status; char* reason; int headers; } ;
struct TYPE_14__ {int version; TYPE_1__ res; int pool; } ;
typedef TYPE_3__ h2o_req_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *,int *,int ,int *,int ) ;
 int FUNC_4 (int *,int *,int ,int ,int *,char*,int ) ;
 int FUNC_5 (TYPE_3__*,int *,int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,TYPE_4__*,TYPE_2__*) ;

h2o_websocket_conn_t *FUNC_10(h2o_req_t *VAR_5, const char *VAR_6, void *VAR_7, h2o_websocket_msg_callback VAR_8)
{
    h2o_websocket_conn_t *VAR_9 = FUNC_6(sizeof(*VAR_9));
    char VAR_10[29];


    FUNC_1(VAR_5->version < 0x200);


    FUNC_7(VAR_9, 0, sizeof(*VAR_9));

    VAR_9->ws_callbacks.recv_callback = VAR_3;
    VAR_9->ws_callbacks.send_callback = VAR_4;
    VAR_9->ws_callbacks.on_msg_recv_callback = VAR_2;
    VAR_9->data = VAR_7;
    VAR_9->cb = VAR_8;

    FUNC_9(&VAR_9->ws_ctx, &VAR_9->ws_callbacks, VAR_9);


    FUNC_2(VAR_10, VAR_6);
    VAR_5->res.status = 101;
    VAR_5->res.reason = "Switching Protocols";
    FUNC_3(&VAR_5->pool, &VAR_5->res.headers, VAR_0, ((void*)0), FUNC_0("websocket"));
    FUNC_4(&VAR_5->pool, &VAR_5->res.headers, FUNC_0("sec-websocket-accept"), 0, ((void*)0), VAR_10,
                          FUNC_8(VAR_10));


    FUNC_5(VAR_5, ((void*)0), 0, VAR_1, VAR_9);

    return VAR_9;
}

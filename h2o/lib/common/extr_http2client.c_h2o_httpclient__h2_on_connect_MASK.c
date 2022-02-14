
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ctx; int connpool; int _timeout; } ;
struct st_h2o_http2client_stream_t {TYPE_1__ super; } ;
struct TYPE_9__ {TYPE_2__* ctx; int sock; } ;
struct st_h2o_http2client_conn_t {int io_timeout; TYPE_3__ super; } ;
typedef int h2o_url_t ;
struct TYPE_10__ {struct st_h2o_http2client_conn_t* data; } ;
typedef TYPE_4__ h2o_socket_t ;
typedef int h2o_httpclient_t ;
struct TYPE_8__ {int io_timeout; int loop; } ;


 int FUNC_0 (int) ;
 struct st_h2o_http2client_conn_t* FUNC_1 (int ,TYPE_4__*,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct st_h2o_http2client_stream_t*,struct st_h2o_http2client_conn_t*) ;
 int VAR_0 ;
 int FUNC_6 (struct st_h2o_http2client_conn_t*,int ) ;
 int FUNC_7 (struct st_h2o_http2client_stream_t*) ;

void FUNC_8(h2o_httpclient_t *VAR_1, h2o_socket_t *VAR_2, h2o_url_t *VAR_3)
{
    struct st_h2o_http2client_stream_t *VAR_4 = (void *)VAR_1;

    FUNC_0(!FUNC_3(&VAR_4->super._timeout));

    struct st_h2o_http2client_conn_t *VAR_5 = VAR_2->data;
    if (VAR_5 == ((void*)0)) {
        VAR_5 = FUNC_1(VAR_4->super.ctx, VAR_2, VAR_3, VAR_4->super.connpool);
        VAR_2->data = VAR_5;

        FUNC_6(VAR_5, VAR_4->super.ctx);
        FUNC_2(VAR_5->super.sock, VAR_0);
    }

    FUNC_7(VAR_4);

    if (!FUNC_3(&VAR_5->io_timeout))
        FUNC_4(VAR_5->super.ctx->loop, VAR_5->super.ctx->io_timeout, &VAR_5->io_timeout);
    FUNC_5(VAR_4, VAR_5);
}

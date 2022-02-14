
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {int response_end_at; } ;
struct TYPE_11__ {int * proceed_req; scalar_t__ send_server_timing; scalar_t__ http1_is_persistent; TYPE_1__ timestamps; int * _ostr_top; } ;
struct TYPE_15__ {int state; int * chunked_buf; int super; } ;
struct TYPE_14__ {TYPE_2__* ctx; } ;
struct st_h2o_http1_conn_t {TYPE_10__ req; TYPE_4__ _ostr_final; int sock; TYPE_3__ super; } ;
struct TYPE_16__ {struct st_h2o_http1_conn_t* data; } ;
typedef TYPE_5__ h2o_socket_t ;
struct TYPE_17__ {scalar_t__ len; } ;
typedef TYPE_6__ h2o_iovec_t ;
struct TYPE_13__ {int loop; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct st_h2o_http1_conn_t*) ;
 TYPE_6__ FUNC_3 (TYPE_10__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_6__*,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(h2o_socket_t *VAR_2, const char *VAR_3)
{
    struct st_h2o_http1_conn_t *VAR_4 = VAR_2->data;

    FUNC_1(VAR_4->req._ostr_top == &VAR_4->_ostr_final.super);

    VAR_4->req.timestamps.response_end_at = FUNC_4(VAR_4->super.ctx->loop);

    if (VAR_3 != ((void*)0))
        VAR_4->req.http1_is_persistent = 0;

    if (VAR_3 == ((void*)0) && VAR_4->req.send_server_timing && VAR_4->_ostr_final.chunked_buf != ((void*)0)) {
        h2o_iovec_t VAR_5;
        if ((VAR_5 = FUNC_3(&VAR_4->req, FUNC_0("server-timing: "), FUNC_0("\r\n\r\n"))).len !=
            0) {
            FUNC_5(VAR_4->sock, &VAR_5, 1, VAR_1);
            return;
        }
    }



    VAR_4->_ostr_final.state = VAR_0;
    if (VAR_4->req.proceed_req == ((void*)0))
        FUNC_2(VAR_4);
}

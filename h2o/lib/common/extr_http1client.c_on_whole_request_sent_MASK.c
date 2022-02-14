
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_21__ {int cb; } ;
struct TYPE_15__ {int request_end_at; } ;
struct TYPE_14__ {int total; int body; } ;
struct TYPE_18__ {TYPE_9__ _timeout; TYPE_4__* ctx; TYPE_2__ timings; TYPE_1__ bytes_written; } ;
struct TYPE_16__ {int req; int res; } ;
struct st_h2o_http1client_t {TYPE_5__ super; TYPE_3__ state; int sock; scalar_t__ _is_chunked; } ;
struct TYPE_19__ {struct st_h2o_http1client_t* data; } ;
typedef TYPE_6__ h2o_socket_t ;
struct TYPE_20__ {scalar_t__ len; } ;
typedef TYPE_7__ h2o_iovec_t ;
struct TYPE_17__ {int first_byte_timeout; int loop; } ;


 int FUNC_0 (char*) ;



 int FUNC_1 (struct st_h2o_http1client_t*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_7__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_7__*,int,void (*) (TYPE_6__*,char const*)) ;
 int FUNC_5 (int ,int ,TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (struct st_h2o_http1client_t*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(h2o_socket_t *VAR_2, const char *VAR_3)
{
    struct st_h2o_http1client_t *VAR_4 = VAR_2->data;

    FUNC_6(&VAR_4->super._timeout);

    if (VAR_3 != ((void*)0)) {
        FUNC_7(VAR_4, VAR_0);
        return;
    }

    if (VAR_4->_is_chunked) {
        VAR_4->_is_chunked = 0;
        h2o_iovec_t VAR_5 = FUNC_3(FUNC_0("0\r\n\r\n"));
        VAR_4->super.bytes_written.body += VAR_5.len;
        VAR_4->super.bytes_written.total += VAR_5.len;
        FUNC_4(VAR_4->sock, &VAR_5, 1, FUNC_8);
        return;
    }

    VAR_4->state.req = 129;
    VAR_4->super.timings.request_end_at = FUNC_2(VAR_4->super.ctx->loop);

    switch (VAR_4->state.res) {
    case 128:
        VAR_4->super._timeout.cb = VAR_1;
        FUNC_5(VAR_4->super.ctx->loop, VAR_4->super.ctx->first_byte_timeout, &VAR_4->super._timeout);
        break;
    case 130:
        break;
    case 129:
        FUNC_1(VAR_4);
        break;
    }
}

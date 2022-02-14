
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_19__ {int (* on_body ) (TYPE_10__*,char*) ;} ;
struct TYPE_18__ {void* response_end_at; } ;
struct TYPE_14__ {int _timeout; TYPE_7__* ctx; TYPE_5__ _cb; TYPE_4__ timings; } ;
struct TYPE_20__ {scalar_t__ res; } ;
struct TYPE_16__ {int decoder; } ;
struct TYPE_17__ {TYPE_2__ chunked; } ;
struct st_h2o_http1client_t {int _seen_at_least_one_chunk; TYPE_10__ super; scalar_t__ _do_keepalive; TYPE_6__ state; TYPE_3__ _body_decoder; TYPE_1__* sock; } ;
struct TYPE_22__ {size_t bytes_read; struct st_h2o_http1client_t* data; } ;
typedef TYPE_8__ h2o_socket_t ;
struct TYPE_23__ {size_t bytes; size_t size; } ;
typedef TYPE_9__ h2o_buffer_t ;
struct TYPE_21__ {int io_timeout; int loop; } ;
struct TYPE_15__ {TYPE_9__* input; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct st_h2o_http1client_t*) ;
 int FUNC_1 (struct st_h2o_http1client_t*) ;
 int FUNC_2 (TYPE_10__*) ;
 void* FUNC_3 (int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char const* VAR_4 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct st_h2o_http1client_t*,int ) ;
 int FUNC_7 (int *,size_t,size_t*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_10__*,char*) ;
 int FUNC_10 (TYPE_10__*,char const*) ;

__attribute__((used)) static void FUNC_11(h2o_socket_t *VAR_5, const char *VAR_6)
{
    struct st_h2o_http1client_t *VAR_7 = VAR_5->data;
    h2o_buffer_t *VAR_8;

    FUNC_5(&VAR_7->super._timeout);

    if (VAR_6 != ((void*)0)) {
        if (VAR_6 == VAR_4 && !FUNC_8(&VAR_7->_body_decoder.chunked.decoder) &&
            VAR_7->_seen_at_least_one_chunk) {





            VAR_7->_do_keepalive = 0;
            VAR_7->state.res = VAR_0;
            VAR_7->super.timings.response_end_at = FUNC_3(VAR_7->super.ctx->loop);
            VAR_7->super._cb.on_body(&VAR_7->super, VAR_3);
            FUNC_1(VAR_7);
        } else {
            FUNC_6(VAR_7, VAR_2);
        }
        return;
    }

    VAR_8 = VAR_7->sock->input;
    if (VAR_5->bytes_read != 0) {
        const char *VAR_9;
        int VAR_10;
        size_t VAR_11 = VAR_5->bytes_read;

        switch (FUNC_7(&VAR_7->_body_decoder.chunked.decoder, VAR_8->bytes + VAR_8->size - VAR_11, &VAR_11)) {
        case -1:
            VAR_11 = VAR_5->bytes_read;
            VAR_7->_do_keepalive = 0;
            VAR_9 = VAR_1;
            break;
        case -2:
            VAR_9 = ((void*)0);
            break;
        default:
            VAR_7->_do_keepalive = 0;

        case 0:
            VAR_7->state.res = VAR_0;
            VAR_9 = VAR_3;
            VAR_7->super.timings.response_end_at = FUNC_3(VAR_7->super.ctx->loop);
            break;
        }
        VAR_8->size -= VAR_5->bytes_read - VAR_11;
        if (VAR_8->size > 0)
            VAR_7->_seen_at_least_one_chunk = 1;
        VAR_10 = VAR_7->super._cb.on_body(&VAR_7->super, VAR_9);
        if (VAR_7->state.res == VAR_0) {
            FUNC_1(VAR_7);
            return;
        } else if (VAR_9 != ((void*)0)) {
            FUNC_0(VAR_7);
            return;
        } else if (VAR_10 != 0) {
            VAR_7->_do_keepalive = 0;
            FUNC_0(VAR_7);
            return;
        }
        FUNC_2(&VAR_7->super);
    }

    FUNC_4(VAR_7->super.ctx->loop, VAR_7->super.ctx->io_timeout, &VAR_7->super._timeout);
}

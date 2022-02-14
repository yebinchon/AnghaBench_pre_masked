
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


struct TYPE_19__ {int (* on_body ) (TYPE_10__*,int *) ;} ;
struct TYPE_16__ {int response_end_at; } ;
struct TYPE_13__ {int _timeout; TYPE_8__* ctx; TYPE_6__ _cb; TYPE_3__ timings; } ;
struct TYPE_20__ {scalar_t__ res; } ;
struct TYPE_17__ {scalar_t__ bytesleft; } ;
struct TYPE_18__ {TYPE_4__ content_length; } ;
struct st_h2o_http1client_t {TYPE_10__ super; scalar_t__ _do_keepalive; TYPE_7__ state; TYPE_5__ _body_decoder; TYPE_2__* sock; } ;
struct TYPE_22__ {scalar_t__ bytes_read; struct st_h2o_http1client_t* data; } ;
typedef TYPE_9__ h2o_socket_t ;
struct TYPE_21__ {int io_timeout; int loop; } ;
struct TYPE_15__ {TYPE_1__* input; } ;
struct TYPE_14__ {int size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct st_h2o_http1client_t*) ;
 int FUNC_1 (struct st_h2o_http1client_t*) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct st_h2o_http1client_t*,int ) ;
 int FUNC_7 (TYPE_10__*,int *) ;

__attribute__((used)) static void FUNC_8(h2o_socket_t *VAR_3, const char *VAR_4)
{
    struct st_h2o_http1client_t *VAR_5 = VAR_3->data;

    FUNC_5(&VAR_5->super._timeout);

    if (VAR_4 != ((void*)0)) {
        FUNC_6(VAR_5, VAR_1);
        return;
    }

    if (VAR_3->bytes_read != 0 || VAR_5->_body_decoder.content_length.bytesleft == 0) {
        int VAR_6;
        if (VAR_5->_body_decoder.content_length.bytesleft <= VAR_3->bytes_read) {
            if (VAR_5->_body_decoder.content_length.bytesleft < VAR_3->bytes_read) {

                VAR_5->sock->input->size -= VAR_3->bytes_read - VAR_5->_body_decoder.content_length.bytesleft;
                VAR_5->_do_keepalive = 0;
            }
            VAR_5->_body_decoder.content_length.bytesleft = 0;
            VAR_5->state.res = VAR_0;
            VAR_5->super.timings.response_end_at = FUNC_3(VAR_5->super.ctx->loop);
        } else {
            VAR_5->_body_decoder.content_length.bytesleft -= VAR_3->bytes_read;
        }
        VAR_6 = VAR_5->super._cb.on_body(&VAR_5->super,
                                        VAR_5->state.res == VAR_0 ? VAR_2 : ((void*)0));
        if (VAR_5->state.res == VAR_0) {
            FUNC_1(VAR_5);
            return;
        } else if (VAR_6 != 0) {
            VAR_5->_do_keepalive = 0;
            FUNC_0(VAR_5);
            return;
        }
        FUNC_2(&VAR_5->super);
    }

    FUNC_4(VAR_5->super.ctx->loop, VAR_5->super.ctx->io_timeout, &VAR_5->super._timeout);
}

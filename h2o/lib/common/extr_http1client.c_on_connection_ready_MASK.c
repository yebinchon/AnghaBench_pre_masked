
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_12__ ;


struct TYPE_29__ {int request_begin_at; } ;
struct TYPE_25__ {int cb; } ;
struct TYPE_27__ {size_t header; size_t body; int total; } ;
struct TYPE_26__ {int * on_head; int * (* on_connect ) (TYPE_8__*,int *,TYPE_6__*,int *,int const**,size_t*,TYPE_6__*,int **,TYPE_7__*,int ) ;} ;
struct TYPE_33__ {TYPE_5__* ctx; TYPE_4__ timings; TYPE_14__ _timeout; TYPE_2__ bytes_written; TYPE_1__ _cb; } ;
struct TYPE_28__ {int req; } ;
struct st_h2o_http1client_t {TYPE_12__* sock; TYPE_8__ super; TYPE_3__ state; int _is_chunked; int _body_buf; int * proceed_req; int _method_is_head; int _origin; } ;
typedef int h2o_url_t ;
struct TYPE_31__ {size_t len; int * base; } ;
typedef TYPE_6__ h2o_iovec_t ;
struct TYPE_32__ {int* member_1; int * chunked; int * connection_header; TYPE_6__* proxy_protocol; TYPE_6__* member_2; TYPE_6__* member_0; } ;
typedef TYPE_7__ h2o_httpclient_properties_t ;
typedef int h2o_header_t ;
struct TYPE_30__ {int loop; int io_timeout; } ;
struct TYPE_24__ {int bytes_written; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_6__ FUNC_2 (struct st_h2o_http1client_t*,TYPE_6__,int ,int ,int *,size_t) ;
 int FUNC_3 (struct st_h2o_http1client_t*) ;
 scalar_t__ FUNC_4 (struct st_h2o_http1client_t*,TYPE_6__*,TYPE_6__,size_t*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,size_t) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 TYPE_6__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,size_t,int ) ;
 int VAR_2 ;
 int FUNC_10 (TYPE_12__*,int ) ;
 int FUNC_11 (TYPE_12__*,TYPE_6__*,size_t,int (*) (TYPE_12__*,int )) ;
 int FUNC_12 (int ,int ,TYPE_14__*) ;
 int VAR_3 ;
 int FUNC_13 (TYPE_12__*,int ) ;
 int VAR_4 ;
 int FUNC_14 (TYPE_12__*,int ) ;
 int * FUNC_15 (TYPE_8__*,int *,TYPE_6__*,int *,int const**,size_t*,TYPE_6__*,int **,TYPE_7__*,int ) ;

__attribute__((used)) static void FUNC_16(struct st_h2o_http1client_t *VAR_5)
{
    h2o_iovec_t VAR_6 = FUNC_8(((void*)0), 0);
    int VAR_7 = 0;
    h2o_iovec_t VAR_8 = FUNC_8(((void*)0), 0);
    h2o_httpclient_properties_t VAR_9 = {
        &VAR_6,
        &VAR_7,
        &VAR_8,
    };
    h2o_iovec_t VAR_10;
    h2o_url_t VAR_11;
    h2o_header_t *VAR_12;
    size_t VAR_13;
    h2o_iovec_t VAR_14;

    VAR_5->super._cb.on_head = VAR_5->super._cb.on_connect(&VAR_5->super, ((void*)0), &VAR_10, &VAR_11, (const h2o_header_t **)&VAR_12,
                                                             &VAR_13, &VAR_14, &VAR_5->proceed_req, &VAR_9, VAR_5->_origin);

    if (VAR_5->super._cb.on_head == ((void*)0)) {
        FUNC_3(VAR_5);
        return;
    }

    h2o_iovec_t VAR_15[3];
    size_t VAR_16 = 0;
    if (VAR_9.proxy_protocol->base != ((void*)0))
        VAR_15[VAR_16++] = *VAR_9.proxy_protocol;
    h2o_iovec_t VAR_17 = FUNC_2(VAR_5, VAR_10, VAR_11, *VAR_9.connection_header, VAR_12, VAR_13);
    VAR_15[VAR_16++] = VAR_17;
    VAR_5->super.bytes_written.header = VAR_17.len;

    VAR_5->_is_chunked = *VAR_9.chunked;
    VAR_5->_method_is_head = FUNC_9(VAR_10.base, VAR_10.len, FUNC_0("HEAD"));

    if (VAR_5->proceed_req != ((void*)0)) {
        if (VAR_14.base != ((void*)0)) {
            FUNC_5(&VAR_5->_body_buf, &VAR_2);
            if (!FUNC_6(&VAR_5->_body_buf, VAR_14.base, VAR_14.len)) {
                FUNC_14(VAR_5->sock, VAR_1);
                return;
            }
        }
        FUNC_11(VAR_5->sock, VAR_15, VAR_16, FUNC_13);
    } else {
        if (VAR_5->_is_chunked) {
            FUNC_1(VAR_14.base != ((void*)0));
            size_t VAR_18;
            VAR_16 += FUNC_4(VAR_5, VAR_15 + VAR_16, VAR_14, &VAR_18);
            VAR_5->super.bytes_written.body = VAR_18;
        } else if (VAR_14.base != ((void*)0)) {
            VAR_15[VAR_16++] = VAR_14;
            VAR_5->super.bytes_written.body = VAR_14.len;
        }
        FUNC_11(VAR_5->sock, VAR_15, VAR_16, FUNC_14);
    }
    VAR_5->super.bytes_written.total = VAR_5->sock->bytes_written;


    VAR_5->super._timeout.cb = VAR_4;
    FUNC_12(VAR_5->super.ctx->loop, VAR_5->super.ctx->io_timeout, &VAR_5->super._timeout);

    VAR_5->state.req = VAR_0;
    VAR_5->super.timings.request_begin_at = FUNC_7(VAR_5->super.ctx->loop);

    FUNC_10(VAR_5->sock, VAR_3);
}

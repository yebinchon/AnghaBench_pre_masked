
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_28__ {scalar_t__ len; } ;
typedef TYPE_6__ h2o_iovec_t ;
struct TYPE_26__ {scalar_t__ (* cb ) (int ,TYPE_6__,int) ;int ctx; } ;
struct TYPE_27__ {size_t req_body_bytes_received; size_t content_length; TYPE_4__ write_req; int * proceed_req; } ;
struct TYPE_29__ {scalar_t__ state; scalar_t__ _req_streaming_in_progress; int stream_id; TYPE_5__ req; int blocked_by_server; } ;
typedef TYPE_7__ h2o_http2_stream_t ;
struct TYPE_25__ {TYPE_2__* ctx; } ;
struct TYPE_30__ {TYPE_3__ super; } ;
typedef TYPE_8__ h2o_http2_conn_t ;
struct TYPE_24__ {TYPE_1__* globalconf; } ;
struct TYPE_23__ {size_t max_request_entity_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_8__*,TYPE_7__*,int) ;
 int FUNC_4 (TYPE_8__*,TYPE_7__*,scalar_t__) ;
 int FUNC_5 (TYPE_8__*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_6__,int) ;

__attribute__((used)) static void FUNC_7(h2o_http2_conn_t *VAR_7, h2o_http2_stream_t *VAR_8, h2o_iovec_t VAR_9, int VAR_10)
{
    VAR_8->req.req_body_bytes_received += VAR_9.len;


    if (VAR_8->req.req_body_bytes_received > VAR_7->super.ctx->globalconf->max_request_entity_size) {
        FUNC_5(VAR_7, VAR_8->stream_id, VAR_1);
        FUNC_2(VAR_7, VAR_8);
        return;
    }
    if (VAR_8->req.content_length != VAR_6) {
        size_t VAR_11 = VAR_8->req.req_body_bytes_received, VAR_12 = VAR_8->req.content_length;
        if (VAR_10 ? (VAR_11 != VAR_12) : (VAR_11 > VAR_12)) {
            FUNC_5(VAR_7, VAR_8->stream_id, VAR_0);
            FUNC_2(VAR_7, VAR_8);
            return;
        }
    }


    if (!VAR_8->blocked_by_server)
        FUNC_3(VAR_7, VAR_8, 1);


    if (VAR_10 && VAR_8->state < VAR_4) {
        FUNC_4(VAR_7, VAR_8, VAR_4);
        if (VAR_8->req.proceed_req != ((void*)0))
            FUNC_4(VAR_7, VAR_8, VAR_5);
    }
    if (VAR_8->req.write_req.cb(VAR_8->req.write_req.ctx, VAR_9, VAR_10) != 0) {
        FUNC_5(VAR_7, VAR_8->stream_id, VAR_2);
        FUNC_2(VAR_7, VAR_8);
        return;
    }

    if (VAR_10) {
        if (VAR_8->_req_streaming_in_progress) {
            FUNC_0(VAR_8);
        }
        if (VAR_8->state == VAR_3) {
            FUNC_1(VAR_7, VAR_8);
        }
    }
}

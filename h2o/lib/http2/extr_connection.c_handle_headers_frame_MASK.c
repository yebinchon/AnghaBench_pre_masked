
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_26__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_31__ {TYPE_3__* ctx; int cb; } ;
struct TYPE_32__ {TYPE_2__ write_req; } ;
struct TYPE_28__ {scalar_t__ dependency; } ;
struct TYPE_33__ {scalar_t__ state; TYPE_26__* req_body; TYPE_3__ req; TYPE_10__ received_priority; int _req_streaming_in_progress; } ;
typedef TYPE_4__ h2o_http2_stream_t ;
struct TYPE_34__ {int headers_len; int headers; TYPE_10__ priority; } ;
typedef TYPE_5__ h2o_http2_headers_payload_t ;
struct TYPE_35__ {int stream_id; int flags; } ;
typedef TYPE_6__ h2o_http2_frame_t ;
struct TYPE_29__ {int max_open; } ;
struct TYPE_36__ {TYPE_26__* _headers_unparsed; int _read_expect; TYPE_1__ pull_stream_ids; } ;
typedef TYPE_7__ h2o_http2_conn_t ;
struct TYPE_30__ {int size; int bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_26__**,int *) ;
 int FUNC_1 (TYPE_26__**,int ) ;
 TYPE_4__* FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,char const**) ;
 TYPE_4__* FUNC_4 (TYPE_7__*,int,int *,TYPE_10__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_7__*,TYPE_4__*,int ,int ,char const**) ;
 int FUNC_7 (TYPE_7__*,TYPE_4__*,int ,int ,char const**) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (TYPE_7__*,TYPE_4__*,TYPE_10__*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(h2o_http2_conn_t *VAR_9, h2o_http2_frame_t *VAR_10, const char **VAR_11)
{
    h2o_http2_headers_payload_t VAR_12;
    h2o_http2_stream_t *VAR_13;
    int VAR_14;


    if ((VAR_14 = FUNC_3(&VAR_12, VAR_10, VAR_11)) != 0)
        return VAR_14;
    if ((VAR_10->stream_id & 1) == 0) {
        *VAR_11 = "invalid stream id in HEADERS frame";
        return VAR_0;
    }
    if (VAR_10->stream_id <= VAR_9->pull_stream_ids.max_open) {
        if ((VAR_13 = FUNC_2(VAR_9, VAR_10->stream_id)) == ((void*)0)) {
            *VAR_11 = "closed stream id in HEADERS frame";
            return VAR_1;
        }
        if (VAR_13->state < VAR_5 ||
            (VAR_13->state > VAR_5 && !VAR_13->_req_streaming_in_progress)) {
            *VAR_11 = "invalid stream id in HEADERS frame";
            return VAR_0;
        }


        if ((VAR_10->flags & VAR_3) == 0) {
            *VAR_11 = "trailing HEADERS frame MUST have END_STREAM flag set";
            return VAR_0;
        }
        if ((VAR_10->flags & VAR_2) == 0)
            goto PREPARE_FOR_CONTINUATION;
        return FUNC_7(VAR_9, VAR_13, VAR_12.headers, VAR_12.headers_len, VAR_11);
    }
    if (VAR_10->stream_id == VAR_12.priority.dependency) {
        *VAR_11 = "stream cannot depend on itself";
        return VAR_0;
    }


    if ((VAR_13 = FUNC_2(VAR_9, VAR_10->stream_id)) != ((void*)0)) {
        if ((VAR_10->flags & VAR_4) != 0) {
            FUNC_9(VAR_9, VAR_13, &VAR_12.priority, 1);
            VAR_13->received_priority = VAR_12.priority;
        }
    } else {
        VAR_13 = FUNC_4(VAR_9, VAR_10->stream_id, ((void*)0), &VAR_12.priority);
        FUNC_9(VAR_9, VAR_13, &VAR_12.priority, 0);
    }
    FUNC_5(VAR_9, VAR_13);
    VAR_13->req.write_req.cb = VAR_8;
    VAR_13->req.write_req.ctx = &VAR_13->req;


    if ((VAR_10->flags & VAR_3) == 0)
        FUNC_0(&VAR_13->req_body, &VAR_7);

    if ((VAR_10->flags & VAR_2) != 0) {

        return FUNC_6(VAR_9, VAR_13, VAR_12.headers, VAR_12.headers_len, VAR_11);
    }

PREPARE_FOR_CONTINUATION:

    VAR_9->_read_expect = VAR_6;
    FUNC_0(&VAR_9->_headers_unparsed, &VAR_7);
    FUNC_1(&VAR_9->_headers_unparsed, VAR_12.headers_len);
    FUNC_8(VAR_9->_headers_unparsed->bytes, VAR_12.headers, VAR_12.headers_len);
    VAR_9->_headers_unparsed->size = VAR_12.headers_len;
    return 0;
}

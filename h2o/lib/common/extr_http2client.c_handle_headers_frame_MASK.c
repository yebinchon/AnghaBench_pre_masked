
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {scalar_t__ res; } ;
struct TYPE_14__ {int _timeout; } ;
struct st_h2o_http2client_stream_t {TYPE_3__ state; TYPE_2__ super; } ;
struct TYPE_16__ {TYPE_10__* headers_unparsed; void* read_frame; } ;
struct st_h2o_http2client_conn_t {TYPE_4__ input; } ;
struct TYPE_13__ {scalar_t__ dependency; } ;
struct TYPE_17__ {int headers_len; int headers; TYPE_1__ priority; } ;
typedef TYPE_5__ h2o_http2_headers_payload_t ;
struct TYPE_18__ {int stream_id; int flags; } ;
typedef TYPE_6__ h2o_http2_frame_t ;
struct TYPE_12__ {int size; int bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 struct st_h2o_http2client_stream_t* FUNC_0 (struct st_h2o_http2client_conn_t*,scalar_t__) ;
 int FUNC_1 (TYPE_10__**,int *) ;
 int FUNC_2 (TYPE_10__**,int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,char const**) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct st_h2o_http2client_conn_t*,struct st_h2o_http2client_stream_t*,int ,int ,char const**,int) ;

__attribute__((used)) static int FUNC_7(struct st_h2o_http2client_conn_t *VAR_7, h2o_http2_frame_t *VAR_8, const char **VAR_9)
{
    h2o_http2_headers_payload_t VAR_10;
    struct st_h2o_http2client_stream_t *VAR_11;
    int VAR_12;


    if ((VAR_12 = FUNC_3(&VAR_10, VAR_8, VAR_9)) != 0)
        return VAR_12;
    if ((VAR_8->stream_id & 1) == 0) {
        *VAR_9 = "invalid stream id in HEADERS frame";
        return VAR_0;
    }

    if (VAR_8->stream_id == VAR_10.priority.dependency) {
        *VAR_9 = "stream cannot depend on itself";
        return VAR_0;
    }

    if ((VAR_11 = FUNC_0(VAR_7, VAR_8->stream_id)) == ((void*)0)) {
        *VAR_9 = "invalid stream id in HEADERS frame";
        return VAR_1;
    }

    FUNC_4(&VAR_11->super._timeout);

    if (VAR_11->state.res == VAR_4) {

        if ((VAR_8->flags & VAR_3) == 0) {
            *VAR_9 = "trailing HEADERS frame MUST have END_STREAM flag set";
            return VAR_0;
        }
        if ((VAR_8->flags & VAR_2) == 0) {

            VAR_7->input.read_frame = VAR_5;
        }
        return 0;
    }

    if ((VAR_8->flags & VAR_2) == 0) {

        VAR_7->input.read_frame = VAR_5;
        FUNC_1(&VAR_7->input.headers_unparsed, &VAR_6);
        FUNC_2(&VAR_7->input.headers_unparsed, VAR_10.headers_len);
        FUNC_5(VAR_7->input.headers_unparsed->bytes, VAR_10.headers, VAR_10.headers_len);
        VAR_7->input.headers_unparsed->size = VAR_10.headers_len;
        return 0;
    }

    int VAR_13 = (VAR_8->flags & VAR_3) != 0;


    return FUNC_6(VAR_7, VAR_11, VAR_10.headers, VAR_10.headers_len, VAR_9, VAR_13);
}

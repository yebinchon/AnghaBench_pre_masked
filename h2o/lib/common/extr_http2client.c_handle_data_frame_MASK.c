
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_17__ {scalar_t__ (* on_body ) (TYPE_7__*,int *) ;} ;
struct TYPE_21__ {TYPE_3__ _cb; int ctx; } ;
struct TYPE_16__ {int window; TYPE_12__* body; } ;
struct TYPE_15__ {scalar_t__ res; } ;
struct st_h2o_http2client_stream_t {scalar_t__ stream_id; TYPE_7__ super; struct st_h2o_http2client_conn_t* conn; TYPE_2__ input; TYPE_1__ state; } ;
struct TYPE_18__ {int window; } ;
struct st_h2o_http2client_conn_t {scalar_t__ max_open_stream_id; TYPE_4__ input; } ;
struct TYPE_19__ {scalar_t__ stream_id; int flags; } ;
typedef TYPE_5__ h2o_http2_frame_t ;
struct TYPE_20__ {size_t length; scalar_t__ data; } ;
typedef TYPE_6__ h2o_http2_data_payload_t ;
struct TYPE_14__ {size_t size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct st_h2o_http2client_stream_t*,int ) ;
 int FUNC_1 (struct st_h2o_http2client_stream_t*) ;
 int FUNC_2 (struct st_h2o_http2client_stream_t*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (struct st_h2o_http2client_conn_t*,int ,int *,int ) ;
 size_t FUNC_5 (int ) ;
 struct st_h2o_http2client_stream_t* FUNC_6 (struct st_h2o_http2client_conn_t*,scalar_t__) ;
 int FUNC_7 (TYPE_12__**,void*,size_t) ;
 int FUNC_8 (TYPE_6__*,TYPE_5__*,char const**) ;
 int FUNC_9 (int *,size_t) ;
 int * VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_10 (struct st_h2o_http2client_conn_t*,scalar_t__,int) ;
 scalar_t__ FUNC_11 (TYPE_7__*,int *) ;
 scalar_t__ FUNC_12 (TYPE_7__*,int *) ;

__attribute__((used)) static int FUNC_13(struct st_h2o_http2client_conn_t *VAR_10, h2o_http2_frame_t *VAR_11, const char **VAR_12)
{
    h2o_http2_data_payload_t VAR_13;
    struct st_h2o_http2client_stream_t *VAR_14;
    int VAR_15;

    if ((VAR_15 = FUNC_8(&VAR_13, VAR_11, VAR_12)) != 0)
        return VAR_15;


    if ((VAR_14 = FUNC_6(VAR_10, VAR_11->stream_id)) == ((void*)0)) {
        if (VAR_11->stream_id <= VAR_10->max_open_stream_id) {
            FUNC_10(VAR_10, VAR_11->stream_id, VAR_3);
            return 0;
        } else {
            *VAR_12 = "invalid DATA frame";
            return VAR_2;
        }
    }

    if (VAR_14->state.res != VAR_6) {
        FUNC_10(VAR_10, VAR_11->stream_id, VAR_2);
        FUNC_0(VAR_14, VAR_8);
        FUNC_2(VAR_14);
        return 0;
    }

    size_t VAR_16 = FUNC_5(VAR_14->super.ctx);
    if (VAR_14->input.body->size + VAR_13.length > VAR_16) {
        VAR_14->super._cb.on_body(&VAR_14->super, VAR_7);
        FUNC_10(VAR_14->conn, VAR_14->stream_id, VAR_0);
        FUNC_2(VAR_14);
        return 0;
    }

    FUNC_7(&VAR_14->input.body, (void *)VAR_13.data, VAR_13.length);

    FUNC_9(&VAR_10->input.window, VAR_13.length);
    FUNC_9(&VAR_14->input.window, VAR_13.length);

    int VAR_17 = (VAR_11->flags & VAR_4) != 0;
    if (VAR_14->super._cb.on_body(&VAR_14->super, VAR_17 ? VAR_9 : ((void*)0)) != 0) {
        FUNC_10(VAR_10, VAR_11->stream_id, VAR_1);
        FUNC_2(VAR_14);
        return 0;
    }

    if (VAR_17) {
        FUNC_1(VAR_14);
    } else {

        FUNC_4(VAR_14->conn, 0, &VAR_14->conn->input.window, VAR_5);

        FUNC_3(&VAR_14->super);
    }

    return 0;
}

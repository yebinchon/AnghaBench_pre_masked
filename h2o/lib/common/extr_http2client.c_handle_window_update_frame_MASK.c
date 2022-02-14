
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct st_h2o_http2client_stream_t {int dummy; } ;
struct TYPE_7__ {int window; } ;
struct st_h2o_http2client_conn_t {scalar_t__ max_open_stream_id; TYPE_1__ output; } ;
struct TYPE_8__ {int window_size_increment; } ;
typedef TYPE_2__ h2o_http2_window_update_payload_t ;
struct TYPE_9__ {scalar_t__ stream_id; } ;
typedef TYPE_3__ h2o_http2_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct st_h2o_http2client_stream_t*,int ) ;
 int FUNC_1 (struct st_h2o_http2client_stream_t*) ;
 scalar_t__ FUNC_2 (struct st_h2o_http2client_conn_t*) ;
 struct st_h2o_http2client_stream_t* FUNC_3 (struct st_h2o_http2client_conn_t*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,char const**,int*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct st_h2o_http2client_conn_t*) ;
 int FUNC_7 (struct st_h2o_http2client_conn_t*,scalar_t__,int) ;
 scalar_t__ FUNC_8 (struct st_h2o_http2client_stream_t*,int ) ;

__attribute__((used)) static int FUNC_9(struct st_h2o_http2client_conn_t *VAR_4, h2o_http2_frame_t *VAR_5, const char **VAR_6)
{
    h2o_http2_window_update_payload_t VAR_7;
    int VAR_8, VAR_9;

    if ((VAR_8 = FUNC_4(&VAR_7, VAR_5, VAR_6, &VAR_9)) != 0) {
        if (VAR_9) {
            FUNC_7(VAR_4, VAR_5->stream_id, VAR_8);
            struct st_h2o_http2client_stream_t *VAR_10 = FUNC_3(VAR_4, VAR_5->stream_id);
            if (VAR_10 != ((void*)0)) {
                FUNC_0(VAR_10, VAR_3);
                FUNC_1(VAR_10);
            }
            return 0;
        } else {
            return VAR_8;
        }
    }

    if (VAR_5->stream_id == 0) {
        if (FUNC_5(&VAR_4->output.window, VAR_7.window_size_increment) != 0) {
            *VAR_6 = "flow control window overflow";
            return VAR_0;
        }
    } else if (VAR_5->stream_id <= VAR_4->max_open_stream_id) {
        struct st_h2o_http2client_stream_t *VAR_11 = FUNC_3(VAR_4, VAR_5->stream_id);
        if (VAR_11 != ((void*)0)) {
            if (FUNC_8(VAR_11, VAR_7.window_size_increment) != 0) {
                FUNC_7(VAR_4, VAR_5->stream_id, VAR_0);
                FUNC_0(VAR_11, VAR_2);
                FUNC_1(VAR_11);
                return 0;
            }
        }
    } else {
        *VAR_6 = "invalid stream id in WINDOW_UPDATE frame";
        return VAR_1;
    }

    if (FUNC_2(VAR_4) > 0)
        FUNC_6(VAR_4);

    return 0;
}

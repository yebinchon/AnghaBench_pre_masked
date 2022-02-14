
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int window_size_increment; } ;
typedef TYPE_2__ h2o_http2_window_update_payload_t ;
typedef int h2o_http2_stream_t ;
struct TYPE_16__ {int stream_id; } ;
typedef TYPE_3__ h2o_http2_frame_t ;
struct TYPE_14__ {int window; } ;
struct TYPE_17__ {TYPE_1__ _write; } ;
typedef TYPE_4__ h2o_http2_conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*,char const**,int*) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(h2o_http2_conn_t *VAR_2, h2o_http2_frame_t *VAR_3, const char **VAR_4)
{
    h2o_http2_window_update_payload_t VAR_5;
    int VAR_6, VAR_7;

    if ((VAR_6 = FUNC_1(&VAR_5, VAR_3, VAR_4, &VAR_7)) != 0) {
        if (VAR_7) {
            h2o_http2_stream_t *VAR_8 = FUNC_0(VAR_2, VAR_3->stream_id);
            if (VAR_8 != ((void*)0))
                FUNC_2(VAR_2, VAR_8);
            FUNC_6(VAR_2, VAR_3->stream_id, VAR_6);
            return 0;
        } else {
            return VAR_6;
        }
    }

    if (VAR_3->stream_id == 0) {
        if (FUNC_3(&VAR_2->_write.window, VAR_5.window_size_increment) != 0) {
            *VAR_4 = "flow control window overflow";
            return VAR_0;
        }
    } else if (!FUNC_4(VAR_2, VAR_3->stream_id)) {
        h2o_http2_stream_t *VAR_9 = FUNC_0(VAR_2, VAR_3->stream_id);
        if (VAR_9 != ((void*)0)) {
            if (FUNC_7(VAR_9, VAR_5.window_size_increment) != 0) {
                FUNC_2(VAR_2, VAR_9);
                FUNC_6(VAR_2, VAR_3->stream_id, VAR_0);
                return 0;
            }
        }
    } else {
        *VAR_4 = "invalid stream id in WINDOW_UPDATE frame";
        return VAR_1;
    }

    FUNC_5(VAR_2);

    return 0;
}

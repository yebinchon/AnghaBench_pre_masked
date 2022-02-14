
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {int window; } ;
struct TYPE_23__ {scalar_t__ state; TYPE_2__ input_window; int _req_streaming_in_progress; } ;
typedef TYPE_3__ h2o_http2_stream_t ;
struct TYPE_24__ {scalar_t__ length; scalar_t__ stream_id; int flags; } ;
typedef TYPE_4__ h2o_http2_frame_t ;
struct TYPE_25__ {scalar_t__ length; int data; } ;
typedef TYPE_5__ h2o_http2_data_payload_t ;
struct TYPE_21__ {scalar_t__ max_open; } ;
struct TYPE_26__ {TYPE_1__ pull_stream_ids; int _input_window; } ;
typedef TYPE_6__ h2o_http2_conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_0 (TYPE_6__*,scalar_t__) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,char const**) ;
 int FUNC_2 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_6__*,TYPE_3__*,int ,int) ;
 int FUNC_7 (TYPE_6__*,int ,int *,int) ;
 int FUNC_8 (TYPE_6__*,scalar_t__,int ) ;
 int FUNC_9 (TYPE_6__*,TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(h2o_http2_conn_t *VAR_5, h2o_http2_frame_t *VAR_6, const char **VAR_7)
{
    h2o_http2_data_payload_t VAR_8;
    h2o_http2_stream_t *VAR_9;
    int VAR_10;

    if ((VAR_10 = FUNC_1(&VAR_8, VAR_6, VAR_7)) != 0)
        return VAR_10;


    FUNC_3(&VAR_5->_input_window, VAR_6->length);
    if (FUNC_4(&VAR_5->_input_window) <= VAR_3 / 2)
        FUNC_7(VAR_5, 0, &VAR_5->_input_window,
                           VAR_3 - FUNC_4(&VAR_5->_input_window));


    if ((VAR_9 = FUNC_0(VAR_5, VAR_6->stream_id)) == ((void*)0)) {
        if (VAR_6->stream_id <= VAR_5->pull_stream_ids.max_open) {
            FUNC_8(VAR_5, VAR_6->stream_id, VAR_1);
            return 0;
        } else {
            *VAR_7 = "invalid DATA frame";
            return VAR_0;
        }
    }
    if (VAR_9->state != VAR_4 && !VAR_9->_req_streaming_in_progress) {
        FUNC_8(VAR_5, VAR_6->stream_id, VAR_1);
        FUNC_2(VAR_5, VAR_9);
        return 0;
    }



    FUNC_3(&VAR_9->input_window.window, VAR_6->length);
    if (VAR_6->length != VAR_8.length)
        FUNC_9(VAR_5, VAR_9, VAR_6->length - VAR_8.length);


    if (VAR_8.length != 0 || (VAR_6->flags & VAR_2) != 0)
        FUNC_6(VAR_5, VAR_9, FUNC_5(VAR_8.data, VAR_8.length),
                                  (VAR_6->flags & VAR_2) != 0);

    return 0;
}

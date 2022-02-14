
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_http2client_stream_t {int dummy; } ;
struct st_h2o_http2client_conn_t {scalar_t__ max_open_stream_id; } ;
typedef int h2o_http2_rst_stream_payload_t ;
struct TYPE_4__ {scalar_t__ stream_id; } ;
typedef TYPE_1__ h2o_http2_frame_t ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_http2client_stream_t*,int ) ;
 int FUNC_1 (struct st_h2o_http2client_stream_t*) ;
 struct st_h2o_http2client_stream_t* FUNC_2 (struct st_h2o_http2client_conn_t*,scalar_t__) ;
 int FUNC_3 (int *,TYPE_1__*,char const**) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct st_h2o_http2client_conn_t *VAR_2, h2o_http2_frame_t *VAR_3, const char **VAR_4)
{
    h2o_http2_rst_stream_payload_t VAR_5;
    struct st_h2o_http2client_stream_t *VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_3(&VAR_5, VAR_3, VAR_4)) != 0)
        return VAR_7;
    if (VAR_3->stream_id > VAR_2->max_open_stream_id) {
        *VAR_4 = "unexpected stream id in RST_STREAM frame";
        return VAR_0;
    }

    VAR_6 = FUNC_2(VAR_2, VAR_3->stream_id);
    if (VAR_6 != ((void*)0)) {

        FUNC_0(VAR_6, VAR_1);
        FUNC_1(VAR_6);
    }

    return 0;
}

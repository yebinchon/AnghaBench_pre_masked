
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_http2_stream_t ;
typedef int h2o_http2_rst_stream_payload_t ;
struct TYPE_4__ {int stream_id; } ;
typedef TYPE_1__ h2o_http2_frame_t ;
typedef int h2o_http2_conn_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*,char const**) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(h2o_http2_conn_t *VAR_1, h2o_http2_frame_t *VAR_2, const char **VAR_3)
{
    h2o_http2_rst_stream_payload_t VAR_4;
    h2o_http2_stream_t *VAR_5;
    int VAR_6;

    if ((VAR_6 = FUNC_1(&VAR_4, VAR_2, VAR_3)) != 0)
        return VAR_6;
    if (FUNC_3(VAR_1, VAR_2->stream_id)) {
        *VAR_3 = "unexpected stream id in RST_STREAM frame";
        return VAR_0;
    }

    VAR_5 = FUNC_0(VAR_1, VAR_2->stream_id);
    if (VAR_5 != ((void*)0)) {

        FUNC_2(VAR_1, VAR_5);
    }


    return 0;
}

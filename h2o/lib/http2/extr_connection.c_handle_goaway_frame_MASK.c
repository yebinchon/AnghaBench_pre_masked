
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_http2_goaway_payload_t ;
typedef int h2o_http2_frame_t ;
struct TYPE_4__ {int max_open; } ;
struct TYPE_5__ {TYPE_1__ push_stream_ids; } ;
typedef TYPE_2__ h2o_http2_conn_t ;


 int FUNC_0 (int *,int *,char const**) ;

__attribute__((used)) static int FUNC_1(h2o_http2_conn_t *VAR_0, h2o_http2_frame_t *VAR_1, const char **VAR_2)
{
    h2o_http2_goaway_payload_t VAR_3;
    int VAR_4;

    if ((VAR_4 = FUNC_0(&VAR_3, VAR_1, VAR_2)) != 0)
        return VAR_4;


    VAR_0->push_stream_ids.max_open = 0x7ffffffe;

    return 0;
}

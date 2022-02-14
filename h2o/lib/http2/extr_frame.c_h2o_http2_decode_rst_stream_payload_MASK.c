
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int error_code; } ;
typedef TYPE_1__ h2o_http2_rst_stream_payload_t ;
struct TYPE_6__ {scalar_t__ stream_id; int length; int payload; } ;
typedef TYPE_2__ h2o_http2_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(h2o_http2_rst_stream_payload_t *VAR_2, const h2o_http2_frame_t *VAR_3,
                                        const char **VAR_4)
{
    if (VAR_3->stream_id == 0) {
        *VAR_4 = "invalid stream id in RST_STREAM frame";
        return VAR_1;
    }
    if (VAR_3->length != sizeof(VAR_2->error_code)) {
        *VAR_4 = "invalid RST_STREAM frame";
        return VAR_0;
    }

    VAR_2->error_code = FUNC_0(VAR_3->payload);
    return 0;
}

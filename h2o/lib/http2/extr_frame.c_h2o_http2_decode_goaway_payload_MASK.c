
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; char* base; } ;
struct TYPE_7__ {int last_stream_id; int error_code; TYPE_1__ debug_data; } ;
typedef TYPE_2__ h2o_http2_goaway_payload_t ;
struct TYPE_8__ {scalar_t__ stream_id; int length; scalar_t__ payload; } ;
typedef TYPE_3__ h2o_http2_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

int FUNC_1(h2o_http2_goaway_payload_t *VAR_2, const h2o_http2_frame_t *VAR_3, const char **VAR_4)
{
    if (VAR_3->stream_id != 0) {
        *VAR_4 = "invalid stream id in GOAWAY frame";
        return VAR_1;
    }
    if (VAR_3->length < 8) {
        *VAR_4 = "invalid GOAWAY frame";
        return VAR_0;
    }

    VAR_2->last_stream_id = FUNC_0(VAR_3->payload) & 0x7fffffff;
    VAR_2->error_code = FUNC_0(VAR_3->payload + 4);
    if ((VAR_2->debug_data.len = VAR_3->length - 8) != 0)
        VAR_2->debug_data.base = (char *)VAR_3->payload + 8;
    else
        VAR_2->debug_data.base = ((void*)0);

    return 0;
}

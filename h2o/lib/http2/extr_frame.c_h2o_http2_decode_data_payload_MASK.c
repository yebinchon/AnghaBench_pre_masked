
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_5__ {scalar_t__ stream_id; int flags; int length; scalar_t__* payload; } ;
typedef TYPE_1__ h2o_http2_frame_t ;
struct TYPE_6__ {scalar_t__* data; scalar_t__ length; } ;
typedef TYPE_2__ h2o_http2_data_payload_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(h2o_http2_data_payload_t *VAR_2, const h2o_http2_frame_t *VAR_3, const char **VAR_4)
{
    if (VAR_3->stream_id == 0) {
        *VAR_4 = "invalid stream id in DATA frame";
        return VAR_0;
    }

    if ((VAR_3->flags & VAR_1) != 0) {
        uint8_t VAR_5;
        if (VAR_3->length < 1) {
            *VAR_4 = "invalid DATA frame";
            return VAR_0;
        }
        VAR_5 = VAR_3->payload[0];
        if (VAR_3->length < 1 + VAR_5) {
            *VAR_4 = "invalid DATA frame";
            return VAR_0;
        }
        VAR_2->data = VAR_3->payload + 1;
        VAR_2->length = VAR_3->length - (1 + VAR_5);
    } else {
        VAR_2->data = VAR_3->payload;
        VAR_2->length = VAR_3->length;
    }
    return 0;
}

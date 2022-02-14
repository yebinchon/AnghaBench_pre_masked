
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int window_size_increment; } ;
typedef TYPE_1__ h2o_http2_window_update_payload_t ;
struct TYPE_6__ {int length; scalar_t__ stream_id; int payload; } ;
typedef TYPE_2__ h2o_http2_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(h2o_http2_window_update_payload_t *VAR_2, const h2o_http2_frame_t *VAR_3,
                                           const char **VAR_4, int *VAR_5)
{
    if (VAR_3->length != 4) {
        *VAR_5 = 0;
        *VAR_4 = "invalid WINDOW_UPDATE frame";
        return VAR_0;
    }

    VAR_2->window_size_increment = FUNC_0(VAR_3->payload) & 0x7fffffff;
    if (VAR_2->window_size_increment == 0) {
        *VAR_5 = VAR_3->stream_id != 0;
        *VAR_4 = "invalid WINDOW_UPDATE frame";
        return VAR_1;
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int h2o_http2_priority_t ;
struct TYPE_3__ {scalar_t__ stream_id; int length; int payload; } ;
typedef TYPE_1__ h2o_http2_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

int FUNC_1(h2o_http2_priority_t *VAR_2, const h2o_http2_frame_t *VAR_3, const char **VAR_4)
{
    if (VAR_3->stream_id == 0) {
        *VAR_4 = "invalid stream id in PRIORITY frame";
        return VAR_1;
    }
    if (VAR_3->length != 5) {
        *VAR_4 = "invalid PRIORITY frame";
        return VAR_0;
    }

    FUNC_0(VAR_2, VAR_3->payload);
    return 0;
}

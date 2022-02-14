
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int headers_len; int const* headers; int priority; } ;
typedef TYPE_1__ h2o_http2_headers_payload_t ;
struct TYPE_6__ {int length; scalar_t__ stream_id; int flags; int * payload; } ;
typedef TYPE_2__ h2o_http2_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int const*) ;
 int VAR_3 ;

int FUNC_1(h2o_http2_headers_payload_t *VAR_4, const h2o_http2_frame_t *VAR_5, const char **VAR_6)
{
    const uint8_t *VAR_7 = VAR_5->payload, *VAR_8 = VAR_5->payload + VAR_5->length;

    if (VAR_5->stream_id == 0) {
        *VAR_6 = "invalid stream id in HEADERS frame";
        return VAR_0;
    }

    if ((VAR_5->flags & VAR_1) != 0) {
        uint32_t VAR_9;
        if (VAR_7 == VAR_8) {
            *VAR_6 = "invalid HEADERS frame";
            return VAR_0;
        }
        VAR_9 = *VAR_7++;
        if (VAR_8 - VAR_7 < VAR_9) {
            *VAR_6 = "invalid HEADERS frame";
            return VAR_0;
        }
        VAR_8 -= VAR_9;
    }

    if ((VAR_5->flags & VAR_2) != 0) {
        if (VAR_8 - VAR_7 < 5)
            return -1;
        VAR_7 = FUNC_0(&VAR_4->priority, VAR_7);
    } else {
        VAR_4->priority = VAR_3;
    }

    VAR_4->headers = VAR_7;
    VAR_4->headers_len = VAR_8 - VAR_7;

    return 0;
}

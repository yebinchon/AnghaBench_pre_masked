
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t ssize_t ;
struct TYPE_3__ {size_t length; int stream_id; int const* payload; int flags; int type; } ;
typedef TYPE_1__ h2o_http2_frame_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

ssize_t FUNC_2(h2o_http2_frame_t *VAR_3, const uint8_t *VAR_4, size_t VAR_5, size_t VAR_6,
                               const char **VAR_7)
{
    if (VAR_5 < VAR_2)
        return VAR_1;

    VAR_3->length = FUNC_0(VAR_4);
    VAR_3->type = VAR_4[3];
    VAR_3->flags = VAR_4[4];
    VAR_3->stream_id = FUNC_1(VAR_4 + 5) & 0x7fffffff;

    if (VAR_3->length > VAR_6)
        return VAR_0;

    if (VAR_5 < VAR_2 + VAR_3->length)
        return VAR_1;

    VAR_3->payload = VAR_4 + VAR_2;

    return VAR_2 + VAR_3->length;
}

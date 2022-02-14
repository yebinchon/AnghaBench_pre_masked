
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int stream_id; } ;
typedef TYPE_1__ h2o_http2_stream_t ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static const char *FUNC_1(h2o_http2_stream_t *VAR_3)
{
    if (FUNC_0(VAR_3->stream_id)) {
        switch (VAR_3->state) {
        case 132:
        case 133:
        case 131:
            return VAR_2;
        case 128:
        case 130:
        case 129:
            return VAR_0;
        case 134:
        case 135:
            return ((void*)0);
        }
    } else {
        switch (VAR_3->state) {
        case 132:
        case 133:
            return VAR_1;
        case 131:
        case 128:
        case 130:
        case 129:
            return VAR_0;
        case 134:
        case 135:
            return ((void*)0);
        }
    }
    return ((void*)0);
}

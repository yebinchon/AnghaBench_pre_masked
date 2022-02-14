
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; } ;
struct TYPE_7__ {int state; int _link; TYPE_1__ _data; } ;
typedef TYPE_2__ h2o_http2_stream_t ;
typedef int h2o_http2_conn_t ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(h2o_http2_conn_t *VAR_0, h2o_http2_stream_t *VAR_1)
{
    switch (VAR_1->state) {
    case 134:
    case 132:
    case 133:
    case 131:
        FUNC_0(VAR_0, VAR_1);
        break;
    case 128:
    case 130:
    case 129:
        FUNC_1(VAR_0, VAR_1, 135);

    case 135:

        VAR_1->_data.size = 0;
        if (FUNC_2(&VAR_1->_link)) {

        } else {
            FUNC_0(VAR_0, VAR_1);
        }
        break;
    }
}

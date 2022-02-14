
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int req; int blocked_by_server; int _req_streaming_in_progress; } ;
typedef TYPE_1__ h2o_http2_stream_t ;
typedef int h2o_http2_conn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(h2o_http2_conn_t *VAR_1, h2o_http2_stream_t *VAR_2)
{
    if (VAR_2->state == VAR_0) {
        if (!VAR_2->_req_streaming_in_progress) {
            FUNC_0(VAR_1, VAR_2);
        }
    } else {
        if (!VAR_2->blocked_by_server)
            FUNC_1(VAR_1, VAR_2, 1);
        FUNC_2(&VAR_2->req);
    }
}

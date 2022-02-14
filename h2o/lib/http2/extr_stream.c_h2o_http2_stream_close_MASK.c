
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int stream_id; int req; int * req_body; int * cache_digests; } ;
typedef TYPE_1__ h2o_http2_stream_t ;
struct TYPE_9__ {int * _http1_req_input; } ;
typedef TYPE_2__ h2o_http2_conn_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;

void FUNC_5(h2o_http2_conn_t *VAR_0, h2o_http2_stream_t *VAR_1)
{
    FUNC_4(VAR_0, VAR_1);
    if (VAR_1->cache_digests != ((void*)0))
        FUNC_2(VAR_1->cache_digests);
    if (VAR_1->req_body != ((void*)0))
        FUNC_1(&VAR_1->req_body);
    FUNC_3(&VAR_1->req);
    if (VAR_1->stream_id == 1 && VAR_0->_http1_req_input != ((void*)0))
        FUNC_1(&VAR_0->_http1_req_input);
    FUNC_0(VAR_1);
}

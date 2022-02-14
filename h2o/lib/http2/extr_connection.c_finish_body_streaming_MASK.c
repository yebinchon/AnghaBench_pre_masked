
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ conn; } ;
struct TYPE_8__ {scalar_t__ _req_streaming_in_progress; TYPE_1__ req; } ;
typedef TYPE_3__ h2o_http2_stream_t ;
struct TYPE_7__ {int _req_streaming_in_progress; } ;
struct TYPE_9__ {TYPE_2__ num_streams; } ;
typedef TYPE_4__ h2o_http2_conn_t ;



__attribute__((used)) static void FUNC_0(h2o_http2_stream_t *VAR_0)
{
    h2o_http2_conn_t *VAR_1 = (h2o_http2_conn_t *)VAR_0->req.conn;
    VAR_0->_req_streaming_in_progress = 0;
    VAR_1->num_streams._req_streaming_in_progress--;
}

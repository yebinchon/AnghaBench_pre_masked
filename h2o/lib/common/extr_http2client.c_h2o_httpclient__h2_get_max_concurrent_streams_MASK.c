
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {TYPE_3__* ctx; } ;
struct TYPE_5__ {scalar_t__ max_concurrent_streams; } ;
struct st_h2o_http2client_conn_t {TYPE_4__ super; TYPE_1__ peer_settings; } ;
typedef int h2o_httpclient__h2_conn_t ;
struct TYPE_6__ {scalar_t__ max_concurrent_streams; } ;
struct TYPE_7__ {TYPE_2__ http2; } ;



uint32_t FUNC_0(h2o_httpclient__h2_conn_t *VAR_0)
{
    struct st_h2o_http2client_conn_t *VAR_1 = (void *)VAR_0;
    return VAR_1->peer_settings.max_concurrent_streams < VAR_1->super.ctx->http2.max_concurrent_streams
               ? VAR_1->peer_settings.max_concurrent_streams
               : VAR_1->super.ctx->http2.max_concurrent_streams;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ stream_id; } ;
typedef TYPE_2__ h2o_http2_stream_t ;
struct TYPE_8__ {scalar_t__ max_open; } ;
struct TYPE_10__ {TYPE_1__ pull_stream_ids; } ;
typedef TYPE_3__ h2o_http2_conn_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(h2o_http2_conn_t *VAR_0, h2o_http2_stream_t *VAR_1)
{
    if (!FUNC_0(VAR_1->stream_id) && VAR_1->stream_id > VAR_0->pull_stream_ids.max_open) {

        FUNC_1(VAR_0, VAR_1);
        return 1;
    }
    return 0;
}

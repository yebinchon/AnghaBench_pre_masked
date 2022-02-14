
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int connpool; } ;
struct st_h2o_http2client_stream_t {TYPE_4__* conn; TYPE_3__ super; int stream_id; } ;
typedef scalar_t__ khiter_t ;
struct TYPE_6__ {scalar_t__ num_streams; TYPE_1__* ctx; } ;
struct TYPE_8__ {int keepalive_timeout; TYPE_2__ super; int streams; } ;
struct TYPE_5__ {int keepalive_timeout; int loop; } ;


 int FUNC_0 (int ,TYPE_4__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct st_h2o_http2client_stream_t*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct st_h2o_http2client_stream_t*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct st_h2o_http2client_stream_t *VAR_0)
{
    khiter_t VAR_1 = FUNC_5(VAR_0, VAR_0->conn->streams, VAR_0->stream_id);
    FUNC_1(VAR_1 != FUNC_4(VAR_0->conn->streams));
    FUNC_3(VAR_0, VAR_0->conn->streams, VAR_1);

    --VAR_0->conn->super.num_streams;

    if (VAR_0->conn->super.num_streams == 0)
        FUNC_2(VAR_0->conn->super.ctx->loop, VAR_0->conn->super.ctx->keepalive_timeout, &VAR_0->conn->keepalive_timeout);

    FUNC_0(VAR_0->super.connpool, VAR_0->conn, 0);
}

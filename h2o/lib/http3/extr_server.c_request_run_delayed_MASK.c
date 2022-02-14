
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ctx; } ;
struct st_h2o_http3_server_conn_t {int timeout; TYPE_2__ super; } ;
struct TYPE_3__ {int loop; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct st_h2o_http3_server_conn_t *VAR_0)
{
    if (!FUNC_0(&VAR_0->timeout))
        FUNC_1(VAR_0->super.ctx->loop, 0, &VAR_0->timeout);
}

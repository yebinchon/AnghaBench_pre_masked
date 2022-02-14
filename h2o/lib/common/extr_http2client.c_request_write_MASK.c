
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int defer_timeout; } ;
struct TYPE_5__ {TYPE_1__* ctx; int sock; } ;
struct st_h2o_http2client_conn_t {scalar_t__ state; TYPE_3__ output; TYPE_2__ super; } ;
struct TYPE_4__ {int loop; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct st_h2o_http2client_conn_t *VAR_1)
{
    if (VAR_1->state == VAR_0)
        return;
    if (!FUNC_0(VAR_1->super.sock) && !FUNC_1(&VAR_1->output.defer_timeout))
        FUNC_2(VAR_1->super.ctx->loop, 0, &VAR_1->output.defer_timeout);
}

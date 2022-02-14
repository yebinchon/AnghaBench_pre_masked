
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_deferred_request_action_t {int timeout; TYPE_3__* req; } ;
typedef int h2o_timer_cb ;
struct TYPE_7__ {TYPE_2__* conn; int pool; } ;
typedef TYPE_3__ h2o_req_t ;
struct TYPE_6__ {TYPE_1__* ctx; } ;
struct TYPE_5__ {int loop; } ;


 struct st_deferred_request_action_t* FUNC_0 (int *,size_t,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static struct st_deferred_request_action_t *FUNC_3(h2o_req_t *VAR_1, size_t VAR_2, h2o_timer_cb VAR_3)
{
    struct st_deferred_request_action_t *VAR_4 = FUNC_0(&VAR_1->pool, VAR_2, VAR_0);
    VAR_4->req = VAR_1;
    FUNC_1(&VAR_4->timeout, VAR_3);
    FUNC_2(VAR_1->conn->ctx->loop, 0, &VAR_4->timeout);
    return VAR_4;
}

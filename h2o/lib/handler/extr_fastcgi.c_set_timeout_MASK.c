
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_10__ {int cb; } ;
struct st_fcgi_generator_t {TYPE_4__ timeout; TYPE_3__* req; } ;
typedef int h2o_timer_cb ;
struct TYPE_9__ {TYPE_2__* conn; } ;
struct TYPE_8__ {TYPE_1__* ctx; } ;
struct TYPE_7__ {int loop; } ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(struct st_fcgi_generator_t *VAR_0, uint64_t VAR_1, h2o_timer_cb VAR_2)
{
    if (FUNC_0(&VAR_0->timeout))
        FUNC_2(&VAR_0->timeout);
    VAR_0->timeout.cb = VAR_2;
    FUNC_1(VAR_0->req->conn->ctx->loop, VAR_1, &VAR_0->timeout);
}

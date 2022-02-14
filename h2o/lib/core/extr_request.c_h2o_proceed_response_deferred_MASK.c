
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int _timeout_entry; TYPE_2__* conn; } ;
typedef TYPE_3__ h2o_req_t ;
struct TYPE_6__ {TYPE_1__* ctx; } ;
struct TYPE_5__ {int loop; } ;


 int FUNC_0 (int ,int ,int *) ;

void FUNC_1(h2o_req_t *VAR_0)
{
    FUNC_0(VAR_0->conn->ctx->loop, 0, &VAR_0->_timeout_entry);
}

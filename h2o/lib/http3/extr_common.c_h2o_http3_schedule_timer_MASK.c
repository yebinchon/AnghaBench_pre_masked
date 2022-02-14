
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_9__ {scalar_t__ expire_at; } ;
struct TYPE_8__ {TYPE_3__ _timeout; TYPE_1__* ctx; int quic; } ;
typedef TYPE_2__ h2o_http3_conn_t ;
struct TYPE_7__ {int loop; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,scalar_t__,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(h2o_http3_conn_t *VAR_0)
{
    int64_t VAR_1 = FUNC_4(VAR_0->quic);
    if (FUNC_1(&VAR_0->_timeout)) {

        if (VAR_1 == VAR_0->_timeout.expire_at)
            return;

        FUNC_3(&VAR_0->_timeout);
    }
    uint64_t VAR_2 = FUNC_0(VAR_0->ctx->loop), VAR_3 = VAR_2 < VAR_1 ? VAR_1 - VAR_2 : 0;
    FUNC_2(VAR_0->ctx->loop, VAR_3, &VAR_0->_timeout);
}

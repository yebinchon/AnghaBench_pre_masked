
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


struct TYPE_20__ {TYPE_4__* ctx; } ;
struct st_h2o_redis_resumption_accept_data_t {TYPE_1__ super; } ;
struct TYPE_24__ {struct st_h2o_redis_resumption_accept_data_t* data; } ;
typedef TYPE_5__ h2o_socket_t ;
struct TYPE_25__ {scalar_t__ state; } ;
typedef TYPE_6__ h2o_redis_client_t ;
struct TYPE_26__ {int base; } ;
typedef TYPE_7__ h2o_iovec_t ;
struct TYPE_23__ {int ctx; } ;
struct TYPE_21__ {int base; } ;
struct TYPE_22__ {int prefix; int port; TYPE_2__ host; } ;
struct TYPE_19__ {int expiration; TYPE_3__ redis; } ;


 scalar_t__ VAR_0 ;
 TYPE_18__ VAR_1 ;
 TYPE_7__ FUNC_0 (TYPE_7__,int ) ;
 TYPE_7__ FUNC_1 (TYPE_7__) ;
 int FUNC_2 (int ) ;
 TYPE_6__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_6__*,int *,int *,char*,int ,int,int ) ;
 int FUNC_5 (TYPE_6__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(h2o_socket_t *VAR_2, h2o_iovec_t VAR_3, h2o_iovec_t VAR_4)
{
    struct st_h2o_redis_resumption_accept_data_t *VAR_5 = VAR_2->data;
    h2o_redis_client_t *VAR_6 = FUNC_3(VAR_5->super.ctx->ctx);

    if (VAR_6->state == VAR_0) {

        FUNC_5(VAR_6, VAR_1.redis.host.base, VAR_1.redis.port);
    }

    h2o_iovec_t VAR_7 = FUNC_0(VAR_3, VAR_1.redis.prefix);
    h2o_iovec_t VAR_8 = FUNC_1(VAR_4);
    FUNC_4(VAR_6, ((void*)0), ((void*)0), "SETEX %s %d %s", VAR_7.base, VAR_1.expiration * 10, VAR_8.base);
    FUNC_2(VAR_7.base);
    FUNC_2(VAR_8.base);
}

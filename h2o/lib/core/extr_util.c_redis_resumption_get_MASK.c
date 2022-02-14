
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_18__ ;
typedef struct TYPE_20__ TYPE_15__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_19__ {int cb; } ;
struct TYPE_25__ {TYPE_10__ timeout; TYPE_3__* ctx; } ;
struct st_h2o_redis_resumption_accept_data_t {TYPE_4__ super; int get_command; } ;
struct TYPE_26__ {struct st_h2o_redis_resumption_accept_data_t* data; } ;
typedef TYPE_5__ h2o_socket_t ;
struct TYPE_27__ {scalar_t__ state; } ;
typedef TYPE_6__ h2o_redis_client_t ;
struct TYPE_28__ {int base; } ;
typedef TYPE_7__ h2o_iovec_t ;
struct TYPE_24__ {TYPE_15__* ctx; } ;
struct TYPE_22__ {int base; } ;
struct TYPE_23__ {int port; TYPE_1__ host; int prefix; } ;
struct TYPE_21__ {TYPE_2__ redis; } ;
struct TYPE_20__ {int loop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_18__ VAR_2 ;
 TYPE_7__ FUNC_0 (TYPE_7__,int ) ;
 int FUNC_1 (int ) ;
 TYPE_6__* FUNC_2 (TYPE_15__*) ;
 int FUNC_3 (TYPE_6__*,int ,struct st_h2o_redis_resumption_accept_data_t*,char*,int ) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_10__*) ;
 int FUNC_6 (TYPE_10__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_7(h2o_socket_t *VAR_5, h2o_iovec_t VAR_6)
{
    struct st_h2o_redis_resumption_accept_data_t *VAR_7 = VAR_5->data;
    h2o_redis_client_t *VAR_8 = FUNC_2(VAR_7->super.ctx->ctx);

    if (VAR_8->state == VAR_1) {
        h2o_iovec_t VAR_9 = FUNC_0(VAR_6, VAR_2.redis.prefix);
        VAR_7->get_command = FUNC_3(VAR_8, VAR_4, VAR_7, "GET %s", VAR_9.base);
        FUNC_1(VAR_9.base);
    } else {
        if (VAR_8->state == VAR_0) {

            FUNC_4(VAR_8, VAR_2.redis.host.base, VAR_2.redis.port);
        }

        FUNC_6(&VAR_7->super.timeout);
        VAR_7->super.timeout.cb = VAR_3;
        FUNC_5(VAR_7->super.ctx->ctx->loop, 0, &VAR_7->super.timeout);
    }
}

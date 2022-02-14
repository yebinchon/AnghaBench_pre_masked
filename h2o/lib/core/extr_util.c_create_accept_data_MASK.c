
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct st_h2o_accept_data_t {struct timeval connected_at; int timeout; int * sock; TYPE_3__* ctx; } ;
typedef int h2o_timer_cb ;
typedef int h2o_socket_t ;
struct TYPE_7__ {TYPE_2__* ctx; } ;
typedef TYPE_3__ h2o_accept_ctx_t ;
struct TYPE_6__ {TYPE_1__* globalconf; int loop; } ;
struct TYPE_5__ {int handshake_timeout; } ;


 struct st_h2o_accept_data_t* FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static struct st_h2o_accept_data_t *FUNC_3(h2o_accept_ctx_t *VAR_0, h2o_socket_t *VAR_1, struct timeval VAR_2,
                                                       h2o_timer_cb VAR_3, size_t VAR_4)
{
    struct st_h2o_accept_data_t *VAR_5 = FUNC_0(VAR_4);
    VAR_5->ctx = VAR_0;
    VAR_5->sock = VAR_1;
    FUNC_1(&VAR_5->timeout, VAR_3);
    FUNC_2(VAR_0->ctx->loop, VAR_0->ctx->globalconf->handshake_timeout, &VAR_5->timeout);
    VAR_5->connected_at = VAR_2;
    return VAR_5;
}

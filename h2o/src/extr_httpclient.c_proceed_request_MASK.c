
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cb; } ;
struct st_timeout_ctx {TYPE_4__ _timeout; TYPE_2__* client; } ;
typedef int h2o_send_state_t ;
struct TYPE_6__ {TYPE_1__* ctx; } ;
typedef TYPE_2__ h2o_httpclient_t ;
struct TYPE_5__ {int loop; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct st_timeout_ctx* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,TYPE_4__*) ;
 int FUNC_2 (struct st_timeout_ctx*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(h2o_httpclient_t *VAR_3, size_t VAR_4, h2o_send_state_t VAR_5)
{
    if (VAR_0 > 0) {
        struct st_timeout_ctx *VAR_6;
        VAR_6 = FUNC_0(sizeof(*VAR_6));
        FUNC_2(VAR_6, 0, sizeof(*VAR_6));
        VAR_6->client = VAR_3;
        VAR_6->_timeout.cb = VAR_2;
        FUNC_1(VAR_3->ctx->loop, VAR_1, &VAR_6->_timeout);
    }
}

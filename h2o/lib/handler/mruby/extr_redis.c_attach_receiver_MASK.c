
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_h2o_mruby_redis_command_context_t {TYPE_3__* client; int receiver; } ;
typedef int mrb_value ;
struct TYPE_6__ {TYPE_2__* ctx; } ;
struct TYPE_5__ {TYPE_1__* shared; } ;
struct TYPE_4__ {int mrb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct st_h2o_mruby_redis_command_context_t *VAR_0, mrb_value VAR_1)
{
    FUNC_0(FUNC_2(VAR_0->receiver));
    VAR_0->receiver = VAR_1;
    FUNC_1(VAR_0->client->ctx->shared->mrb, VAR_1);
}

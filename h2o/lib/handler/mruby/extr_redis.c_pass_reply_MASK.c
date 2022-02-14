
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int command; } ;
struct st_h2o_mruby_redis_command_context_t {TYPE_3__* client; TYPE_2__ refs; int receiver; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_8__ {TYPE_1__* shared; } ;
struct TYPE_7__ {TYPE_4__* ctx; } ;
struct TYPE_5__ {int * mrb; } ;


 int FUNC_0 (struct st_h2o_mruby_redis_command_context_t*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int *) ;
 int FUNC_3 (int *,int ,char*,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct st_h2o_mruby_redis_command_context_t *VAR_0, mrb_value VAR_1)
{
    mrb_state *VAR_2 = VAR_0->client->ctx->shared->mrb;
    if (FUNC_4(VAR_0->receiver)) {
        FUNC_3(VAR_2, VAR_0->refs.command, "_on_reply", 1, VAR_1);
        FUNC_1(VAR_2);
    } else {
        FUNC_2(VAR_0->client->ctx, FUNC_0(VAR_0, 1), VAR_1, ((void*)0));
    }
}

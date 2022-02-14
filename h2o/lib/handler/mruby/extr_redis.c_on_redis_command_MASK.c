
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int command; } ;
struct st_h2o_mruby_redis_command_context_t {TYPE_4__ refs; TYPE_3__* client; } ;
struct RClass {int dummy; } ;
typedef int redisReply ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_7__ {TYPE_2__* ctx; } ;
struct TYPE_6__ {TYPE_1__* shared; } ;
struct TYPE_5__ {int * mrb; } ;


 int FUNC_0 (int *,int *,int ) ;
 struct RClass* FUNC_1 (int *,char*) ;
 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_2 (int *,struct RClass*,char const*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct st_h2o_mruby_redis_command_context_t*,int ) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(redisReply *VAR_4, void *VAR_5, const char *VAR_6)
{
    struct st_h2o_mruby_redis_command_context_t *VAR_7 = VAR_5;
    mrb_state *VAR_8 = VAR_7->client->ctx->shared->mrb;
    mrb_value VAR_9 = FUNC_6();

    int VAR_10 = FUNC_4(VAR_8);

    if (VAR_6 == ((void*)0)) {
        if (VAR_4 == ((void*)0))
            return;
        VAR_9 = FUNC_0(VAR_8, VAR_4, VAR_7->refs.command);
    } else {
        struct RClass *VAR_11 = ((void*)0);

        if (VAR_6 == VAR_2) {
            VAR_11 = FUNC_1(VAR_8, "ConnectionError");
        } else if (VAR_6 == VAR_3) {
            VAR_11 = FUNC_1(VAR_8, "ProtocolError");
        } else if (VAR_6 == VAR_1) {
            VAR_11 = FUNC_1(VAR_8, "ConnectTimeoutError");
        } else if (VAR_6 == VAR_0) {
            VAR_11 = FUNC_1(VAR_8, "CommandTimeoutError");
        } else {
            VAR_11 = FUNC_1(VAR_8, "UnknownError");
        }

        VAR_9 = FUNC_2(VAR_8, VAR_11, VAR_6, FUNC_8(VAR_6));
    }

    FUNC_7(VAR_7, VAR_9);

    FUNC_3(VAR_8, VAR_10);
    FUNC_5(VAR_8, VAR_7->refs.command);
}

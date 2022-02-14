
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int mrb_state ;
struct TYPE_3__ {int * mrb; } ;
typedef TYPE_1__ h2o_mruby_shared_context_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int ,char*,int) ;
 struct RClass* FUNC_5 (int *,struct RClass*,char*) ;
 int FUNC_6 (int *,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_7 (int *,char*) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_8(h2o_mruby_shared_context_t *VAR_7)
{
    mrb_state *VAR_8 = VAR_7->mrb;

    FUNC_4(VAR_8, VAR_0, "(h2o)lib/handler/mruby/embedded/redis.rb", 1);
    FUNC_2(VAR_8);

    struct RClass *VAR_9 = FUNC_7(VAR_8, "H2O");

    FUNC_3(VAR_8, "_h2o__redis_join_reply", VAR_5);

    struct RClass *VAR_10 = FUNC_5(VAR_8, VAR_9, "Redis");
    FUNC_6(VAR_8, VAR_10, "__setup", VAR_6, FUNC_1());
    FUNC_6(VAR_8, VAR_10, "__connect", VAR_2, FUNC_1());
    FUNC_6(VAR_8, VAR_10, "disconnected?", VAR_4, FUNC_1());
    FUNC_6(VAR_8, VAR_10, "disconnect", VAR_3, FUNC_1());
    FUNC_6(VAR_8, VAR_10, "__call", VAR_1, FUNC_0(1, 0));
}

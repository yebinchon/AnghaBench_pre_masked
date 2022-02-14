
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct RClass {int dummy; } ;
typedef int mrb_state ;
struct TYPE_3__ {int constants; int * mrb; } ;
typedef TYPE_1__ h2o_mruby_shared_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct RClass*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int ,char*,int) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 struct RClass* FUNC_6 (int *,struct RClass*,char*) ;
 int FUNC_7 (int *,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_8 (int *,char*) ;
 int FUNC_9 (struct RClass*) ;
 int VAR_5 ;

void FUNC_10(h2o_mruby_shared_context_t *VAR_6)
{
    mrb_state *VAR_7 = VAR_6->mrb;

    FUNC_4(VAR_7, VAR_1, "(h2o)lib/handler/mruby/embedded/channel.rb", 1);
    FUNC_2(VAR_7);

    struct RClass *VAR_8, *VAR_9;
    VAR_8 = FUNC_8(VAR_7, "H2O");

    VAR_9 = FUNC_6(VAR_7, VAR_8, "Channel");
    FUNC_1(VAR_9, VAR_2);
    FUNC_5(VAR_7, VAR_6->constants, VAR_0, FUNC_9(VAR_9));
    FUNC_7(VAR_7, VAR_9, "initialize", VAR_3, FUNC_0());
    FUNC_7(VAR_7, VAR_9, "_notify", VAR_4, FUNC_0());
    FUNC_3(VAR_7, "_h2o__channel_wait", VAR_5);
}

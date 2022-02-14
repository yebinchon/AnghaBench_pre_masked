
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
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 struct RClass* FUNC_6 (int *,struct RClass*,char*) ;
 int FUNC_7 (int *,struct RClass*,char*,int ,int ) ;
 struct RClass* FUNC_8 (int *,char*) ;
 int FUNC_9 (struct RClass*) ;

void FUNC_10(h2o_mruby_shared_context_t *VAR_8)
{
    mrb_state *VAR_9 = VAR_8->mrb;

    FUNC_4(VAR_9, VAR_2);
    FUNC_2(VAR_9);

    struct RClass *VAR_10 = FUNC_8(VAR_9, "H2O");

    struct RClass *VAR_11 = FUNC_6(VAR_8->mrb, VAR_10, "App");
    FUNC_7(VAR_9, VAR_11, "request", VAR_5, FUNC_0(1, 0));

    struct RClass *VAR_12 = FUNC_6(VAR_8->mrb, VAR_10, "AppRequest");
    FUNC_5(VAR_8->mrb, VAR_8->constants, VAR_1, FUNC_9(VAR_12));
    FUNC_3(VAR_9, "_h2o_middleware_wait_response", VAR_7);
    FUNC_7(VAR_9, VAR_12, "_can_build_response?", VAR_4, FUNC_1());
    FUNC_7(VAR_9, VAR_12, "_build_response", VAR_3, FUNC_1());

    struct RClass *VAR_13 = FUNC_6(VAR_8->mrb, VAR_10, "AppInputStream");
    FUNC_5(VAR_8->mrb, VAR_8->constants, VAR_0, FUNC_9(VAR_13));
    FUNC_3(VAR_9, "_h2o_middleware_wait_chunk", VAR_6);

    FUNC_2(VAR_9);
}

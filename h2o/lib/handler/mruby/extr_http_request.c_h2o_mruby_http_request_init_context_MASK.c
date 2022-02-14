
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct RClass {int dummy; } ;
struct TYPE_11__ {int kernel_module; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_12__ {int constants; TYPE_1__* mrb; } ;
typedef TYPE_2__ h2o_mruby_shared_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ) ;
 struct RClass* FUNC_5 (TYPE_1__*,struct RClass*,char*) ;
 int FUNC_6 (TYPE_1__*,int ,char*,int ,int ) ;
 struct RClass* FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (struct RClass*) ;

void FUNC_9(h2o_mruby_shared_context_t *VAR_7)
{
    mrb_state *VAR_8 = VAR_7->mrb;

    FUNC_3(VAR_8, VAR_0, "(h2o)lib/handler/mruby/embedded/http_request.rb", 1);
    FUNC_1(VAR_8);

    struct RClass *VAR_9, *VAR_10;
    VAR_9 = FUNC_7(VAR_8, "H2O");

    FUNC_6(VAR_8, VAR_8->kernel_module, "http_request", VAR_6, FUNC_0(1, 2));

    VAR_10 = FUNC_5(VAR_8, VAR_9, "HttpRequest");
    FUNC_4(VAR_8, VAR_7->constants, VAR_3, FUNC_8(VAR_10));

    VAR_10 = FUNC_5(VAR_8, VAR_9, "HttpInputStream");
    FUNC_4(VAR_8, VAR_7->constants, VAR_2, FUNC_8(VAR_10));

    VAR_10 = FUNC_5(VAR_8, VAR_10, "Empty");
    FUNC_4(VAR_8, VAR_7->constants, VAR_1, FUNC_8(VAR_10));

    FUNC_2(VAR_8, "_h2o__http_join_response", VAR_5);
    FUNC_2(VAR_8, "_h2o__http_fetch_chunk", VAR_4);
}

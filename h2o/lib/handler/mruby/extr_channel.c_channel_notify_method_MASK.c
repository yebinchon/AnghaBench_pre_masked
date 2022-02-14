
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_mruby_channel_context_t {int ctx; int receivers; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 struct st_h2o_mruby_channel_context_t* FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static mrb_value FUNC_8(mrb_state *VAR_1, mrb_value VAR_2)
{
    struct st_h2o_mruby_channel_context_t *VAR_3;
    VAR_3 = FUNC_3(VAR_1, VAR_2, &VAR_0);

    if (FUNC_0(VAR_3->receivers) != 0) {
        int VAR_4 = FUNC_5(VAR_1);
        mrb_value VAR_5 = FUNC_2(VAR_1, VAR_3->receivers);
        FUNC_6(VAR_1, VAR_5);
        FUNC_1(VAR_3->ctx, VAR_5, FUNC_7(), ((void*)0));
        FUNC_4(VAR_1, VAR_4);
    }

    return FUNC_7();
}

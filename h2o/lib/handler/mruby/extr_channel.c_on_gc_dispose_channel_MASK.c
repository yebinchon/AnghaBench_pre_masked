
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_h2o_mruby_channel_context_t {int receivers; } ;
typedef int mrb_state ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct st_h2o_mruby_channel_context_t*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(mrb_state *VAR_0, void *VAR_1)
{
    struct st_h2o_mruby_channel_context_t *VAR_2 = VAR_1;
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_2(VAR_0, VAR_2->receivers);
    FUNC_1(VAR_2);
}

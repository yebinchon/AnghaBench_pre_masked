
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_mruby_subreq_t {scalar_t__ state; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct st_mruby_subreq_t* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,char*) ;

__attribute__((used)) static mrb_value FUNC_3(mrb_state *VAR_3, mrb_value VAR_4)
{
    struct st_mruby_subreq_t *VAR_5 = FUNC_1(VAR_3, VAR_4, &VAR_2);
    if (VAR_5 == ((void*)0))
        FUNC_2(VAR_3, VAR_0, "AppRequest#_can_build_response? wrong self");
    return FUNC_0(VAR_5->state != VAR_1);
}

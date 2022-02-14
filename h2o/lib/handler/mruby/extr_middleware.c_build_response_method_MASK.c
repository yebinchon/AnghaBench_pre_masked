
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int input_stream; } ;
struct st_mruby_subreq_t {TYPE_1__ refs; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct st_mruby_subreq_t*) ;
 int FUNC_1 (int ,int) ;
 struct st_mruby_subreq_t* FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,char*) ;

__attribute__((used)) static mrb_value FUNC_4(mrb_state *VAR_2, mrb_value VAR_3)
{
    struct st_mruby_subreq_t *VAR_4 = FUNC_2(VAR_2, VAR_3, &VAR_1);
    if (VAR_4 == ((void*)0))
        FUNC_3(VAR_2, VAR_0, "AppRequest#build_response wrong self");

    mrb_value VAR_5 = FUNC_0(VAR_4);
    VAR_4->refs.input_stream = FUNC_1(VAR_5, 2);
    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_mruby_subreq_t {int receiver; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_5__ {TYPE_1__* shared; } ;
typedef TYPE_2__ h2o_mruby_context_t ;
struct TYPE_4__ {int * mrb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct st_mruby_subreq_t* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static mrb_value FUNC_5(h2o_mruby_context_t *VAR_2, mrb_value VAR_3, mrb_value *VAR_4, mrb_value VAR_5,
                                                   int *VAR_6)
{
    mrb_state *VAR_7 = VAR_2->shared->mrb;
    struct st_mruby_subreq_t *VAR_8;

    if ((VAR_8 = FUNC_1(VAR_7, FUNC_0(VAR_5, 0), &VAR_1)) == ((void*)0)) {
        *VAR_6 = 1;
        return FUNC_2(VAR_7, VAR_0, "AppRequest#join wrong self");
    }

    VAR_8->receiver = *VAR_4;
    FUNC_3(VAR_7, *VAR_4);
    return FUNC_4();
}

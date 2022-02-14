
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_mruby_subreq_t {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int * h2o_mruby_send_response_callback_t ;
struct TYPE_5__ {TYPE_1__* shared; } ;
typedef TYPE_2__ h2o_mruby_context_t ;
struct TYPE_4__ {int * mrb; } ;


 int VAR_0 ;
 struct st_mruby_subreq_t* FUNC_0 (int *,int ,int *) ;
 int * VAR_1 ;

h2o_mruby_send_response_callback_t FUNC_1(h2o_mruby_context_t *VAR_2, mrb_value VAR_3)
{
    mrb_state *VAR_4 = VAR_2->shared->mrb;
    struct st_mruby_subreq_t *VAR_5;
    if ((VAR_5 = FUNC_0(VAR_4, VAR_3, &VAR_0)) == ((void*)0))
        return ((void*)0);
    return VAR_1;
}

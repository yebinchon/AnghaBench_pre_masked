
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_mruby_subreq_t {int dummy; } ;
typedef int mrb_value ;
struct TYPE_10__ {int * exc; } ;
typedef TYPE_3__ mrb_state ;
typedef int h2o_mruby_sender_t ;
struct TYPE_11__ {TYPE_2__* ctx; } ;
typedef TYPE_4__ h2o_mruby_generator_t ;
struct TYPE_9__ {TYPE_1__* shared; } ;
struct TYPE_8__ {TYPE_3__* mrb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_4__*,struct st_mruby_subreq_t*,int ) ;
 struct st_mruby_subreq_t* FUNC_2 (TYPE_3__*,int ,int *) ;

h2o_mruby_sender_t *FUNC_3(h2o_mruby_generator_t *VAR_1, mrb_value VAR_2)
{
    mrb_state *VAR_3 = VAR_1->ctx->shared->mrb;
    struct st_mruby_subreq_t *VAR_4;

    FUNC_0(VAR_3->exc == ((void*)0));

    if ((VAR_4 = FUNC_2(VAR_3, VAR_2, &VAR_0)) == ((void*)0))
        return ((void*)0);

    return FUNC_1(VAR_1, VAR_4, VAR_2);
}

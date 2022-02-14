
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int inflight; } ;
struct TYPE_11__ {int final_sent; } ;
struct st_h2o_mruby_callback_sender_t {int receiving; TYPE_7__ sending; TYPE_1__ super; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_13__ {scalar_t__ sender; } ;
typedef TYPE_3__ h2o_mruby_generator_t ;
struct TYPE_14__ {TYPE_2__* shared; } ;
typedef TYPE_4__ h2o_mruby_context_t ;
struct TYPE_12__ {int * mrb; } ;


 int FUNC_0 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_7__*,int *,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static mrb_value FUNC_7(h2o_mruby_context_t *VAR_0, mrb_value VAR_1, mrb_value *VAR_2, mrb_value VAR_3,
                                         int *VAR_4)
{
    mrb_state *VAR_5 = VAR_0->shared->mrb;
    h2o_mruby_generator_t *VAR_6 = FUNC_1(VAR_5, FUNC_4(VAR_3, 0));

    {
        mrb_value VAR_7 = FUNC_0(VAR_5, VAR_6);
        if (!FUNC_5(VAR_7)) {
            *VAR_4 = 1;
            return VAR_7;
        }
    }

    struct st_h2o_mruby_callback_sender_t *VAR_8 = (void *)VAR_6->sender;
    if (!VAR_8->super.final_sent && !VAR_8->sending.inflight)
        FUNC_3(VAR_6, &VAR_8->sending, &VAR_8->receiving, 1);
    FUNC_2(VAR_6);

    return FUNC_6();
}

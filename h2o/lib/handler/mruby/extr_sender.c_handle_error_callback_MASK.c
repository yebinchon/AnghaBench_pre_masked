
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ inflight; } ;
struct TYPE_11__ {int final_sent; } ;
struct st_h2o_mruby_callback_sender_t {int has_error; TYPE_2__ sending; TYPE_1__ super; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_14__ {scalar_t__ sender; } ;
typedef TYPE_4__ h2o_mruby_generator_t ;
struct TYPE_15__ {TYPE_3__* shared; } ;
typedef TYPE_5__ h2o_mruby_context_t ;
struct TYPE_13__ {int * mrb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int *,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static mrb_value FUNC_6(h2o_mruby_context_t *VAR_1, mrb_value VAR_2, mrb_value *VAR_3, mrb_value VAR_4,
                                       int *VAR_5)
{
    mrb_state *VAR_6 = VAR_1->shared->mrb;
    mrb_value VAR_7 = FUNC_4(VAR_4, 0);
    mrb_value VAR_8 = FUNC_4(VAR_4, 1);
    h2o_mruby_generator_t *VAR_9 = FUNC_1(VAR_6, VAR_8);

    *VAR_5 = 1;

    mrb_value VAR_10 = FUNC_0(VAR_6, VAR_9);
    if (!FUNC_5(VAR_10))
        return VAR_10;

    struct st_h2o_mruby_callback_sender_t *VAR_11 = (void *)VAR_9->sender;
    if (!VAR_11->super.final_sent) {
        if (VAR_11->sending.inflight) {
            VAR_11->has_error = 1;
        } else {
            FUNC_3(VAR_9, ((void*)0), 0, VAR_0);
        }
    }
    FUNC_2(VAR_9);

    return VAR_7;
}

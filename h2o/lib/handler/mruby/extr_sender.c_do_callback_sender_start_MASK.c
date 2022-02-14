
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int inflight; } ;
struct TYPE_11__ {int final_sent; int body_obj; } ;
struct st_h2o_mruby_callback_sender_t {TYPE_7__ sending; TYPE_3__ super; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_10__ {int generator; } ;
struct TYPE_12__ {TYPE_6__* ctx; TYPE_2__ refs; scalar_t__ sender; } ;
typedef TYPE_4__ h2o_mruby_generator_t ;
struct TYPE_13__ {TYPE_1__* shared; } ;
struct TYPE_9__ {int constants; int * mrb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_4__*,int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int,int ) ;

__attribute__((used)) static void FUNC_6(h2o_mruby_generator_t *VAR_2)
{
    struct st_h2o_mruby_callback_sender_t *VAR_3 = (void *)VAR_2->sender;
    mrb_state *VAR_4 = VAR_2->ctx->shared->mrb;
    mrb_value VAR_5 = FUNC_3(VAR_2->ctx->shared->constants, VAR_0);
    mrb_value VAR_6 = FUNC_4(VAR_4, 2);
    FUNC_5(VAR_4, VAR_6, 0, VAR_3->super.body_obj);
    FUNC_5(VAR_4, VAR_6, 1, VAR_2->refs.generator);
    FUNC_1(VAR_2->ctx, VAR_5, VAR_6, 0);

    if (!VAR_3->super.final_sent && !VAR_3->sending.inflight) {
        FUNC_0(&VAR_3->sending);
        FUNC_2(VAR_2, ((void*)0), 0, VAR_1);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct st_h2o_mruby_sleep_context_t {TYPE_4__* ctx; int started_at; int timeout_entry; int receiver; } ;
typedef int mrb_value ;
struct TYPE_12__ {int * exc; } ;
typedef TYPE_3__ mrb_state ;
struct TYPE_13__ {TYPE_2__* shared; } ;
typedef TYPE_4__ h2o_mruby_context_t ;
struct TYPE_11__ {TYPE_1__* ctx; TYPE_3__* mrb; } ;
struct TYPE_10__ {int loop; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct st_h2o_mruby_sleep_context_t* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (struct st_h2o_mruby_sleep_context_t*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_3__*,int ,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (TYPE_3__*,int ,int ) ;
 int FUNC_15 (int *) ;
 int VAR_2 ;

__attribute__((used)) static mrb_value FUNC_16(h2o_mruby_context_t *VAR_3, mrb_value VAR_4, mrb_value *VAR_5, mrb_value VAR_6, int *VAR_7)
{
    mrb_state *VAR_8 = VAR_3->shared->mrb;

    FUNC_1(FUNC_7(VAR_6));
    if (FUNC_0(VAR_6) == 0) {
        return FUNC_13();
    }
    mrb_value VAR_9 = FUNC_8(VAR_6, 0);


    VAR_9 = FUNC_11(VAR_8, VAR_9, "to_f", 0);

    if (VAR_8->exc) {
        *VAR_7 = 1;
        mrb_value VAR_10 = FUNC_15(VAR_8->exc);
        if (FUNC_14(VAR_8, VAR_10, VAR_1)) {
            VAR_10 = FUNC_9(VAR_8, VAR_0, "the argument of the sleep function must respond to 'to_f' method");
        }
        VAR_8->exc = ((void*)0);
        return VAR_10;
    }
    uint64_t VAR_11 = FUNC_10(VAR_9) * 1000;

    struct st_h2o_mruby_sleep_context_t *VAR_12 = FUNC_2(sizeof(*VAR_12));
    FUNC_6(VAR_12, 0, sizeof(*VAR_12));
    VAR_12->ctx = VAR_3;
    VAR_12->receiver = *VAR_5;
    FUNC_4(&VAR_12->timeout_entry, VAR_2);
    FUNC_5(VAR_12->ctx->shared->ctx->loop, VAR_11, &VAR_12->timeout_entry);

    VAR_12->started_at = FUNC_3(VAR_12->ctx->shared->ctx->loop);

    FUNC_12(VAR_8, *VAR_5);

    return FUNC_13();
}

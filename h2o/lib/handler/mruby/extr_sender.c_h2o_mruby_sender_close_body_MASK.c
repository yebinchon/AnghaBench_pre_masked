
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * exc; } ;
typedef TYPE_4__ mrb_state ;
struct TYPE_15__ {int body_obj; } ;
typedef TYPE_5__ h2o_mruby_sender_t ;
struct TYPE_16__ {TYPE_2__* ctx; TYPE_5__* sender; } ;
typedef TYPE_6__ h2o_mruby_generator_t ;
struct TYPE_11__ {int sym_close; } ;
struct TYPE_13__ {TYPE_1__ symbols; TYPE_4__* mrb; } ;
struct TYPE_12__ {TYPE_3__* shared; } ;


 int FUNC_0 (TYPE_4__*,int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int ) ;

void FUNC_5(h2o_mruby_generator_t *VAR_0)
{
    h2o_mruby_sender_t *VAR_1 = VAR_0->sender;
    mrb_state *VAR_2 = VAR_0->ctx->shared->mrb;

    if (!FUNC_2(VAR_1->body_obj)) {

        if (FUNC_4(VAR_2, VAR_1->body_obj, VAR_0->ctx->shared->symbols.sym_close))
            FUNC_0(VAR_2, VAR_1->body_obj, VAR_0->ctx->shared->symbols.sym_close, 0, ((void*)0));
        VAR_2->exc = ((void*)0);
        FUNC_1(VAR_2, VAR_1->body_obj);
        VAR_1->body_obj = FUNC_3();
    }
}

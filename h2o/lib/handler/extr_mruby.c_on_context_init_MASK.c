
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* mrb_value ;
typedef int mrb_state ;
struct TYPE_8__ {int super; } ;
typedef TYPE_1__ h2o_mruby_handler_t ;
struct TYPE_9__ {void* proc; TYPE_7__* shared; void* resumers; void* blocking_reqs; TYPE_1__* handler; } ;
typedef TYPE_2__ h2o_mruby_context_t ;
typedef int h2o_handler_t ;
typedef int h2o_context_t ;
struct TYPE_10__ {int * mrb; } ;


 int FUNC_0 (int ) ;
 TYPE_7__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,void*,int ,int *) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (void*,int) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 () ;
 void* FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_14(h2o_handler_t *VAR_0, h2o_context_t *VAR_1)
{
    h2o_mruby_handler_t *VAR_2 = (void *)VAR_0;
    h2o_mruby_context_t *VAR_3 = FUNC_3(sizeof(*VAR_3));

    VAR_3->handler = VAR_2;
    VAR_3->shared = FUNC_1(VAR_1);

    mrb_state *VAR_4 = VAR_3->shared->mrb;

    VAR_3->blocking_reqs = FUNC_8(VAR_4);
    VAR_3->resumers = FUNC_8(VAR_4);


    int VAR_5 = FUNC_10(VAR_4);

    mrb_value VAR_6 = FUNC_13(VAR_3);
    FUNC_0(FUNC_6(VAR_6));

    VAR_3->proc = FUNC_7(VAR_6, 0);


    mrb_value VAR_7 = FUNC_7(VAR_6, 1);
    FUNC_5(VAR_3, VAR_7, FUNC_12(), ((void*)0));
    FUNC_4(VAR_3->shared->mrb);

    FUNC_9(VAR_4, VAR_5);
    FUNC_11(VAR_4, VAR_3->proc);
    FUNC_11(VAR_4, VAR_7);

    FUNC_2(VAR_1, &VAR_2->super, VAR_3);
}

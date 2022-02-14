
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct st_h2o_mruby_middleware_sender_t {TYPE_8__* subreq; int sending; } ;
struct TYPE_13__ {TYPE_2__* ctx; scalar_t__ sender; } ;
typedef TYPE_5__ h2o_mruby_generator_t ;
struct TYPE_12__ {TYPE_5__* body; int * response; } ;
struct TYPE_11__ {int request; } ;
struct TYPE_14__ {TYPE_4__ shortcut; TYPE_3__ refs; } ;
struct TYPE_10__ {TYPE_1__* shared; } ;
struct TYPE_9__ {int mrb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(h2o_mruby_generator_t *VAR_0)
{
    struct st_h2o_mruby_middleware_sender_t *VAR_1 = (void *)VAR_0->sender;

    FUNC_2(&VAR_1->sending);

    if (VAR_1->subreq->shortcut.response != ((void*)0)) {
        FUNC_0(!FUNC_5(VAR_1->subreq->refs.request));
        FUNC_4(VAR_0->ctx->shared->mrb, VAR_1->subreq->refs.request);
        VAR_1->subreq->shortcut.response = ((void*)0);
    }

    FUNC_0(VAR_1->subreq->shortcut.body == VAR_0);
    VAR_1->subreq->shortcut.body = ((void*)0);

    FUNC_1(VAR_1->subreq);
    VAR_1->subreq = ((void*)0);

    FUNC_3(VAR_0);
}

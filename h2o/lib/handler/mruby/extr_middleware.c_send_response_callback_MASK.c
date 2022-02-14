
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* response; } ;
struct TYPE_7__ {int request; } ;
struct st_mruby_subreq_t {scalar_t__ state; TYPE_2__ shortcut; TYPE_1__ refs; } ;
typedef int mrb_value ;
typedef int mrb_int ;
struct TYPE_11__ {TYPE_4__* ctx; } ;
typedef TYPE_5__ h2o_mruby_generator_t ;
struct TYPE_10__ {TYPE_3__* shared; } ;
struct TYPE_9__ {int mrb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct st_mruby_subreq_t* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct st_mruby_subreq_t*) ;

__attribute__((used)) static int FUNC_5(h2o_mruby_generator_t *VAR_2, mrb_int VAR_3, mrb_value VAR_4, int *VAR_5)
{
    struct st_mruby_subreq_t *VAR_6 = FUNC_1(VAR_2->ctx->shared->mrb, VAR_4, &VAR_1);
    FUNC_0(VAR_6 != ((void*)0));
    FUNC_0(FUNC_3(VAR_6->refs.request) == FUNC_3(VAR_4));

    VAR_6->shortcut.response = VAR_2;
    FUNC_2(VAR_2->ctx->shared->mrb, VAR_4);

    if (VAR_6->state != VAR_0) {

        FUNC_4(VAR_6);
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int mrb_value ;
struct TYPE_15__ {int * exc; } ;
typedef TYPE_2__ mrb_state ;
struct TYPE_13__ {scalar_t__ len; } ;
struct TYPE_16__ {scalar_t__ content_length; TYPE_11__ entity; int pool; } ;
typedef TYPE_3__ h2o_req_t ;
struct TYPE_17__ {TYPE_1__* shared; } ;
typedef TYPE_4__ h2o_mruby_context_t ;
struct TYPE_14__ {TYPE_2__* mrb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_11__ FUNC_2 (int *,int ) ;
 TYPE_11__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (TYPE_2__*,int ,char*,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(h2o_req_t *VAR_2, h2o_mruby_context_t *VAR_3, mrb_value VAR_4)
{
    mrb_state *VAR_5 = VAR_3->shared->mrb;

    if (FUNC_7(VAR_4)) {
        VAR_2->entity = FUNC_2(((void*)0), 0);
        VAR_2->content_length = 0;
        return;
    }


    if (!FUNC_9(VAR_5, VAR_4, FUNC_6(VAR_5, "read"))) {
        VAR_5->exc = FUNC_8(FUNC_4(VAR_5, VAR_0, "'rack.input' must respond to 'read'"));
        return;
    }
    mrb_value VAR_6 = FUNC_5(VAR_5, VAR_4, "read", 0);
    if (VAR_5->exc != ((void*)0))
        return;
    if (!FUNC_10(VAR_6)) {
        VAR_5->exc = FUNC_8(FUNC_4(VAR_5, VAR_0, "return value of `read` must be a string"));
        return;
    }
    VAR_2->entity = FUNC_3(&VAR_2->pool, FUNC_1(VAR_6), FUNC_0(VAR_6));

    if (VAR_2->content_length == VAR_1) {
        VAR_2->content_length = VAR_2->entity.len;
    } else {
        if (VAR_2->content_length > VAR_2->entity.len)
            VAR_2->content_length = VAR_2->entity.len;
        else if (VAR_2->content_length < VAR_2->entity.len)
            VAR_2->entity.len = VAR_2->content_length;
    }
}

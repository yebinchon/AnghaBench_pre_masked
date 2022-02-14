
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int pool; } ;
struct st_mruby_subreq_t {int error_stream; TYPE_2__ super; TYPE_1__* ctx; } ;
typedef int mrb_value ;
struct TYPE_17__ {int * exc; } ;
typedef TYPE_4__ mrb_state ;
struct TYPE_18__ {int len; int base; } ;
typedef TYPE_5__ h2o_iovec_t ;
struct TYPE_16__ {TYPE_4__* mrb; } ;
struct TYPE_14__ {TYPE_3__* shared; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_5__ FUNC_2 (int *,TYPE_5__,TYPE_5__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ,char*,int,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_0, h2o_iovec_t VAR_1, h2o_iovec_t VAR_2)
{
    struct st_mruby_subreq_t *VAR_3 = (void *)VAR_0;
    mrb_state *VAR_4 = VAR_3->ctx->shared->mrb;

    FUNC_1(!FUNC_7(VAR_3->error_stream));

    h2o_iovec_t VAR_5 = FUNC_2(&VAR_3->super.pool, VAR_1, VAR_2);
    mrb_value VAR_6 = FUNC_4(VAR_4, VAR_5.base, VAR_5.len);
    FUNC_5(VAR_4, VAR_3->error_stream, "write", 1, VAR_6);
    if (VAR_4->exc != ((void*)0)) {
        FUNC_3("%s\n", FUNC_0(FUNC_6(VAR_4, FUNC_8(VAR_4->exc))));
        VAR_4->exc = ((void*)0);
    }
}

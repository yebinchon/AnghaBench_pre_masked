
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int request; } ;
struct TYPE_19__ {int overrides; int path; int authority; int scheme; int method; } ;
struct st_mruby_subreq_t {TYPE_2__ refs; TYPE_4__ super; } ;
typedef int mrb_value ;
struct TYPE_18__ {int * exc; TYPE_5__* ud; } ;
typedef TYPE_3__ mrb_state ;
typedef TYPE_4__ h2o_req_t ;
struct TYPE_20__ {TYPE_6__* current_context; } ;
typedef TYPE_5__ h2o_mruby_shared_context_t ;
struct TYPE_21__ {TYPE_1__* shared; } ;
typedef TYPE_6__ h2o_mruby_context_t ;
struct TYPE_16__ {int constants; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct st_mruby_subreq_t* FUNC_1 (TYPE_6__*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*,int ,struct st_mruby_subreq_t*,int *) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,char*,int *) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static mrb_value FUNC_12(mrb_state *VAR_2, mrb_value VAR_3)
{
    h2o_mruby_shared_context_t *VAR_4 = VAR_2->ud;
    h2o_mruby_context_t *VAR_5 = VAR_4->current_context;
    FUNC_0(VAR_5 != ((void*)0));

    mrb_value VAR_6;
    mrb_value VAR_7;
    FUNC_8(VAR_2, "H", &VAR_6);
    VAR_7 = FUNC_10(VAR_2, VAR_3, FUNC_9(VAR_2, "@reprocess"));


    struct st_mruby_subreq_t *VAR_8 = FUNC_1(VAR_4->current_context, VAR_6, FUNC_6(VAR_7));
    if (VAR_2->exc != ((void*)0)) {
        mrb_value VAR_9 = FUNC_11(VAR_2->exc);
        VAR_2->exc = ((void*)0);
        FUNC_7(VAR_2, VAR_9);
    }

    VAR_8->refs.request = FUNC_3(VAR_2, FUNC_5(VAR_5->shared->constants, VAR_0),
                                                          VAR_8, &VAR_1);

    h2o_req_t *VAR_10 = &VAR_8->super;
    if (FUNC_6(VAR_7)) {
        FUNC_4(VAR_10, VAR_10->method, VAR_10->scheme, VAR_10->authority, VAR_10->path, VAR_10->overrides, 1);
    } else {
        FUNC_2(VAR_10);
    }

    return VAR_8->refs.request;
}

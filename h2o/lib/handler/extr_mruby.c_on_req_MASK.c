
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;


typedef int mrb_value ;
struct TYPE_21__ {int pool; TYPE_1__* conn; } ;
typedef TYPE_4__ h2o_req_t ;
struct TYPE_22__ {int mrb; int constants; } ;
typedef TYPE_5__ h2o_mruby_shared_context_t ;
struct TYPE_23__ {int super; } ;
typedef TYPE_6__ h2o_mruby_handler_t ;
struct TYPE_20__ {int generator; } ;
struct TYPE_19__ {int * stop; int * proceed; } ;
struct TYPE_24__ {TYPE_3__ refs; TYPE_13__* error_stream; int * sender; int rack_input; TYPE_8__* ctx; TYPE_4__* req; TYPE_2__ super; } ;
typedef TYPE_7__ h2o_mruby_generator_t ;
struct TYPE_25__ {int proc; } ;
typedef TYPE_8__ h2o_mruby_context_t ;
typedef int h2o_handler_t ;
struct TYPE_18__ {int ctx; } ;
struct TYPE_17__ {TYPE_7__* generator; TYPE_8__* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (int ) ;
 TYPE_8__* FUNC_2 (int ,int *) ;
 TYPE_13__* FUNC_3 (int) ;
 TYPE_7__* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int ,int ,TYPE_7__*,int *) ;
 int FUNC_6 (TYPE_8__*,int ,int ,int*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_13(h2o_handler_t *VAR_3, h2o_req_t *VAR_4)
{
    h2o_mruby_handler_t *VAR_5 = (void *)VAR_3;
    h2o_mruby_shared_context_t *VAR_6 = FUNC_1(VAR_4->conn->ctx);
    int VAR_7 = FUNC_11(VAR_6->mrb);

    h2o_mruby_context_t *VAR_8 = FUNC_2(VAR_4->conn->ctx, &VAR_5->super);

    h2o_mruby_generator_t *VAR_9 = FUNC_4(&VAR_4->pool, sizeof(*VAR_9), VAR_2);
    VAR_9->super.proceed = ((void*)0);
    VAR_9->super.stop = ((void*)0);
    VAR_9->req = VAR_4;
    VAR_9->ctx = VAR_8;
    VAR_9->rack_input = FUNC_12();
    VAR_9->sender = ((void*)0);

    VAR_9->error_stream = FUNC_3(sizeof(*VAR_9->error_stream));
    VAR_9->error_stream->ctx = VAR_8;
    VAR_9->error_stream->generator = VAR_9;

    mrb_value VAR_10 = FUNC_5(VAR_6->mrb, FUNC_7(VAR_6->constants, VAR_0),
                                                   VAR_9, &VAR_1);
    VAR_9->refs.generator = VAR_10;

    mrb_value VAR_11 = FUNC_0(VAR_9);

    mrb_value VAR_12 = FUNC_8(VAR_6->mrb);
    FUNC_9(VAR_6->mrb, VAR_12, 0, VAR_11);
    FUNC_9(VAR_6->mrb, VAR_12, 1, VAR_10);

    int VAR_13 = 0;
    FUNC_6(VAR_8, VAR_8->proc, VAR_12, &VAR_13);

    FUNC_10(VAR_6->mrb, VAR_7);
    if (VAR_13)
        return -1;
    return 0;
}

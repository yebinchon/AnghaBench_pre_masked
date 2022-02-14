
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_17__ {int data; int (* cb ) (int ,TYPE_9__,TYPE_9__) ;} ;
struct TYPE_22__ {TYPE_2__ error_log_delegate; } ;
typedef TYPE_7__ h2o_req_t ;
struct TYPE_23__ {TYPE_6__* ctx; TYPE_1__* generator; } ;
typedef TYPE_8__ h2o_mruby_error_stream_t ;
struct TYPE_24__ {int len; } ;
typedef TYPE_9__ h2o_iovec_t ;
struct TYPE_21__ {TYPE_5__* handler; } ;
struct TYPE_20__ {TYPE_4__* pathconf; } ;
struct TYPE_18__ {scalar_t__ emit_request_errors; } ;
struct TYPE_19__ {TYPE_3__ error_log; } ;
struct TYPE_16__ {TYPE_7__* req; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 TYPE_9__ FUNC_2 (int *,int ) ;
 TYPE_8__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_9__,TYPE_9__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,char*,int *) ;
 int FUNC_8 (int *,int ,char*) ;
 int FUNC_9 (int ,TYPE_9__,TYPE_9__) ;

__attribute__((used)) static mrb_value FUNC_10(mrb_state *VAR_1, mrb_value VAR_2)
{
    h2o_mruby_error_stream_t *VAR_3;
    if ((VAR_3 = FUNC_3(VAR_1, VAR_2)) == ((void*)0)) {
        FUNC_8(VAR_1, VAR_0, "ErrorStream#write wrong self");
    }

    mrb_value VAR_4;
    FUNC_7(VAR_1, "o", &VAR_4);
    VAR_4 = FUNC_4(VAR_1, VAR_4);

    h2o_iovec_t VAR_5 = FUNC_2(FUNC_1(VAR_4), FUNC_0(VAR_4));

    if (VAR_3->generator != ((void*)0)) {
        h2o_req_t *VAR_6 = VAR_3->generator->req;
        VAR_6->error_log_delegate.cb(VAR_6->error_log_delegate.data, FUNC_2(((void*)0), 0), VAR_5);
    } else if (VAR_3->ctx->handler->pathconf->error_log.emit_request_errors) {
        FUNC_5(FUNC_2(((void*)0), 0), VAR_5);
    }

    return FUNC_6(VAR_5.len);
}

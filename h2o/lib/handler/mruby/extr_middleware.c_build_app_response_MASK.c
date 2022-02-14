
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_10__ {scalar_t__ status; scalar_t__ content_length; TYPE_7__ headers; } ;
struct TYPE_12__ {TYPE_2__ res; int pool; } ;
struct st_mruby_subreq_t {TYPE_5__* ctx; TYPE_4__ super; } ;
typedef int mrb_value ;
typedef int mrb_state ;
struct TYPE_9__ {int len; int base; } ;
struct TYPE_11__ {TYPE_1__ buf; } ;
typedef TYPE_3__ h2o_token_t ;
typedef TYPE_4__ h2o_req_t ;
struct TYPE_13__ {TYPE_6__* shared; } ;
typedef TYPE_5__ h2o_mruby_context_t ;
struct TYPE_14__ {int constants; int * mrb; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,struct st_mruby_subreq_t*,int *) ;
 int FUNC_1 (TYPE_6__*,int *,TYPE_7__*,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,int ,char*,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static mrb_value FUNC_12(struct st_mruby_subreq_t *VAR_5)
{
    h2o_req_t *VAR_6 = &VAR_5->super;
    h2o_mruby_context_t *VAR_7 = VAR_5->ctx;
    mrb_state *VAR_8 = VAR_7->shared->mrb;


    mrb_value VAR_9 = FUNC_5(VAR_8, 3);


    FUNC_6(VAR_8, VAR_9, 0, FUNC_7(VAR_6->res.status));


    {
        mrb_value VAR_10 = FUNC_9(VAR_8, (int)VAR_6->res.headers.size);
        FUNC_1(VAR_7->shared, &VAR_6->pool, &VAR_6->res.headers, VAR_4,
                                         FUNC_11(VAR_10));
        if (VAR_6->res.content_length != VAR_2) {
            h2o_token_t *VAR_11 = VAR_1;
            mrb_value VAR_12 = FUNC_2(VAR_8, VAR_11->buf.base, VAR_11->buf.len);
            mrb_value VAR_13 = FUNC_3(VAR_8, FUNC_7(VAR_6->res.content_length));
            FUNC_10(VAR_8, VAR_10, VAR_12, VAR_13);
        }
        FUNC_6(VAR_8, VAR_9, 1, VAR_10);
    }


    {
        mrb_value VAR_14 = FUNC_0(
            VAR_8, FUNC_4(VAR_7->shared->constants, VAR_0), VAR_5, &VAR_3);
        FUNC_8(VAR_8, VAR_14, "initialize", 0);
        FUNC_6(VAR_8, VAR_9, 2, VAR_14);
    }

    return VAR_9;
}

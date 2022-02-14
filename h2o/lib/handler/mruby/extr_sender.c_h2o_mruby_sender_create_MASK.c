
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_17__ {int bytes_left; int body_obj; } ;
typedef TYPE_6__ h2o_mruby_sender_t ;
struct TYPE_18__ {TYPE_5__* req; TYPE_2__* ctx; } ;
typedef TYPE_7__ h2o_mruby_generator_t ;
struct TYPE_15__ {int content_length; } ;
struct TYPE_14__ {int len; int base; } ;
struct TYPE_16__ {TYPE_4__ res; TYPE_3__ method; int pool; } ;
struct TYPE_13__ {TYPE_1__* shared; } ;
struct TYPE_12__ {int mrb; } ;


 int FUNC_0 (char*) ;
 TYPE_6__* FUNC_1 (int *,size_t,size_t) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*,int ,size_t) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

h2o_mruby_sender_t *FUNC_6(h2o_mruby_generator_t *VAR_0, mrb_value VAR_1, size_t VAR_2, size_t VAR_3)
{
    h2o_mruby_sender_t *VAR_4 = FUNC_1(&VAR_0->req->pool, VAR_2, VAR_3);
    FUNC_3(VAR_4, 0, VAR_3);
    VAR_4->body_obj = VAR_1;
    if (!FUNC_5(VAR_1))
        FUNC_4(VAR_0->ctx->shared->mrb, VAR_1);
    VAR_4->bytes_left = FUNC_2(VAR_0->req->method.base, VAR_0->req->method.len, FUNC_0("HEAD"))
                             ? 0
                             : VAR_0->req->res.content_length;
    return VAR_4;
}

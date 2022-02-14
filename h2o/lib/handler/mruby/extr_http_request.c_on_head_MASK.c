
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int request; } ;
struct st_h2o_mruby_http_request_context_t {TYPE_2__* ctx; TYPE_1__ refs; } ;
typedef int h2o_iovec_t ;
struct TYPE_10__ {struct st_h2o_mruby_http_request_context_t* data; } ;
typedef TYPE_4__ h2o_httpclient_t ;
typedef int * h2o_httpclient_body_cb ;
typedef int h2o_header_t ;
struct TYPE_9__ {int mrb; } ;
struct TYPE_8__ {TYPE_3__* shared; } ;


 int * FUNC_0 (TYPE_4__*,char const*,int,int,int ,int *,size_t,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct st_h2o_mruby_http_request_context_t*) ;

__attribute__((used)) static h2o_httpclient_body_cb FUNC_5(h2o_httpclient_t *VAR_0, const char *VAR_1, int VAR_2, int VAR_3, h2o_iovec_t VAR_4,
                                      h2o_header_t *VAR_5, size_t VAR_6, int VAR_7)
{
    struct st_h2o_mruby_http_request_context_t *VAR_8 = VAR_0->data;
    if (FUNC_4(VAR_8))
        return ((void*)0);

    int VAR_9 = FUNC_2(VAR_8->ctx->shared->mrb);
    FUNC_3(VAR_8->ctx->shared->mrb, VAR_8->refs.request);

    h2o_httpclient_body_cb VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    FUNC_1(VAR_8->ctx->shared->mrb, VAR_9);

    return VAR_10;
}

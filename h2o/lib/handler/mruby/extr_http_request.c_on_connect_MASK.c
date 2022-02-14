
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int request; } ;
struct st_h2o_mruby_http_request_context_t {TYPE_3__* ctx; TYPE_1__ refs; } ;
typedef int h2o_url_t ;
typedef int h2o_iovec_t ;
struct TYPE_10__ {struct st_h2o_mruby_http_request_context_t* data; } ;
typedef TYPE_4__ h2o_httpclient_t ;
typedef int h2o_httpclient_properties_t ;
typedef int h2o_httpclient_proceed_req_cb ;
typedef int * h2o_httpclient_head_cb ;
typedef int h2o_header_t ;
struct TYPE_9__ {TYPE_2__* shared; } ;
struct TYPE_8__ {int mrb; } ;


 int * FUNC_0 (TYPE_4__*,char const*,int *,int *,int const**,size_t*,int *,int *,int *,int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct st_h2o_mruby_http_request_context_t*) ;

__attribute__((used)) static h2o_httpclient_head_cb FUNC_5(h2o_httpclient_t *VAR_0, const char *VAR_1, h2o_iovec_t *VAR_2, h2o_url_t *VAR_3,
                                         const h2o_header_t **VAR_4, size_t *VAR_5, h2o_iovec_t *VAR_6,
                                         h2o_httpclient_proceed_req_cb *VAR_7, h2o_httpclient_properties_t *VAR_8,
                                         h2o_url_t *VAR_9)
{
    struct st_h2o_mruby_http_request_context_t *VAR_10 = VAR_0->data;
    if (FUNC_4(VAR_10))
        return ((void*)0);

    int VAR_11 = FUNC_2(VAR_10->ctx->shared->mrb);
    FUNC_3(VAR_10->ctx->shared->mrb, VAR_10->refs.request);

    h2o_httpclient_head_cb VAR_12 =
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

    FUNC_1(VAR_10->ctx->shared->mrb, VAR_11);

    return VAR_12;
}

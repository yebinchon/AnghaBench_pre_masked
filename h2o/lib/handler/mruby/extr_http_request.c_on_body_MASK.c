
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int input_stream; } ;
struct st_h2o_mruby_http_request_context_t {TYPE_2__* ctx; TYPE_3__ refs; } ;
struct TYPE_10__ {struct st_h2o_mruby_http_request_context_t* data; } ;
typedef TYPE_4__ h2o_httpclient_t ;
struct TYPE_8__ {TYPE_1__* shared; } ;
struct TYPE_7__ {int mrb; } ;


 int FUNC_0 (TYPE_4__*,char const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct st_h2o_mruby_http_request_context_t*) ;

__attribute__((used)) static int FUNC_5(h2o_httpclient_t *VAR_0, const char *VAR_1)
{
    struct st_h2o_mruby_http_request_context_t *VAR_2 = VAR_0->data;
    if (FUNC_4(VAR_2))
        return -1;

    int VAR_3 = FUNC_2(VAR_2->ctx->shared->mrb);
    FUNC_3(VAR_2->ctx->shared->mrb, VAR_2->refs.input_stream);

    int VAR_4 = FUNC_0(VAR_0, VAR_1);

    FUNC_1(VAR_2->ctx->shared->mrb, VAR_3);

    return VAR_4;
}

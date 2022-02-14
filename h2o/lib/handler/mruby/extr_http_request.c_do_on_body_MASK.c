
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int has_content; TYPE_3__* after_closed; } ;
struct st_h2o_mruby_http_request_context_t {int ctx; int receiver; int * shortcut; TYPE_1__ resp; int * client; } ;
typedef int mrb_value ;
struct TYPE_6__ {TYPE_3__** buf; struct st_h2o_mruby_http_request_context_t* data; } ;
typedef TYPE_2__ h2o_httpclient_t ;
struct TYPE_7__ {scalar_t__ size; } ;
typedef TYPE_3__ h2o_buffer_t ;


 int FUNC_0 (struct st_h2o_mruby_http_request_context_t*) ;
 int FUNC_1 (struct st_h2o_mruby_http_request_context_t*) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(h2o_httpclient_t *VAR_0, const char *VAR_1)
{
    struct st_h2o_mruby_http_request_context_t *VAR_2 = VAR_0->data;

    if (VAR_1 != ((void*)0)) {
        h2o_buffer_t *VAR_3 = VAR_2->resp.after_closed;
        VAR_2->resp.after_closed = *VAR_0->buf;
        *VAR_0->buf = VAR_3;
        VAR_2->client = ((void*)0);
        VAR_2->resp.has_content = 1;
    } else if ((*VAR_0->buf)->size != 0) {
        VAR_2->resp.has_content = 1;
    }

    if (VAR_2->resp.has_content) {
        if (VAR_2->shortcut != ((void*)0)) {
            FUNC_4(VAR_2->shortcut);
        } else if (!FUNC_3(VAR_2->receiver)) {
            mrb_value VAR_4 = FUNC_0(VAR_2);
            FUNC_2(VAR_2->ctx, FUNC_1(VAR_2), VAR_4, ((void*)0));
        }
    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int has_content; TYPE_5__* after_closed; } ;
struct st_h2o_mruby_http_request_context_t {TYPE_4__ resp; TYPE_3__* ctx; TYPE_1__* client; } ;
typedef int mrb_value ;
struct TYPE_10__ {scalar_t__ size; int bytes; } ;
struct TYPE_8__ {TYPE_2__* shared; } ;
struct TYPE_7__ {int mrb; } ;
struct TYPE_6__ {TYPE_5__** buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__**,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static mrb_value FUNC_4(struct st_h2o_mruby_http_request_context_t *VAR_0)
{
    mrb_value VAR_1;

    FUNC_0(VAR_0->resp.has_content);

    if (VAR_0->client != ((void*)0)) {
        FUNC_0((*VAR_0->client->buf)->size != 0);
        VAR_1 = FUNC_2(VAR_0->ctx->shared->mrb, (*VAR_0->client->buf)->bytes, (*VAR_0->client->buf)->size);
        FUNC_1(VAR_0->client->buf, (*VAR_0->client->buf)->size);
        VAR_0->resp.has_content = 0;
    } else {
        if (VAR_0->resp.after_closed->size == 0) {
            VAR_1 = FUNC_3();
        } else {
            VAR_1 = FUNC_2(VAR_0->ctx->shared->mrb, VAR_0->resp.after_closed->bytes, VAR_0->resp.after_closed->size);
            FUNC_1(&VAR_0->resp.after_closed, VAR_0->resp.after_closed->size);
        }

    }

    return VAR_1;
}

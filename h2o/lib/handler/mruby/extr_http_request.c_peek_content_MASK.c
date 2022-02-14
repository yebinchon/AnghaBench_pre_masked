
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * after_closed; scalar_t__ has_content; } ;
struct TYPE_7__ {TYPE_2__ resp; TYPE_1__* client; } ;
typedef TYPE_3__ h2o_mruby_http_request_context_t ;
typedef int h2o_buffer_t ;
struct TYPE_5__ {int ** buf; } ;



__attribute__((used)) static h2o_buffer_t **FUNC_0(h2o_mruby_http_request_context_t *VAR_0, int *VAR_1)
{
    *VAR_1 = VAR_0->client == ((void*)0);
    return VAR_0->client != ((void*)0) && VAR_0->resp.has_content ? VAR_0->client->buf : &VAR_0->resp.after_closed;
}

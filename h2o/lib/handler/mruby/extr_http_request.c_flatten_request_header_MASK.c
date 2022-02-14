
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int has_transfer_encoding; int headers; int can_keepalive; } ;
struct st_h2o_mruby_http_request_context_t {TYPE_1__ req; int pool; } ;
typedef int h2o_mruby_shared_context_t ;
struct TYPE_6__ {int len; int base; } ;
typedef TYPE_2__ h2o_iovec_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int ,int ,int,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(h2o_mruby_shared_context_t *VAR_0, h2o_iovec_t *VAR_1, h2o_iovec_t VAR_2, void *VAR_3)
{
    struct st_h2o_mruby_http_request_context_t *VAR_4 = VAR_3;


    if (FUNC_2(VAR_1->base, VAR_1->len, FUNC_0("content-length")) || FUNC_2(VAR_1->base, VAR_1->len, FUNC_0("host")))
        return 0;

    if (FUNC_2(VAR_1->base, VAR_1->len, FUNC_0("connection"))) {
        if (!VAR_4->req.can_keepalive)
            return 0;
    }


    if (FUNC_2(VAR_1->base, VAR_1->len, FUNC_0("transfer-encoding")))
        VAR_4->req.has_transfer_encoding = 1;

    FUNC_1(&VAR_4->pool, &VAR_4->req.headers, VAR_1->base, VAR_1->len, 1, ((void*)0), VAR_2.base, VAR_2.len);

    return 0;
}

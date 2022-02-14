
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int headers; } ;
struct TYPE_7__ {TYPE_1__ res; int pool; } ;
typedef TYPE_2__ h2o_req_t ;
typedef int h2o_mruby_shared_context_t ;
struct TYPE_8__ {int len; int base; } ;
typedef TYPE_3__ h2o_iovec_t ;


 int FUNC_0 (int *,int *,int ,int ,int,int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(h2o_mruby_shared_context_t *VAR_0, h2o_iovec_t *VAR_1, h2o_iovec_t VAR_2, void *VAR_3)
{
    h2o_req_t *VAR_4 = VAR_3;
    FUNC_0(&VAR_4->pool, &VAR_4->res.headers, VAR_1->base, VAR_1->len, 1, ((void*)0), VAR_2.base, VAR_2.len);
    return 0;
}

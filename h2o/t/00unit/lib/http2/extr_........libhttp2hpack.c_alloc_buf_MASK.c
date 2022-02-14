
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_mem_pool_t ;
struct TYPE_4__ {char* base; size_t len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 TYPE_1__* FUNC_0 (int *,int,int *) ;

__attribute__((used)) static h2o_iovec_t *FUNC_1(h2o_mem_pool_t *VAR_0, size_t VAR_1)
{
    h2o_iovec_t *VAR_2 = FUNC_0(VAR_0, sizeof(h2o_iovec_t) + VAR_1 + 1, ((void*)0));
    VAR_2->base = (char *)VAR_2 + sizeof(h2o_iovec_t);
    VAR_2->len = VAR_1;
    return VAR_2;
}

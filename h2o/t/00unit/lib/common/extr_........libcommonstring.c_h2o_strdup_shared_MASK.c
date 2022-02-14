
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int h2o_mem_pool_t ;
struct TYPE_3__ {char* base; size_t len; } ;
typedef TYPE_1__ h2o_iovec_t ;


 size_t VAR_0 ;
 char* FUNC_0 (int *,size_t,int *) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

h2o_iovec_t FUNC_3(h2o_mem_pool_t *VAR_1, const char *VAR_2, size_t VAR_3)
{
    h2o_iovec_t VAR_4;

    if (VAR_3 == VAR_0)
        VAR_3 = FUNC_2(VAR_2);

    VAR_4.base = FUNC_0(VAR_1, VAR_3 + 1, ((void*)0));
    FUNC_1(VAR_4.base, VAR_2, VAR_3);
    VAR_4.base[VAR_3] = '\0';
    VAR_4.len = VAR_3;
    return VAR_4;
}

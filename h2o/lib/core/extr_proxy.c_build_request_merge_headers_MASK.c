
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int h2o_mem_pool_t ;
struct TYPE_5__ {int len; char* base; } ;
typedef TYPE_1__ h2o_iovec_t ;


 char* VAR_0 ;
 char* FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static h2o_iovec_t FUNC_2(h2o_mem_pool_t *VAR_1, h2o_iovec_t VAR_2, h2o_iovec_t VAR_3, int VAR_4)
{
    if (VAR_3.len == 0)
        return VAR_2;
    if (VAR_2.len == 0)
        return VAR_3;

    size_t VAR_5 = VAR_2.len + 2 + VAR_3.len;
    char *VAR_6 = FUNC_0(VAR_1, *VAR_6, VAR_5);
    FUNC_1(VAR_6, VAR_2.base, VAR_2.len);
    VAR_6[VAR_2.len] = VAR_4;
    VAR_6[VAR_2.len + 1] = ' ';
    FUNC_1(VAR_6 + VAR_2.len + 2, VAR_3.base, VAR_3.len);
    VAR_2.base = VAR_6;
    VAR_2.len = VAR_5;
    return VAR_2;
}

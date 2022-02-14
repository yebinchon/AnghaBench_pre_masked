
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ssize_t ;
typedef int h2o_token_t ;
typedef int h2o_mem_pool_t ;
struct TYPE_7__ {TYPE_1__* entries; } ;
typedef TYPE_2__ h2o_headers_t ;
struct TYPE_6__ {int value; } ;


 int FUNC_0 (int *,TYPE_2__*,int const*,int *,char const*,size_t) ;
 int FUNC_1 (TYPE_2__*,int const*,int) ;
 int FUNC_2 (char const*,size_t) ;

ssize_t FUNC_3(h2o_mem_pool_t *VAR_0, h2o_headers_t *VAR_1, const h2o_token_t *VAR_2, const char *VAR_3, size_t VAR_4,
                       int VAR_5)
{
    ssize_t VAR_6 = FUNC_1(VAR_1, VAR_2, -1);
    if (VAR_6 != -1) {
        if (VAR_5) {
            VAR_1->entries[VAR_6].value = FUNC_2(VAR_3, VAR_4);
        }
        return VAR_6;
    } else {
        return FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_3, VAR_4);
    }
}

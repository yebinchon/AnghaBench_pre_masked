
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iovec_vector_t ;
typedef int h2o_mem_pool_t ;


 void* FUNC_0 (int *,int *,char const*,size_t) ;
 char* FUNC_1 (char*,size_t) ;

__attribute__((used)) static void *FUNC_2(h2o_mem_pool_t *VAR_0, iovec_vector_t *VAR_1, const char *VAR_2, size_t VAR_3, const char *VAR_4,
                         size_t VAR_5)
{
    char VAR_6[8];
    void *VAR_7;

    FUNC_0(VAR_0, VAR_1, VAR_6, FUNC_1(FUNC_1(VAR_6, VAR_3), VAR_5) - VAR_6);
    VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
    if (VAR_5 != 0)
        FUNC_0(VAR_0, VAR_1, VAR_4, VAR_5);

    return VAR_7;
}

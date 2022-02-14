
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_sendvec_t ;
typedef int h2o_mem_pool_t ;
typedef int h2o_compress_context_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,size_t,int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int *,int,int,int **,size_t*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(void)
{
    h2o_mem_pool_t VAR_1;
    h2o_sendvec_t VAR_2, *VAR_3;
    size_t VAR_4;

    FUNC_5(&VAR_1);

    h2o_compress_context_t *VAR_5 = FUNC_2(&VAR_1, VAR_0);
    FUNC_6(&VAR_2, FUNC_0("hello world"));
    FUNC_3(VAR_5, ((void*)0), &VAR_2, 1, 1, &VAR_3, &VAR_4);

    FUNC_1(VAR_3, VAR_4, FUNC_0("hello world"));

    FUNC_4(&VAR_1);
}

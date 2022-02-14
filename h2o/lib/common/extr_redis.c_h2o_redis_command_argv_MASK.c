
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sds ;
typedef int h2o_redis_command_t ;
typedef int h2o_redis_command_cb ;
typedef int h2o_redis_client_t ;


 int * FUNC_0 (int *,int ,void*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int,char const**,size_t const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int) ;

h2o_redis_command_t *FUNC_5(h2o_redis_client_t *VAR_0, h2o_redis_command_cb VAR_1, void *VAR_2, int VAR_3,
                                            const char **VAR_4, const size_t *VAR_5)
{
    sds VAR_6;
    int VAR_7;
    VAR_7 = FUNC_2(&VAR_6, VAR_3, VAR_4, VAR_5);
    if (VAR_7 < 0) {
        VAR_6 = ((void*)0);
        VAR_7 = 0;
    }

    h2o_redis_command_t *VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, FUNC_1(VAR_6));
    FUNC_4(VAR_0, VAR_8, VAR_6, VAR_7);
    FUNC_3(VAR_6);
    return VAR_8;
}

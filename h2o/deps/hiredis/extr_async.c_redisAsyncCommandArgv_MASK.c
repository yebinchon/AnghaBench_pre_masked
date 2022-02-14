
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int redisCallbackFn ;
typedef int redisAsyncContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,void*,int ,int) ;
 int FUNC_1 (int *,int,char const**,size_t const*) ;
 int FUNC_2 (int ) ;

int FUNC_3(redisAsyncContext *VAR_1, redisCallbackFn *VAR_2, void *VAR_3, int VAR_4, const char **VAR_5, const size_t *VAR_6) {
    sds VAR_7;
    int VAR_8;
    int VAR_9;
    VAR_8 = FUNC_1(&VAR_7,VAR_4,VAR_5,VAR_6);
    if (VAR_8 < 0)
        return VAR_0;
    VAR_9 = FUNC_0(VAR_1,VAR_2,VAR_3,VAR_7,VAR_8);
    FUNC_2(VAR_7);
    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int,char const**,size_t const*) ;
 int FUNC_3 (int ) ;

int FUNC_4(redisContext *VAR_3, int VAR_4, const char **VAR_5, const size_t *VAR_6) {
    sds VAR_7;
    int VAR_8;

    VAR_8 = FUNC_2(&VAR_7,VAR_4,VAR_5,VAR_6);
    if (VAR_8 == -1) {
        FUNC_1(VAR_3,VAR_1,"Out of memory");
        return VAR_0;
    }

    if (FUNC_0(VAR_3,VAR_7,VAR_8) != VAR_2) {
        FUNC_3(VAR_7);
        return VAR_0;
    }

    FUNC_3(VAR_7);
    return VAR_2;
}

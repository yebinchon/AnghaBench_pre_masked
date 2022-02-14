
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * sds ;
struct TYPE_4__ {int * obuf; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int * FUNC_1 (int *,char const*,size_t) ;

int FUNC_2(redisContext *VAR_3, const char *VAR_4, size_t VAR_5) {
    sds VAR_6;

    VAR_6 = FUNC_1(VAR_3->obuf,VAR_4,VAR_5);
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_3,VAR_1,"Out of memory");
        return VAR_0;
    }

    VAR_3->obuf = VAR_6;
    return VAR_2;
}

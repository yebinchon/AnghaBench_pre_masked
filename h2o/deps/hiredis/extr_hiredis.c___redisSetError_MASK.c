
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int err; char* errstr; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;

void FUNC_4(redisContext *VAR_2, int VAR_3, const char *VAR_4) {
    size_t VAR_5;

    VAR_2->err = VAR_3;
    if (VAR_4 != ((void*)0)) {
        VAR_5 = FUNC_3(VAR_4);
        VAR_5 = VAR_5 < (sizeof(VAR_2->errstr)-1) ? VAR_5 : (sizeof(VAR_2->errstr)-1);
        FUNC_2(VAR_2->errstr,VAR_4,VAR_5);
        VAR_2->errstr[VAR_5] = '\0';
    } else {

        FUNC_1(VAR_3 == VAR_0);
        FUNC_0(VAR_1, VAR_2->errstr, sizeof(VAR_2->errstr));
    }
}

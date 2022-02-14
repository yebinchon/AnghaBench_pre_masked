
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int redisContext ;
typedef int buf ;


 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_0 ;
 size_t FUNC_2 (char*,int,char*,char const*) ;

__attribute__((used)) static void FUNC_3(redisContext *VAR_1, int VAR_2, const char *VAR_3) {
    int VAR_4 = VAR_0;
    char VAR_5[128] = { 0 };
    size_t VAR_6 = 0;

    if (VAR_3 != ((void*)0))
        VAR_6 = FUNC_2(VAR_5,sizeof(VAR_5),"%s: ",VAR_3);
    FUNC_1(VAR_4, (char *)(VAR_5 + VAR_6), sizeof(VAR_5) - VAR_6);
    FUNC_0(VAR_1,VAR_2,VAR_5);
}

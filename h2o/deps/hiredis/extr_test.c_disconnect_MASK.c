
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int redisReply ;
typedef int redisContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(redisContext *VAR_0, int VAR_1) {
    redisReply *VAR_2;


    VAR_2 = FUNC_2(VAR_0,"SELECT 9");
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_1(VAR_2);
    VAR_2 = FUNC_2(VAR_0,"FLUSHDB");
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_1(VAR_2);


    if (VAR_1)
        return FUNC_4(VAR_0);
    FUNC_3(VAR_0);
    return -1;
}

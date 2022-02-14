
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config {int dummy; } ;
typedef int redisReply ;
typedef int redisContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (struct config) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char**,char*) ;
 scalar_t__ FUNC_7 (int *,void*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct config VAR_1) {
    redisContext *VAR_2;
    redisReply *VAR_3;
    char *VAR_4;
    int VAR_5;

    VAR_2 = FUNC_2(VAR_1);

    FUNC_8("Append format command: ");

    VAR_5 = FUNC_6(&VAR_4, "SET foo bar");

    FUNC_9(FUNC_5(VAR_2, VAR_4, VAR_5) == VAR_0);

    FUNC_0(FUNC_7(VAR_2, (void*)&VAR_3) == VAR_0);

    FUNC_3(VAR_4);
    FUNC_4(VAR_3);

    FUNC_1(VAR_2, 0);
}

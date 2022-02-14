
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_1__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,char*,char*,...) ;
 TYPE_1__* FUNC_5 (char*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;

int FUNC_11 (int VAR_5, char **VAR_6) {
    FUNC_9(VAR_0, VAR_1);

    FUNC_1();

    redisAsyncContext *VAR_7 = FUNC_5("127.0.0.1", 6379);
    if (VAR_7->err) {

        FUNC_3("Error: %s\n", VAR_7->errstr);
        return 1;
    }

    FUNC_8(VAR_7);
    FUNC_6(VAR_7,VAR_2);
    FUNC_7(VAR_7,VAR_3);
    FUNC_4(VAR_7, ((void*)0), ((void*)0), "SET key %b", VAR_6[VAR_5-1], FUNC_10(VAR_6[VAR_5-1]));
    FUNC_4(VAR_7, VAR_4, (char*)"end-1", "GET key");

    FUNC_2();

    FUNC_0();

    return 0;
}

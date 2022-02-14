
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_1__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*,char*,...) ;
 TYPE_1__* FUNC_5 (char*,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;

int FUNC_10 (int VAR_6, char **VAR_7) {
    FUNC_8(VAR_0, VAR_1);

    redisAsyncContext *VAR_8 = FUNC_5("127.0.0.1", 6379);
    if (VAR_8->err) {

        FUNC_2("Error: %s\n", VAR_8->errstr);
        return 1;
    }

    VAR_5 = FUNC_0(64);
    FUNC_3(VAR_5, VAR_8);
    FUNC_6(VAR_8,VAR_2);
    FUNC_7(VAR_8,VAR_3);
    FUNC_4(VAR_8, ((void*)0), ((void*)0), "SET key %b", VAR_7[VAR_6-1], FUNC_9(VAR_7[VAR_6-1]));
    FUNC_4(VAR_8, VAR_4, (char*)"end-1", "GET key");
    FUNC_1(VAR_5);
    return 0;
}

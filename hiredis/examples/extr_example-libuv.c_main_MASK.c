
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_7__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_1__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (TYPE_1__*,int ,char*,char*,...) ;
 TYPE_1__* FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int ) ;

int FUNC_10 (int VAR_6, char **VAR_7) {
    FUNC_6(VAR_0, VAR_1);
    uv_loop_t* VAR_8 = FUNC_8();

    redisAsyncContext *VAR_9 = FUNC_2("127.0.0.1", 6379);
    if (VAR_9->err) {

        FUNC_0("Error: %s\n", VAR_9->errstr);
        return 1;
    }

    FUNC_5(VAR_9,VAR_8);
    FUNC_3(VAR_9,VAR_3);
    FUNC_4(VAR_9,VAR_4);
    FUNC_1(VAR_9, ((void*)0), ((void*)0), "SET key %b", VAR_7[VAR_6-1], FUNC_7(VAR_7[VAR_6-1]));
    FUNC_1(VAR_9, VAR_5, (char*)"end-1", "GET key");
    FUNC_9(VAR_8, VAR_2);
    return 0;
}

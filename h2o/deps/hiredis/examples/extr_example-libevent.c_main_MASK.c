
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct event_base {int dummy; } ;
struct TYPE_7__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_1__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct event_base*) ;
 struct event_base* FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,char*,char*,...) ;
 TYPE_1__* FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,struct event_base*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;

int FUNC_10 (int VAR_5, char **VAR_6) {
    FUNC_8(VAR_0, VAR_1);
    struct event_base *VAR_7 = FUNC_1();

    redisAsyncContext *VAR_8 = FUNC_4("127.0.0.1", 6379);
    if (VAR_8->err) {

        FUNC_2("Error: %s\n", VAR_8->errstr);
        return 1;
    }

    FUNC_7(VAR_8,VAR_7);
    FUNC_5(VAR_8,VAR_2);
    FUNC_6(VAR_8,VAR_3);
    FUNC_3(VAR_8, ((void*)0), ((void*)0), "SET key %b", VAR_6[VAR_5-1], FUNC_9(VAR_6[VAR_5-1]));
    FUNC_3(VAR_8, VAR_4, (char*)"end-1", "GET key");
    FUNC_0(VAR_7);
    return 0;
}

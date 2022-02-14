
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct event_base {int dummy; } ;
struct TYPE_7__ {char* errstr; int c; scalar_t__ err; } ;
typedef TYPE_1__ redisAsyncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct event_base*) ;
 struct event_base* FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_5 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_1__*,int ,char*,char*,...) ;
 TYPE_1__* FUNC_7 (char const*,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,struct event_base*) ;
 scalar_t__ FUNC_11 (int *,char const*,char const*,char const*,char*) ;
 int FUNC_12 (int ,int ) ;
 int VAR_6 ;
 size_t FUNC_13 (char const*) ;

int FUNC_14 (int VAR_7, char **VAR_8) {
    FUNC_12(VAR_1, VAR_2);
    struct event_base *VAR_9 = FUNC_2();
    if (VAR_7 < 5) {
        FUNC_4(VAR_6,
                "Usage: %s <key> <host> <port> <cert> <certKey> [ca]\n", VAR_8[0]);
        FUNC_3(1);
    }

    const char *VAR_10 = VAR_8[1];
    size_t VAR_11 = FUNC_13(VAR_10);

    const char *VAR_12 = VAR_8[2];
    int VAR_13 = FUNC_0(VAR_8[3]);

    const char *VAR_14 = VAR_8[4];
    const char *VAR_15 = VAR_8[5];
    const char *VAR_16 = VAR_7 > 5 ? VAR_8[6] : ((void*)0);

    redisAsyncContext *VAR_17 = FUNC_7(VAR_12, VAR_13);
    if (VAR_17->err) {

        FUNC_5("Error: %s\n", VAR_17->errstr);
        return 1;
    }
    if (FUNC_11(&VAR_17->c, VAR_16, VAR_14, VAR_15, "sni") != VAR_0) {
        FUNC_5("SSL Error!\n");
        FUNC_3(1);
    }

    FUNC_10(VAR_17,VAR_9);
    FUNC_8(VAR_17,VAR_3);
    FUNC_9(VAR_17,VAR_4);
    FUNC_6(VAR_17, ((void*)0), ((void*)0), "SET key %b", VAR_10, VAR_11);
    FUNC_6(VAR_17, VAR_5, (char*)"end-1", "GET key");
    FUNC_1(VAR_9);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct timeval {int member_0; int member_1; } ;
struct TYPE_11__ {char* str; scalar_t__ type; unsigned int elements; TYPE_1__** element; int integer; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_12__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_3__ redisContext ;
struct TYPE_10__ {char* str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,...) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,char*,...) ;
 TYPE_3__* FUNC_5 (char const*,struct timeval) ;
 TYPE_3__* FUNC_6 (char const*,int,struct timeval) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (char*,int,char*,unsigned int) ;

int FUNC_9(int VAR_1, char **VAR_2) {
    unsigned int VAR_3, VAR_4 = 0;
    redisContext *VAR_5;
    redisReply *VAR_6;
    const char *VAR_7 = (VAR_1 > 1) ? VAR_2[1] : "127.0.0.1";

    if (VAR_1 > 2) {
        if (*VAR_2[2] == 'u' || *VAR_2[2] == 'U') {
            VAR_4 = 1;

            FUNC_3("Will connect to unix socket @%s\n", VAR_7);
        }
    }

    int VAR_8 = (VAR_1 > 2) ? FUNC_0(VAR_2[2]) : 6379;

    struct timeval VAR_9 = { 1, 500000 };
    if (VAR_4) {
        VAR_5 = FUNC_5(VAR_7, VAR_9);
    } else {
        VAR_5 = FUNC_6(VAR_7, VAR_8, VAR_9);
    }
    if (VAR_5 == ((void*)0) || VAR_5->err) {
        if (VAR_5) {
            FUNC_3("Connection error: %s\n", VAR_5->errstr);
            FUNC_7(VAR_5);
        } else {
            FUNC_3("Connection error: can't allocate redis context\n");
        }
        FUNC_1(1);
    }


    VAR_6 = FUNC_4(VAR_5,"PING");
    FUNC_3("PING: %s\n", VAR_6->str);
    FUNC_2(VAR_6);


    VAR_6 = FUNC_4(VAR_5,"SET %s %s", "foo", "hello world");
    FUNC_3("SET: %s\n", VAR_6->str);
    FUNC_2(VAR_6);


    VAR_6 = FUNC_4(VAR_5,"SET %b %b", "bar", (size_t) 3, "hello", (size_t) 5);
    FUNC_3("SET (binary API): %s\n", VAR_6->str);
    FUNC_2(VAR_6);


    VAR_6 = FUNC_4(VAR_5,"GET foo");
    FUNC_3("GET foo: %s\n", VAR_6->str);
    FUNC_2(VAR_6);

    VAR_6 = FUNC_4(VAR_5,"INCR counter");
    FUNC_3("INCR counter: %lld\n", VAR_6->integer);
    FUNC_2(VAR_6);

    VAR_6 = FUNC_4(VAR_5,"INCR counter");
    FUNC_3("INCR counter: %lld\n", VAR_6->integer);
    FUNC_2(VAR_6);


    VAR_6 = FUNC_4(VAR_5,"DEL mylist");
    FUNC_2(VAR_6);
    for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
        char VAR_10[64];

        FUNC_8(VAR_10,64,"%u",VAR_3);
        VAR_6 = FUNC_4(VAR_5,"LPUSH mylist element-%s", VAR_10);
        FUNC_2(VAR_6);
    }


    VAR_6 = FUNC_4(VAR_5,"LRANGE mylist 0 -1");
    if (VAR_6->type == VAR_0) {
        for (VAR_3 = 0; VAR_3 < VAR_6->elements; VAR_3++) {
            FUNC_3("%u) %s\n", VAR_3, VAR_6->element[VAR_3]->str);
        }
    }
    FUNC_2(VAR_6);


    FUNC_7(VAR_5);

    return 0;
}

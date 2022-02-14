
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timeval {int member_0; int member_1; } ;
struct TYPE_10__ {char* str; scalar_t__ type; unsigned int elements; TYPE_1__** element; int integer; } ;
typedef TYPE_2__ redisReply ;
struct TYPE_11__ {char* errstr; scalar_t__ err; } ;
typedef TYPE_3__ redisContext ;
struct TYPE_9__ {char* str; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char*,...) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,char*,...) ;
 TYPE_3__* FUNC_5 (char const*,int,struct timeval) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*,int,char*,unsigned int) ;

int FUNC_8(int VAR_1, char **VAR_2) {
    unsigned int VAR_3;
    redisContext *VAR_4;
    redisReply *VAR_5;
    const char *VAR_6 = (VAR_1 > 1) ? VAR_2[1] : "127.0.0.1";
    int VAR_7 = (VAR_1 > 2) ? FUNC_0(VAR_2[2]) : 6379;

    struct timeval VAR_8 = { 1, 500000 };
    VAR_4 = FUNC_5(VAR_6, VAR_7, VAR_8);
    if (VAR_4 == ((void*)0) || VAR_4->err) {
        if (VAR_4) {
            FUNC_3("Connection error: %s\n", VAR_4->errstr);
            FUNC_6(VAR_4);
        } else {
            FUNC_3("Connection error: can't allocate redis context\n");
        }
        FUNC_1(1);
    }


    VAR_5 = FUNC_4(VAR_4,"PING");
    FUNC_3("PING: %s\n", VAR_5->str);
    FUNC_2(VAR_5);


    VAR_5 = FUNC_4(VAR_4,"SET %s %s", "foo", "hello world");
    FUNC_3("SET: %s\n", VAR_5->str);
    FUNC_2(VAR_5);


    VAR_5 = FUNC_4(VAR_4,"SET %b %b", "bar", (size_t) 3, "hello", (size_t) 5);
    FUNC_3("SET (binary API): %s\n", VAR_5->str);
    FUNC_2(VAR_5);


    VAR_5 = FUNC_4(VAR_4,"GET foo");
    FUNC_3("GET foo: %s\n", VAR_5->str);
    FUNC_2(VAR_5);

    VAR_5 = FUNC_4(VAR_4,"INCR counter");
    FUNC_3("INCR counter: %lld\n", VAR_5->integer);
    FUNC_2(VAR_5);

    VAR_5 = FUNC_4(VAR_4,"INCR counter");
    FUNC_3("INCR counter: %lld\n", VAR_5->integer);
    FUNC_2(VAR_5);


    VAR_5 = FUNC_4(VAR_4,"DEL mylist");
    FUNC_2(VAR_5);
    for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
        char VAR_9[64];

        FUNC_7(VAR_9,64,"%u",VAR_3);
        VAR_5 = FUNC_4(VAR_4,"LPUSH mylist element-%s", VAR_9);
        FUNC_2(VAR_5);
    }


    VAR_5 = FUNC_4(VAR_4,"LRANGE mylist 0 -1");
    if (VAR_5->type == VAR_0) {
        for (VAR_3 = 0; VAR_3 < VAR_5->elements; VAR_3++) {
            FUNC_3("%u) %s\n", VAR_3, VAR_5->element[VAR_3]->str);
        }
    }
    FUNC_2(VAR_5);


    FUNC_6(VAR_4);

    return 0;
}

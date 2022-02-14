
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct config {int dummy; } ;
struct TYPE_6__ {scalar_t__ type; int elements; } ;
typedef TYPE_1__ redisReply ;
typedef int redisContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (struct config) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__** FUNC_5 (int) ;
 int FUNC_6 (char*,int,long long) ;
 int FUNC_7 (int *,char*,...) ;
 TYPE_1__* FUNC_8 (int *,char*,...) ;
 scalar_t__ FUNC_9 (int *,void*) ;
 int FUNC_10 (char*) ;
 long long FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct config VAR_4) {
    redisContext *VAR_5 = FUNC_2(VAR_4);
    redisReply **VAR_6;
    int VAR_7, VAR_8;
    long long VAR_9, VAR_10;

    FUNC_10("Throughput:\n");
    for (VAR_7 = 0; VAR_7 < 500; VAR_7++)
        FUNC_4(FUNC_8(VAR_5,"LPUSH mylist foo"));

    VAR_8 = 1000;
    VAR_6 = FUNC_5(sizeof(redisReply*)*VAR_8);
    VAR_9 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        VAR_6[VAR_7] = FUNC_8(VAR_5,"PING");
        FUNC_0(VAR_6[VAR_7] != ((void*)0) && VAR_6[VAR_7]->type == VAR_3);
    }
    VAR_10 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) FUNC_4(VAR_6[VAR_7]);
    FUNC_3(VAR_6);
    FUNC_6("\t(%dx PING: %.3fs)\n", VAR_8, (VAR_10-VAR_9)/1000000.0);

    VAR_6 = FUNC_5(sizeof(redisReply*)*VAR_8);
    VAR_9 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        VAR_6[VAR_7] = FUNC_8(VAR_5,"LRANGE mylist 0 499");
        FUNC_0(VAR_6[VAR_7] != ((void*)0) && VAR_6[VAR_7]->type == VAR_1);
        FUNC_0(VAR_6[VAR_7] != ((void*)0) && VAR_6[VAR_7]->elements == 500);
    }
    VAR_10 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) FUNC_4(VAR_6[VAR_7]);
    FUNC_3(VAR_6);
    FUNC_6("\t(%dx LRANGE with 500 elements: %.3fs)\n", VAR_8, (VAR_10-VAR_9)/1000000.0);

    VAR_6 = FUNC_5(sizeof(redisReply*)*VAR_8);
    VAR_9 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        VAR_6[VAR_7] = FUNC_8(VAR_5, "INCRBY incrkey %d", 1000000);
        FUNC_0(VAR_6[VAR_7] != ((void*)0) && VAR_6[VAR_7]->type == VAR_2);
    }
    VAR_10 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) FUNC_4(VAR_6[VAR_7]);
    FUNC_3(VAR_6);
    FUNC_6("\t(%dx INCRBY: %.3fs)\n", VAR_8, (VAR_10-VAR_9)/1000000.0);

    VAR_8 = 10000;
    VAR_6 = FUNC_5(sizeof(redisReply*)*VAR_8);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
        FUNC_7(VAR_5,"PING");
    VAR_9 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        FUNC_0(FUNC_9(VAR_5, (void*)&VAR_6[VAR_7]) == VAR_0);
        FUNC_0(VAR_6[VAR_7] != ((void*)0) && VAR_6[VAR_7]->type == VAR_3);
    }
    VAR_10 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) FUNC_4(VAR_6[VAR_7]);
    FUNC_3(VAR_6);
    FUNC_6("\t(%dx PING (pipelined): %.3fs)\n", VAR_8, (VAR_10-VAR_9)/1000000.0);

    VAR_6 = FUNC_5(sizeof(redisReply*)*VAR_8);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
        FUNC_7(VAR_5,"LRANGE mylist 0 499");
    VAR_9 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        FUNC_0(FUNC_9(VAR_5, (void*)&VAR_6[VAR_7]) == VAR_0);
        FUNC_0(VAR_6[VAR_7] != ((void*)0) && VAR_6[VAR_7]->type == VAR_1);
        FUNC_0(VAR_6[VAR_7] != ((void*)0) && VAR_6[VAR_7]->elements == 500);
    }
    VAR_10 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) FUNC_4(VAR_6[VAR_7]);
    FUNC_3(VAR_6);
    FUNC_6("\t(%dx LRANGE with 500 elements (pipelined): %.3fs)\n", VAR_8, (VAR_10-VAR_9)/1000000.0);

    VAR_6 = FUNC_5(sizeof(redisReply*)*VAR_8);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
        FUNC_7(VAR_5,"INCRBY incrkey %d", 1000000);
    VAR_9 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        FUNC_0(FUNC_9(VAR_5, (void*)&VAR_6[VAR_7]) == VAR_0);
        FUNC_0(VAR_6[VAR_7] != ((void*)0) && VAR_6[VAR_7]->type == VAR_2);
    }
    VAR_10 = FUNC_11();
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) FUNC_4(VAR_6[VAR_7]);
    FUNC_3(VAR_6);
    FUNC_6("\t(%dx INCRBY (pipelined): %.3fs)\n", VAR_8, (VAR_10-VAR_9)/1000000.0);

    FUNC_1(VAR_5, 0);
}

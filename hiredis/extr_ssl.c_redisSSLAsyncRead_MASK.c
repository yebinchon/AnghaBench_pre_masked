
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ pendingWrite; scalar_t__ wantRead; } ;
typedef TYPE_1__ redisSSLContext ;
struct TYPE_12__ {TYPE_1__* privdata; } ;
typedef TYPE_2__ redisContext ;
struct TYPE_13__ {TYPE_2__ c; } ;
typedef TYPE_3__ redisAsyncContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(redisAsyncContext *VAR_1) {
    int VAR_2;
    redisSSLContext *VAR_3 = VAR_1->c.privdata;
    redisContext *VAR_4 = &VAR_1->c;

    VAR_3->wantRead = 0;

    if (VAR_3->pendingWrite) {
        int VAR_5;


        VAR_3->pendingWrite = 0;
        VAR_2 = FUNC_4(VAR_4, &VAR_5);
        if (VAR_2 == VAR_0) {
            FUNC_2(VAR_1);
            return;
        } else if (!VAR_5) {
            FUNC_1(VAR_1);
        }
    }

    VAR_2 = FUNC_3(VAR_4);
    if (VAR_2 == VAR_0) {
        FUNC_2(VAR_1);
    } else {
        FUNC_0(VAR_1);
        FUNC_5(VAR_1);
    }
}

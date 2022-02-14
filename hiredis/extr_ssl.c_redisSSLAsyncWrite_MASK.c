
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int pendingWrite; scalar_t__ wantRead; } ;
typedef TYPE_1__ redisSSLContext ;
struct TYPE_11__ {TYPE_1__* privdata; } ;
typedef TYPE_2__ redisContext ;
struct TYPE_12__ {TYPE_2__ c; } ;
typedef TYPE_3__ redisAsyncContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,int*) ;

__attribute__((used)) static void FUNC_5(redisAsyncContext *VAR_1) {
    int VAR_2, VAR_3 = 0;
    redisSSLContext *VAR_4 = VAR_1->c.privdata;
    redisContext *VAR_5 = &VAR_1->c;

    VAR_4->pendingWrite = 0;
    VAR_2 = FUNC_4(VAR_5, &VAR_3);
    if (VAR_2 == VAR_0) {
        FUNC_3(VAR_1);
        return;
    }

    if (!VAR_3) {
        if (VAR_4->wantRead) {

            VAR_4->pendingWrite = 1;
            FUNC_2(VAR_1);
        } else {

            FUNC_1(VAR_1);
        }
    } else {

        FUNC_2(VAR_1);
    }


    FUNC_0(VAR_1);
}

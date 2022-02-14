
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
typedef TYPE_1__ redisContext ;
struct TYPE_7__ {scalar_t__ err; int replies; TYPE_1__ c; } ;
typedef TYPE_2__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(redisAsyncContext *VAR_2) {
    redisContext *VAR_3 = &(VAR_2->c);


    FUNC_0(VAR_2);

    if (VAR_2->err == 0) {

        int VAR_4 = FUNC_2(&VAR_2->replies,((void*)0));
        FUNC_3(VAR_4 == VAR_1);
    } else {


        VAR_3->flags |= VAR_0;
    }



    FUNC_1(VAR_2);
}

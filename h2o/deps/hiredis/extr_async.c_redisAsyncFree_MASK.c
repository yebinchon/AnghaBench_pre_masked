
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ redisContext ;
struct TYPE_6__ {TYPE_1__ c; } ;
typedef TYPE_2__ redisAsyncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(redisAsyncContext *VAR_2) {
    redisContext *VAR_3 = &(VAR_2->c);
    VAR_3->flags |= VAR_0;
    if (!(VAR_3->flags & VAR_1))
        FUNC_0(VAR_2);
}

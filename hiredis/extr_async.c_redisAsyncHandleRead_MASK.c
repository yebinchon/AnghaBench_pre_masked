
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int flags; TYPE_1__* funcs; } ;
typedef TYPE_2__ redisContext ;
struct TYPE_9__ {TYPE_2__ c; } ;
typedef TYPE_3__ redisAsyncContext ;
struct TYPE_7__ {int (* async_read ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(redisAsyncContext *VAR_2) {
    redisContext *VAR_3 = &(VAR_2->c);

    if (!(VAR_3->flags & VAR_0)) {

        if (FUNC_0(VAR_2) != VAR_1)
            return;

        if (!(VAR_3->flags & VAR_0))
            return;
    }

    VAR_3->funcs->async_read(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ started_count; int notify; int lock; struct TYPE_4__* queue; struct TYPE_4__* threads; } ;
typedef TYPE_1__ IjkThreadPoolContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(IjkThreadPoolContext *VAR_0)
{
    if(VAR_0 == ((void*)0) || VAR_0->started_count > 0) {
        return -1;
    }


    if(VAR_0->threads) {
        FUNC_0(VAR_0->threads);
        FUNC_0(VAR_0->queue);




        FUNC_3(&(VAR_0->lock));
        FUNC_2(&(VAR_0->lock));
        FUNC_1(&(VAR_0->notify));
    }
    FUNC_0(VAR_0);
    return 0;
}

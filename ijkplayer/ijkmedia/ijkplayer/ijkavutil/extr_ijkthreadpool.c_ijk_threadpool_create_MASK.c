
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_5__ {int queue_size; int started_count; int thread_count; int * threads; int * queue; int notify; int lock; } ;
typedef int IjkThreadPoolTask ;
typedef TYPE_1__ IjkThreadPoolContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ,void*) ;
 scalar_t__ FUNC_5 (int *,int *) ;

IjkThreadPoolContext *FUNC_6(int VAR_3, int VAR_4, int VAR_5)
{
    IjkThreadPoolContext *VAR_6;
    int VAR_7;

    if(VAR_3 <= 0 || VAR_3 > VAR_1 || VAR_4 <= 0 || VAR_4 > VAR_0) {
        return ((void*)0);
    }

    if((VAR_6 = (IjkThreadPoolContext *)FUNC_0(1, sizeof(IjkThreadPoolContext))) == ((void*)0)) {
        goto err;
    }

    VAR_6->queue_size = VAR_4;


    VAR_6->threads = (pthread_t *)FUNC_0(1, sizeof(pthread_t) * VAR_3);
    VAR_6->queue = (IjkThreadPoolTask *)FUNC_0
        (VAR_4, sizeof(IjkThreadPoolTask));


    if((FUNC_5(&(VAR_6->lock), ((void*)0)) != 0) ||
       (FUNC_3(&(VAR_6->notify), ((void*)0)) != 0) ||
       (VAR_6->threads == ((void*)0)) ||
       (VAR_6->queue == ((void*)0))) {
        goto err;
    }


    for(VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
        if(FUNC_4(&(VAR_6->threads[VAR_7]), ((void*)0),
                          VAR_2, (void*)VAR_6) != 0) {
            FUNC_1(VAR_6, 0);
            return ((void*)0);
        }
        VAR_6->thread_count++;
        VAR_6->started_count++;
    }

    return VAR_6;

 err:
    if(VAR_6) {
        FUNC_2(VAR_6);
    }
    return ((void*)0);
}

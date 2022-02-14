
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pending_count; int queue_size; int queue_tail; int lock; int notify; TYPE_1__* queue; scalar_t__ shutdown; } ;
struct TYPE_5__ {void* out_arg; void* in_arg; int * function; } ;
typedef int * Runable ;
typedef TYPE_1__ IjkThreadPoolTask ;
typedef TYPE_2__ IjkThreadPoolContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

int FUNC_4(IjkThreadPoolContext *VAR_5, Runable VAR_6,
                   void *VAR_7, void *VAR_8, int VAR_9)
{
    int VAR_10 = 0;
    int VAR_11;

    if(VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    if(FUNC_1(&(VAR_5->lock)) != 0) {
        return VAR_1;
    }

    if (VAR_5->pending_count == VAR_4 || VAR_5->pending_count == VAR_5->queue_size) {
        FUNC_2(&VAR_5->lock);
        return VAR_2;
    }

    if(VAR_5->pending_count == VAR_5->queue_size - 1) {
        int VAR_12 = (VAR_5->queue_size * 2) > VAR_4 ? VAR_4 : (VAR_5->queue_size * 2);
        IjkThreadPoolTask *VAR_13 = (IjkThreadPoolTask *)FUNC_3(VAR_5->queue, sizeof(IjkThreadPoolTask) * VAR_12);
        if (VAR_13) {
            VAR_5->queue = VAR_13;
            VAR_5->queue_size = VAR_12;
        }
    }

    VAR_11 = (VAR_5->queue_tail + 1) % VAR_5->queue_size;
    do {

        if(VAR_5->shutdown) {
            VAR_10 = VAR_3;
            break;
        }


        VAR_5->queue[VAR_5->queue_tail].function = VAR_6;
        VAR_5->queue[VAR_5->queue_tail].in_arg = VAR_7;
        VAR_5->queue[VAR_5->queue_tail].out_arg = VAR_8;
        VAR_5->queue_tail = VAR_11;
        VAR_5->pending_count += 1;


        if(FUNC_0(&(VAR_5->notify)) != 0) {
            VAR_10 = VAR_1;
            break;
        }
    } while(0);

    if(FUNC_2(&VAR_5->lock) != 0) {
        VAR_10 = VAR_1;
    }

    return VAR_10;
}

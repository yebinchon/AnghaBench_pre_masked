
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pending_count; scalar_t__ shutdown; size_t queue_head; int queue_size; int lock; int started_count; TYPE_1__* queue; int notify; } ;
struct TYPE_5__ {int out_arg; int in_arg; int (* function ) (int ,int ) ;} ;
struct TYPE_4__ {int out_arg; int in_arg; int (* function ) (int ,int ) ;} ;
typedef TYPE_2__ IjkThreadPoolTask ;
typedef TYPE_3__ IjkThreadPoolContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void *FUNC_5(void *VAR_2)
{
    IjkThreadPoolContext *VAR_3 = (IjkThreadPoolContext *)VAR_2;
    IjkThreadPoolTask VAR_4;

    for(;;) {
        FUNC_2(&(VAR_3->lock));

        while((VAR_3->pending_count == 0) && (!VAR_3->shutdown)) {
            FUNC_0(&(VAR_3->notify), &(VAR_3->lock));
        }

        if((VAR_3->shutdown == VAR_0) ||
           ((VAR_3->shutdown == VAR_1) &&
            (VAR_3->pending_count == 0))) {
               break;
           }


        VAR_4.function = VAR_3->queue[VAR_3->queue_head].function;
        VAR_4.in_arg = VAR_3->queue[VAR_3->queue_head].in_arg;
        VAR_4.out_arg = VAR_3->queue[VAR_3->queue_head].out_arg;
        VAR_3->queue_head = (VAR_3->queue_head + 1) % VAR_3->queue_size;
        VAR_3->pending_count -= 1;

        FUNC_3(&(VAR_3->lock));

        (*(VAR_4.function))(VAR_4.in_arg, VAR_4.out_arg);
    }

    VAR_3->started_count--;

    FUNC_3(&(VAR_3->lock));
    FUNC_1(((void*)0));
    return(((void*)0));
}

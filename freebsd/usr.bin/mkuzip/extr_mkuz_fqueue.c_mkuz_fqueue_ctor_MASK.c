
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkuz_fifo_queue {int wakeup_len; int cvar; int mtx; } ;


 int FUNC_0 (int,char*) ;
 struct mkuz_fifo_queue* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;

struct mkuz_fifo_queue *
FUNC_4(int VAR_0)
{
    struct mkuz_fifo_queue *VAR_1;

    VAR_1 = FUNC_1(sizeof(struct mkuz_fifo_queue));
    VAR_1->wakeup_len = VAR_0;
    if (FUNC_3(&VAR_1->mtx, ((void*)0)) != 0) {
        FUNC_0(1, "pthread_mutex_init() failed");
    }
    if (FUNC_2(&VAR_1->cvar, ((void*)0)) != 0) {
        FUNC_0(1, "pthread_cond_init() failed");
    }
    return (VAR_1);
}

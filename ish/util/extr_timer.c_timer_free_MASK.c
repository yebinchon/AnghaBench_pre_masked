
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer {int running; int dead; int lock; int thread; } ;


 int VAR_0 ;
 int FUNC_0 (struct timer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct timer *VAR_1) {
    FUNC_1(&VAR_1->lock);
    if (VAR_1->running) {
        VAR_1->running = 0;
        VAR_1->dead = 1;
        FUNC_2(VAR_1->thread, VAR_0);
        FUNC_3(&VAR_1->lock);
    } else {
        FUNC_3(&VAR_1->lock);
        if (!VAR_1->dead)
            FUNC_0(VAR_1);
    }
}

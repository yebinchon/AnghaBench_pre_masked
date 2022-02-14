
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct timer_spec {int value; int interval; } ;
struct timer {int running; int lock; int thread; int interval; struct timespec start; int end; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,struct timer*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct timespec,int ) ;
 int FUNC_5 (int ) ;
 struct timespec FUNC_6 () ;
 int FUNC_7 (int ,struct timespec) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct timer *VAR_2, struct timer_spec VAR_3, struct timer_spec *VAR_4) {
    FUNC_0(&VAR_2->lock);
    struct timespec VAR_5 = FUNC_6();
    if (VAR_4 != ((void*)0)) {
        VAR_4->value = FUNC_7(VAR_2->end, VAR_5);
        VAR_4->interval = VAR_2->interval;
    }

    VAR_2->start = VAR_5;
    VAR_2->end = FUNC_4(VAR_2->start, VAR_3.value);
    VAR_2->interval = VAR_3.interval;
    if (!FUNC_5(VAR_3.value)) {
        if (!VAR_2->running) {
            VAR_2->running = 1;
            FUNC_1(&VAR_2->thread, ((void*)0), VAR_1, VAR_2);
            FUNC_2(VAR_2->thread);
        }
    } else {
        if (VAR_2->running) {
            VAR_2->running = 0;
            FUNC_3(VAR_2->thread, VAR_0);
        }
    }
    FUNC_8(&VAR_2->lock);
    return 0;
}

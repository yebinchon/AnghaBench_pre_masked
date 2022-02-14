
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_callback_t ;
struct timer {int running; int dead; int lock; void* data; int callback; } ;


 int FUNC_0 (int *) ;
 struct timer* FUNC_1 (int) ;

struct timer *FUNC_2(timer_callback_t VAR_0, void *VAR_1) {
    struct timer *VAR_2 = FUNC_1(sizeof(struct timer));
    VAR_2->callback = VAR_0;
    VAR_2->data = VAR_1;
    VAR_2->running = 0;
    VAR_2->dead = 0;
    FUNC_0(&VAR_2->lock);
    return VAR_2;
}

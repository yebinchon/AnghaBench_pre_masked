
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct timer {int running; int lock; scalar_t__ dead; struct timespec interval; int start; int end; int data; int (* callback ) (int ) ;} ;


 int FUNC_0 (struct timer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct timespec*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct timespec) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct timespec) ;
 struct timespec FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void *FUNC_9(void *VAR_0) {
    struct timer *VAR_1 = VAR_0;
    FUNC_1(&VAR_1->lock);
    while (1) {
        struct timespec VAR_2 = FUNC_7(VAR_1->end, FUNC_5());
        while (VAR_1->running && FUNC_6(VAR_2)) {
            FUNC_8(&VAR_1->lock);
            FUNC_2(&VAR_2, ((void*)0));
            FUNC_1(&VAR_1->lock);
            VAR_2 = FUNC_7(VAR_1->end, FUNC_5());
        }
        if (VAR_1->running)
            VAR_1->callback(VAR_1->data);
        if (FUNC_6(VAR_1->interval)) {
            VAR_1->start = VAR_1->end;
            VAR_1->end = FUNC_4(VAR_1->start, VAR_1->interval);
        } else {
            break;
        }
    }
    VAR_1->running = 0;
    if (VAR_1->dead)
        FUNC_0(VAR_1);
    else
        FUNC_8(&VAR_1->lock);
    return ((void*)0);
}

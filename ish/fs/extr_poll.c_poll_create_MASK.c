
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll {int* notify_pipe; int lock; int poll_fds; scalar_t__ waiters; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct poll* FUNC_2 (int) ;

struct poll *FUNC_3() {
    struct poll *VAR_0 = FUNC_2(sizeof(struct poll));
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    VAR_0->waiters = 0;
    VAR_0->notify_pipe[0] = -1;
    VAR_0->notify_pipe[1] = -1;
    FUNC_0(&VAR_0->poll_fds);
    FUNC_1(&VAR_0->lock);
    return VAR_0;
}

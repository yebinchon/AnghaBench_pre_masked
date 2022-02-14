
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_fd {int fds; int polls; } ;
struct poll {int lock; } ;
struct fd {int poll_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct poll_fd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct poll_fd* FUNC_3 (struct poll*,struct fd*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct poll *VAR_1, struct fd *VAR_2) {
    int VAR_3;
    FUNC_2(&VAR_2->poll_lock);
    FUNC_2(&VAR_1->lock);
    struct poll_fd *VAR_4 = FUNC_3(VAR_1, VAR_2);
    if (VAR_4 == ((void*)0)) {
        VAR_3 = VAR_0;
        goto out;
    }

    FUNC_1(&VAR_4->polls);
    FUNC_1(&VAR_4->fds);
    FUNC_0(VAR_4);

    VAR_3 = 0;
out:
    FUNC_4(&VAR_1->lock);
    FUNC_4(&VAR_2->poll_lock);
    return VAR_3;
}

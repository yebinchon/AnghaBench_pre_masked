
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union poll_fd_info {int dummy; } poll_fd_info ;
struct poll_fd {int types; union poll_fd_info info; } ;
struct poll {int lock; } ;
struct fd {int poll_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct poll_fd* FUNC_1 (struct poll*,struct fd*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct poll *VAR_1, struct fd *VAR_2, int VAR_3, union poll_fd_info VAR_4) {
    int VAR_5;
    FUNC_0(&VAR_2->poll_lock);
    FUNC_0(&VAR_1->lock);
    struct poll_fd *VAR_6 = FUNC_1(VAR_1, VAR_2);
    if (VAR_6 == ((void*)0)) {
        VAR_5 = VAR_0;
        goto out;
    }

    VAR_6->types = VAR_3;
    VAR_6->info = VAR_4;

    VAR_5 = 0;
out:
    FUNC_2(&VAR_1->lock);
    FUNC_2(&VAR_2->poll_lock);
    return VAR_5;
}

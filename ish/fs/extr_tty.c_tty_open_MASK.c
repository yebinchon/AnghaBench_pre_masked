
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty {scalar_t__ session; int lock; int fds_lock; int fds; } ;
struct fd {int flags; int tty_other_fds; struct tty* tty; } ;
struct TYPE_4__ {scalar_t__ pid; TYPE_1__* group; } ;
struct TYPE_3__ {scalar_t__ sid; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,struct tty*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct tty *VAR_3, struct fd *VAR_4) {
    VAR_4->tty = VAR_3;

    FUNC_1(&VAR_3->fds_lock);
    FUNC_0(&VAR_3->fds, &VAR_4->tty_other_fds);
    FUNC_3(&VAR_3->fds_lock);

    if (!(VAR_4->flags & VAR_0)) {



        FUNC_1(&VAR_2);
        FUNC_1(&VAR_3->lock);
        if (VAR_3->session == 0 && VAR_1->group->sid == VAR_1->pid)
            FUNC_2(VAR_1->group, VAR_3);
        FUNC_3(&VAR_3->lock);
        FUNC_3(&VAR_2);
    }

    return 0;
}

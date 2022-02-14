
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd {TYPE_1__* tty; int tty_other_fds; } ;
struct TYPE_2__ {int fds_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fd *VAR_1) {
    if (VAR_1->tty != ((void*)0)) {
        FUNC_1(&VAR_1->tty->fds_lock);
        FUNC_0(&VAR_1->tty_other_fds);
        FUNC_3(&VAR_1->tty->fds_lock);
        FUNC_1(&VAR_0);
        FUNC_2(VAR_1->tty);
        FUNC_3(&VAR_0);
    }
    return 0;
}

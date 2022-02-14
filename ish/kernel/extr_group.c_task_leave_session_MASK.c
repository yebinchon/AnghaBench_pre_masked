
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tgroup {TYPE_1__* tty; int sid; int session; } ;
struct task {struct tgroup* group; } ;
struct TYPE_4__ {int session; } ;
struct TYPE_3__ {int lock; scalar_t__ session; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;

void FUNC_6(struct task *VAR_1) {
    struct tgroup *VAR_2 = VAR_1->group;
    FUNC_1(&VAR_2->session);
    if (VAR_2->tty) {
        FUNC_2(&VAR_0);
        if (FUNC_0(&FUNC_3(VAR_2->sid)->session)) {
            FUNC_2(&VAR_2->tty->lock);
            VAR_2->tty->session = 0;
            FUNC_5(&VAR_2->tty->lock);
        }
        FUNC_4(VAR_2->tty);
        VAR_2->tty = ((void*)0);
        FUNC_5(&VAR_0);
    }
}

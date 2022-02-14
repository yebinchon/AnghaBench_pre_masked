
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_driver {int ** ttys; TYPE_1__* ops; } ;
struct TYPE_4__ {struct tty* other; } ;
struct tty {scalar_t__ refcount; size_t num; int lock; TYPE_2__ pty; struct tty_driver* driver; int produced; } ;
struct TYPE_3__ {int (* cleanup ) (struct tty*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (int *) ;
 struct tty_driver VAR_0 ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct tty *VAR_1) {
    FUNC_2(&VAR_1->lock);
    if (--VAR_1->refcount == 0) {
        struct tty_driver *VAR_2 = VAR_1->driver;
        if (VAR_2->ops->cleanup)
            VAR_2->ops->cleanup(VAR_1);
        VAR_2->ttys[VAR_1->num] = ((void*)0);
        FUNC_5(&VAR_1->lock);
        FUNC_0(&VAR_1->produced);
        FUNC_1(VAR_1);
    } else {

        struct tty *VAR_3 = ((void*)0);
        if (VAR_1->driver == &VAR_0 && VAR_1->refcount == 1)
            VAR_3 = VAR_1->pty.other;
        FUNC_5(&VAR_1->lock);
        if (VAR_3 != ((void*)0)) {
            FUNC_2(&VAR_3->lock);
            FUNC_4(VAR_3);
            FUNC_5(&VAR_3->lock);
        }
    }
}

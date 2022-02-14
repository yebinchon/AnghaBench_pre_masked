
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tty* other; } ;
struct tty {int refcount; int lock; scalar_t__ ever_opened; TYPE_1__ pty; int * driver; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct tty *VAR_1) {
    if (VAR_1->driver != &VAR_0)
        return 0;

    struct tty *VAR_2 = VAR_1->pty.other;

    FUNC_0(&VAR_2->lock);
    bool VAR_3 = VAR_2->ever_opened && VAR_2->refcount == 1;
    FUNC_1(&VAR_2->lock);
    return VAR_3;
}

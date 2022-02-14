
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct tty* other; } ;
struct tty {int lock; TYPE_1__ pty; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty *VAR_0) {
    struct tty *VAR_1 = VAR_0->pty.other;
    VAR_1->pty.other = ((void*)0);
    FUNC_0(&VAR_1->lock);
    FUNC_1(VAR_1);
    FUNC_3(&VAR_1->lock);
    FUNC_2(VAR_1);
}

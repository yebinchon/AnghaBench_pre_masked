
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int locked; struct tty* other; } ;
struct TYPE_6__ {scalar_t__ lflags; scalar_t__ oflags; scalar_t__ iflags; } ;
struct tty {size_t num; int refcount; TYPE_1__ pty; TYPE_2__ termios; } ;
struct TYPE_7__ {struct tty** ttys; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (struct tty*) ;
 struct tty* FUNC_1 (TYPE_3__*,int ,size_t) ;

__attribute__((used)) static int FUNC_2(struct tty *VAR_2) {
    VAR_2->termios.iflags = 0;
    VAR_2->termios.oflags = 0;
    VAR_2->termios.lflags = 0;

    struct tty *VAR_3 = FUNC_1(&VAR_1, VAR_0, VAR_2->num);
    VAR_3->refcount = 1;
    VAR_1.ttys[VAR_2->num] = VAR_3;
    VAR_2->pty.other = VAR_3;
    VAR_3->pty.other = VAR_2;
    VAR_3->pty.locked = 1;
    FUNC_0(VAR_3);
    return 0;
}

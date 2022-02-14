
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lflags; } ;
struct tty {scalar_t__ bufsize; scalar_t__ packet_flags; int lock; int * driver; TYPE_1__ termios; scalar_t__ hung_up; } ;
struct fd {struct tty* tty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct tty*) ;
 int VAR_6 ;
 size_t FUNC_2 (struct tty*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct fd *VAR_7) {
    struct tty *VAR_8 = VAR_7->tty;
    FUNC_0(&VAR_8->lock);
    int VAR_9 = 0;
    VAR_9 |= VAR_5;
    if (VAR_8->hung_up) {
        VAR_9 |= VAR_4 | VAR_5 | VAR_1 | VAR_2;
    } else if (FUNC_1(VAR_8)) {
        VAR_9 |= VAR_4 | VAR_2;
    } else if (VAR_8->termios.lflags & VAR_0) {
        if (FUNC_2(VAR_8) != (size_t) -1)
            VAR_9 |= VAR_4;
    } else {
        if (VAR_8->bufsize > 0)
            VAR_9 |= VAR_4;
    }
    if (VAR_8->driver == &VAR_6 && VAR_8->packet_flags != 0)
        VAR_9 |= VAR_3;
    FUNC_3(&VAR_8->lock);
    return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winsize_ {int dummy; } ;
struct termios_ {int dummy; } ;
struct TYPE_2__ {struct tty* other; } ;
struct tty {int lock; int * driver; struct winsize_ winsize; struct termios_ termios; int consumed; int bufsize; TYPE_1__ pty; } ;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct tty*,struct winsize_) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty *VAR_2, int VAR_3, void *VAR_4) {
    int VAR_5 = 0;
    struct tty *VAR_6 = VAR_2;
    if (VAR_2->driver == &VAR_1) {
        VAR_6 = VAR_2->pty.other;
        FUNC_0(&VAR_6->lock);
    }

    switch (VAR_3) {
        case 133:
            *(struct termios_ *) VAR_4 = VAR_6->termios;
            break;
        case 132:
            VAR_6->bufsize = 0;
            FUNC_1(&VAR_6->consumed);
        case 131:

        case 130:
            VAR_6->termios = *(struct termios_ *) VAR_4;
            break;

        case 129:
            *(struct winsize_ *) VAR_4 = VAR_6->winsize;
            break;
        case 128:
            FUNC_2(VAR_6, *(struct winsize_ *) VAR_4);
            break;

        default:
            VAR_5 = VAR_0;
            break;
    }

    if (VAR_2->driver == &VAR_1)
        FUNC_3(&VAR_6->lock);
    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_driver {int dummy; } ;
struct TYPE_2__ {int iflags; int oflags; int lflags; int cc; scalar_t__ cflags; } ;
struct tty {int type; int num; int hung_up; int ever_opened; scalar_t__ packet_flags; scalar_t__ bufsize; int * buf_flag; int consumed; int produced; int fds_lock; int lock; int winsize; TYPE_1__ termios; int fds; scalar_t__ fg_group; scalar_t__ session; struct tty_driver* driver; scalar_t__ refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tty* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,int,int) ;

struct tty *FUNC_6(struct tty_driver *VAR_12, int VAR_13, int VAR_14) {
    struct tty *VAR_15 = FUNC_3(sizeof(struct tty));
    if (VAR_15 == ((void*)0))
        return ((void*)0);

    VAR_15->refcount = 0;
    VAR_15->driver = VAR_12;
    VAR_15->type = VAR_13;
    VAR_15->num = VAR_14;
    VAR_15->hung_up = 0;
    VAR_15->ever_opened = 0;
    VAR_15->session = 0;
    VAR_15->fg_group = 0;
    FUNC_1(&VAR_15->fds);

    VAR_15->termios.iflags = VAR_6 | VAR_9;
    VAR_15->termios.oflags = VAR_11 | VAR_10;
    VAR_15->termios.cflags = 0;
    VAR_15->termios.lflags = VAR_8 | VAR_5 | VAR_4 | VAR_1 | VAR_3 | VAR_0 | VAR_2 | VAR_7;

    FUNC_4(VAR_15->termios.cc, "\003\034\177\025\004\0\1\0\021\023\032\0\022\017\027\026\0\0\0", 19);
    FUNC_5(&VAR_15->winsize, 0, sizeof(VAR_15->winsize));

    FUNC_2(&VAR_15->lock);
    FUNC_2(&VAR_15->fds_lock);
    FUNC_0(&VAR_15->produced);
    FUNC_0(&VAR_15->consumed);
    FUNC_5(VAR_15->buf_flag, 0, sizeof(VAR_15->buf_flag));
    VAR_15->bufsize = 0;
    VAR_15->packet_flags = 0;

    return VAR_15;
}

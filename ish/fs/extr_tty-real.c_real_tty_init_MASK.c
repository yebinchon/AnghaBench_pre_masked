
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct winsize {int ws_ypixel; int ws_xpixel; int ws_row; int ws_col; } ;
struct TYPE_2__ {int ypixel; int xpixel; int row; int col; } ;
struct tty {scalar_t__ num; int thread; int termios; TYPE_1__ winsize; } ;
struct termios {int c_oflag; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct termios*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,struct winsize*) ;
 struct termios VAR_9 ;
 scalar_t__ FUNC_4 (int *,int *,void* (*) (void*),struct tty*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_6 (int ,struct termios*) ;
 scalar_t__ FUNC_7 (int ,int ,struct termios*) ;
 int FUNC_8 (struct termios) ;

int FUNC_9(struct tty *VAR_11) {
    if (VAR_11->num != VAR_3)
        return 0;

    struct winsize VAR_12;
    if (FUNC_3(VAR_4, VAR_6, &VAR_12) < 0) {
        if (VAR_8 == VAR_0)
            goto notty;
        return FUNC_2();
    }
    VAR_11->winsize.col = VAR_12.ws_col;
    VAR_11->winsize.row = VAR_12.ws_row;
    VAR_11->winsize.xpixel = VAR_12.ws_xpixel;
    VAR_11->winsize.ypixel = VAR_12.ws_ypixel;

    struct termios VAR_13;
    if (FUNC_6(VAR_4, &VAR_13) < 0)
        return FUNC_2();
    VAR_11->termios = FUNC_8(VAR_13);

    VAR_9 = VAR_13;
    FUNC_1(&VAR_13);



    if (FUNC_7(VAR_4, VAR_5, &VAR_13) < 0)
        FUNC_0("failed to set terminal to raw mode");
notty:

    if (FUNC_4(&VAR_11->thread, ((void*)0), (void *(*)(void *)) VAR_10, VAR_11) < 0)

        return VAR_7;
    FUNC_5(VAR_11->thread);
    return 0;
}

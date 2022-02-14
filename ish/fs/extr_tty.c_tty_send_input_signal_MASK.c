
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lflags; unsigned char* cc; } ;
struct tty {scalar_t__ fg_group; scalar_t__ bufsize; TYPE_1__ termios; } ;
typedef int sigset_t_ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static bool FUNC_1(struct tty *VAR_8, char VAR_9, sigset_t_ *VAR_10) {
    if (!(VAR_8->termios.lflags & VAR_0))
        return 0;
    unsigned char *VAR_11 = VAR_8->termios.cc;
    int VAR_12;
    if (VAR_9 == VAR_11[VAR_5])
        VAR_12 = VAR_2;
    else if (VAR_9 == VAR_11[VAR_6])
        VAR_12 = VAR_3;
    else if (VAR_9 == VAR_11[VAR_7])
        VAR_12 = VAR_4;
    else
        return 0;

    if (VAR_8->fg_group != 0) {
        if (!(VAR_8->termios.lflags & VAR_1))
            VAR_8->bufsize = 0;
        FUNC_0(VAR_10, VAR_12);
    }
    return 1;
}

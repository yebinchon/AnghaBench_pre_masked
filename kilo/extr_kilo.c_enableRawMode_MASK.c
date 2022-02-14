
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termios {int c_iflag; int c_lflag; int* c_cc; int c_cflag; int c_oflag; } ;
struct TYPE_2__ {int rawmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ) ;
 struct termios VAR_19 ;
 int FUNC_2 (int,struct termios*) ;
 scalar_t__ FUNC_3 (int,int ,struct termios*) ;

int FUNC_4(int VAR_20) {
    struct termios VAR_21;

    if (VAR_2.rawmode) return 0;
    if (!FUNC_1(VAR_13)) goto fatal;
    FUNC_0(VAR_17);
    if (FUNC_2(VAR_20,&VAR_19) == -1) goto fatal;

    VAR_21 = VAR_19;


    VAR_21.c_iflag &= ~(VAR_0 | VAR_6 | VAR_8 | VAR_10 | VAR_11);

    VAR_21.c_oflag &= ~(VAR_12);

    VAR_21.c_cflag |= (VAR_1);


    VAR_21.c_lflag &= ~(VAR_3 | VAR_5 | VAR_7 | VAR_9);

    VAR_21.c_cc[VAR_15] = 0;
    VAR_21.c_cc[VAR_16] = 1;


    if (FUNC_3(VAR_20,VAR_14,&VAR_21) < 0) goto fatal;
    VAR_2.rawmode = 1;
    return 0;

fatal:
    VAR_18 = VAR_4;
    return -1;
}

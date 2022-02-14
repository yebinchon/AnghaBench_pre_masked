
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termios {int c_lflag; int c_oflag; int c_iflag; } ;
struct TYPE_2__ {int c_iflag; } ;
struct prompt {int * TermMode; int fd_in; TYPE_1__ oldtio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,struct termios*) ;
 int FUNC_2 (int ,int ,struct termios*) ;

void
FUNC_3(struct prompt *VAR_8)
{
  struct termios VAR_9;
  int VAR_10;

  FUNC_1(VAR_8->fd_in, &VAR_9);
  VAR_9.c_lflag |= (VAR_0 | VAR_4 | VAR_3);
  VAR_9.c_iflag = VAR_8->oldtio.c_iflag;
  VAR_9.c_oflag |= VAR_5;
  FUNC_2(VAR_8->fd_in, VAR_7, &VAR_9);

  VAR_10 = FUNC_0(VAR_8->fd_in, VAR_1, 0);
  if (VAR_10 > 0) {
    VAR_10 |= VAR_6;
    FUNC_0(VAR_8->fd_in, VAR_2, VAR_10);
  }

  VAR_8->TermMode = ((void*)0);
}

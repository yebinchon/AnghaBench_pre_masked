
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_lflag; int* c_cc; int c_cflag; int c_oflag; scalar_t__ c_iflag; } ;
struct prompt {int fd_in; struct termios comtio; struct termios oldtio; } ;


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
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,struct termios*) ;
 int FUNC_2 (int,int ,struct termios*) ;

void
FUNC_3(struct prompt *VAR_14)
{
  int VAR_15, VAR_16 = VAR_14 ? VAR_14->fd_in : VAR_8;
  struct termios VAR_17;

  VAR_15 = FUNC_0(VAR_16, VAR_2, 0);
  if (VAR_15 > 0) {
    VAR_15 |= VAR_7;
    FUNC_0(VAR_16, VAR_3, VAR_15);
  }

  if (VAR_14)
    VAR_17 = VAR_14->oldtio;
  else
    FUNC_1(VAR_16, &VAR_17);

  VAR_17.c_lflag &= ~(VAR_1 | VAR_5 | VAR_4);
  VAR_17.c_iflag = 0;
  VAR_17.c_oflag &= ~VAR_6;
  if (!VAR_14)
    VAR_17.c_cc[VAR_10] = VAR_13;
  VAR_17.c_cc[VAR_11] = 1;
  VAR_17.c_cc[VAR_12] = 0;
  VAR_17.c_cflag |= VAR_0;
  FUNC_2(VAR_16, VAR_9, &VAR_17);
  if (VAR_14)
    VAR_14->comtio = VAR_17;
}

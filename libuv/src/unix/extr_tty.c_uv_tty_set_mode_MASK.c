
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct termios {int c_iflag; int c_lflag; int* c_cc; int c_cflag; int c_oflag; } ;
struct TYPE_4__ {int mode; struct termios orig_termios; } ;
typedef TYPE_1__ uv_tty_t ;
typedef int uv_tty_mode_t ;


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



 int FUNC_0 (int ) ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 struct termios VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (int,struct termios*) ;
 scalar_t__ FUNC_2 (int,int ,struct termios*) ;
 int VAR_17 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct termios*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(uv_tty_t* VAR_18, uv_tty_mode_t VAR_19) {
  struct termios VAR_20;
  int VAR_21;

  if (VAR_18->mode == (int) VAR_19)
    return 0;

  VAR_21 = FUNC_3(VAR_18);
  if (VAR_18->mode == 129 && VAR_19 != 129) {
    if (FUNC_1(VAR_21, &VAR_18->orig_termios))
      return FUNC_0(VAR_14);


    FUNC_5(&VAR_17);
    if (VAR_16 == -1) {
      VAR_15 = VAR_18->orig_termios;
      VAR_16 = VAR_21;
    }
    FUNC_6(&VAR_17);
  }

  VAR_20 = VAR_18->orig_termios;
  switch (VAR_19) {
    case 129:
      break;
    case 128:
      VAR_20.c_iflag &= ~(VAR_0 | VAR_4 | VAR_6 | VAR_8 | VAR_9);
      VAR_20.c_oflag |= (VAR_10);
      VAR_20.c_cflag |= (VAR_1);
      VAR_20.c_lflag &= ~(VAR_2 | VAR_3 | VAR_5 | VAR_7);
      VAR_20.c_cc[VAR_12] = 1;
      VAR_20.c_cc[VAR_13] = 0;
      break;
    case 130:
      FUNC_4(&VAR_20);
      break;
  }


  if (FUNC_2(VAR_21, VAR_11, &VAR_20))
    return FUNC_0(VAR_14);

  VAR_18->mode = VAR_19;
  return 0;
}

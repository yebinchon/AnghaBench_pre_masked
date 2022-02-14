
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct termios {int c_cflag; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {int parity; } ;
struct physical {scalar_t__ fd; TYPE_1__ link; TYPE_2__ cfg; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ,char const*) ;
 int FUNC_2 (scalar_t__,struct termios*) ;
 int FUNC_3 (scalar_t__,int ,struct termios*) ;

int
FUNC_4(struct physical *VAR_5, const char *VAR_6)
{
  struct termios VAR_7;
  int VAR_8;

  VAR_8 = FUNC_0(VAR_6);
  if (VAR_8 > 0) {
    VAR_5->cfg.parity = VAR_8;
    if (VAR_5->fd >= 0) {
      FUNC_2(VAR_5->fd, &VAR_7);
      VAR_7.c_cflag &= ~(VAR_0 | VAR_3 | VAR_2);
      VAR_7.c_cflag |= VAR_8;
      FUNC_3(VAR_5->fd, VAR_4, &VAR_7);
    }
    return 0;
  }
  FUNC_1(VAR_1, "%s: %s: Invalid parity\n", VAR_5->link.name, VAR_6);
  return -1;
}

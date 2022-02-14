
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttydevice {int mbits; } ;
struct termios {int c_cflag; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {scalar_t__ rts_cts; } ;
struct physical {scalar_t__ type; scalar_t__ fd; TYPE_2__ link; TYPE_1__ cfg; int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct physical*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ttydevice*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct termios*) ;
 struct ttydevice* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (struct physical*) ;
 int FUNC_7 (scalar_t__,struct termios*) ;
 int FUNC_8 (scalar_t__,int ,struct termios*) ;

__attribute__((used)) static int
FUNC_9(struct physical *VAR_12)
{
  struct ttydevice *VAR_13 = FUNC_3(VAR_12->handler);
  struct termios VAR_14;
  int VAR_15;

  FUNC_5(VAR_6, "%s: Entering tty_Raw\n", VAR_12->link.name);

  if (VAR_12->type != VAR_10 && VAR_12->fd >= 0 && !FUNC_1(VAR_13))
    FUNC_5(VAR_6, "%s: Raw: descriptor = %d, mbits = %x\n",
              VAR_12->link.name, VAR_12->fd, VAR_13->mbits);

  if (!FUNC_6(VAR_12)) {

    if (!FUNC_0(VAR_12))

    {
      FUNC_7(VAR_12->fd, &VAR_14);
      FUNC_2(&VAR_14);
      if (VAR_12->cfg.rts_cts)
        VAR_14.c_cflag |= VAR_1 | VAR_0 | VAR_2;
      else
        VAR_14.c_cflag |= VAR_1;

      if (VAR_12->type != VAR_9)
        VAR_14.c_cflag |= VAR_5;

      if (FUNC_8(VAR_12->fd, VAR_11, &VAR_14) == -1)
        FUNC_5(VAR_7, "%s: tcsetattr: Failed configuring device\n",
                   VAR_12->link.name);
    }
  }

  VAR_15 = FUNC_4(VAR_12->fd, VAR_3, 0);
  if (VAR_15 < 0)
    return 0;
  FUNC_4(VAR_12->fd, VAR_4, VAR_15 | VAR_8);

  return 1;
}

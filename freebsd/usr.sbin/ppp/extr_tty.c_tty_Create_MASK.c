
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {scalar_t__ necessity; } ;
struct device {int name; TYPE_2__ cd; } ;
struct termios {int c_cflag; scalar_t__ c_oflag; scalar_t__ c_iflag; } ;
struct TYPE_6__ {int fd; int disc; scalar_t__ speed; } ;
struct ttydevice {int mbits; char* hook; struct device dev; struct termios ios; TYPE_1__ real; int Timer; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int parity; int speed; scalar_t__ rts_cts; TYPE_2__ cd; } ;
struct TYPE_8__ {char* full; } ;
struct physical {int fd; scalar_t__ type; TYPE_5__ link; TYPE_4__ cfg; TYPE_3__ name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int VAR_19 ;
 int FUNC_1 (struct termios*) ;
 int FUNC_2 (struct termios*,int ) ;
 int FUNC_3 (int) ;
 int VAR_20 ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct ttydevice*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int,...) ;
 struct ttydevice* FUNC_8 (int) ;
 int FUNC_9 (struct device*,int *,int) ;
 int FUNC_10 (int *,char,int) ;
 int FUNC_11 (struct physical*,int ) ;
 int FUNC_12 (struct physical*,int ,int ) ;
 char* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int,struct termios*) ;
 int FUNC_16 (int,int ,struct termios*) ;
 int FUNC_17 (struct physical*) ;
 int FUNC_18 (int) ;

struct device *
FUNC_19(struct physical *VAR_21)
{
  struct ttydevice *VAR_22;
  struct termios VAR_23;
  int VAR_24;

  if (VAR_21->fd < 0 || !FUNC_6(VAR_21->fd))

    return ((void*)0);

  if (*VAR_21->name.full == '\0') {
    FUNC_11(VAR_21, FUNC_18(VAR_21->fd));
    FUNC_7(VAR_10, "%s: Input is a tty (%s)\n",
               VAR_21->link.name, VAR_21->name.full);
  } else
    FUNC_7(VAR_10, "%s: Opened %s\n", VAR_21->link.name, VAR_21->name.full);



  if ((VAR_22 = FUNC_8(sizeof *VAR_22)) == ((void*)0)) {

    FUNC_3(VAR_21->fd);
    VAR_21->fd = -1;
    return ((void*)0);
  }

  FUNC_9(&VAR_22->dev, &VAR_19, sizeof VAR_22->dev);
  FUNC_10(&VAR_22->Timer, '\0', sizeof VAR_22->Timer);
  VAR_22->mbits = -1;

  VAR_22->real.speed = 0;
  VAR_22->real.fd = -1;
  VAR_22->real.disc = -1;
  *VAR_22->hook = '\0';

  FUNC_15(VAR_21->fd, &VAR_23);
  VAR_22->ios = VAR_23;

  if (VAR_21->cfg.cd.necessity != VAR_1)

    VAR_22->dev.cd = VAR_21->cfg.cd;

  FUNC_7(VAR_10, "%s: tty_Create: physical (get): fd = %d,"
             " iflag = %lx, oflag = %lx, cflag = %lx\n", VAR_21->link.name, VAR_21->fd,
             (u_long)VAR_23.c_iflag, (u_long)VAR_23.c_oflag, (u_long)VAR_23.c_cflag);

  FUNC_1(&VAR_23);
  if (VAR_21->cfg.rts_cts)
    VAR_23.c_cflag |= VAR_2 | VAR_0 | VAR_3;
  else {
    VAR_23.c_cflag |= VAR_2;
    VAR_23.c_iflag |= VAR_8;
  }
  VAR_23.c_iflag |= VAR_9;
  if (VAR_21->type != VAR_16)
    VAR_23.c_cflag |= VAR_7;

  if (VAR_21->type != VAR_17) {

      VAR_23.c_cflag &= ~(VAR_4 | VAR_14 | VAR_13);
      VAR_23.c_cflag |= VAR_21->cfg.parity;
      if (FUNC_2(&VAR_23, FUNC_0(VAR_21->cfg.speed)) == -1)
 FUNC_7(VAR_11, "%s: %s: Unable to set speed to %d\n",
    VAR_21->link.name, VAR_21->name.full, VAR_21->cfg.speed);
  }

  if (FUNC_16(VAR_21->fd, VAR_18, &VAR_23) == -1) {
    FUNC_7(VAR_11, "%s: tcsetattr: Failed configuring device\n",
               VAR_21->link.name);
    if (VAR_21->type != VAR_17 && VAR_21->cfg.speed > 115200)
      FUNC_7(VAR_11, "%.*s             Perhaps the speed is unsupported\n",
                 (int)FUNC_14(VAR_21->link.name), "");
  }

  FUNC_7(VAR_10, "%s: physical (put): iflag = %lx, oflag = %lx, "
            "cflag = %lx\n", VAR_21->link.name, (u_long)VAR_23.c_iflag,
            (u_long)VAR_23.c_oflag, (u_long)VAR_23.c_cflag);

  VAR_24 = FUNC_4(VAR_21->fd, VAR_5, 0);
  if (VAR_24 < 0) {


    FUNC_7(VAR_11, "%s: Open: Cannot get physical flags: %s\n",
               VAR_21->link.name, FUNC_13(VAR_20));
    FUNC_17(VAR_21);
    FUNC_3(VAR_21->fd);
    VAR_21->fd = -1;
    FUNC_5(VAR_22);
    return ((void*)0);
  } else
    FUNC_4(VAR_21->fd, VAR_6, VAR_24 & ~VAR_12);

  FUNC_12(VAR_21, VAR_22->dev.name, VAR_15);

  return &VAR_22->dev;
}

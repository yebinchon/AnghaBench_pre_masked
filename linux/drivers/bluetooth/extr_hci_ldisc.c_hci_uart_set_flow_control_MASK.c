
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ktermios {int c_cflag; } ;
struct tty_struct {struct ktermios termios; TYPE_2__* driver; } ;
struct hci_uart {scalar_t__ serdev; struct tty_struct* tty; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* tiocmget ) (struct tty_struct*) ;int (* tiocmset ) (struct tty_struct*,unsigned int,unsigned int) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct tty_struct*,unsigned int,unsigned int) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (struct tty_struct*,unsigned int,unsigned int) ;
 int FUNC_7 (struct tty_struct*,struct ktermios*) ;

void FUNC_8(struct hci_uart *VAR_6, bool VAR_7)
{
 struct tty_struct *VAR_8 = VAR_6->tty;
 struct ktermios VAR_9;
 int VAR_10;
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = 0;

 if (VAR_6->serdev) {
  FUNC_1(VAR_6->serdev, !VAR_7);
  FUNC_2(VAR_6->serdev, !VAR_7);
  return;
 }

 if (VAR_7) {

  VAR_9 = VAR_8->termios;
  VAR_9.c_cflag &= ~VAR_0;
  VAR_10 = FUNC_7(VAR_8, &VAR_9);
  FUNC_0("Disabling hardware flow control: %s",
         VAR_10 ? "failed" : "success");



  VAR_10 = VAR_8->driver->ops->tiocmget(VAR_8);
  FUNC_0("Current tiocm 0x%x", VAR_10);

  VAR_11 &= ~(VAR_4 | VAR_5);
  VAR_12 = ~VAR_11;
  VAR_11 &= VAR_1 | VAR_5 | VAR_3 |
         VAR_4 | VAR_2;
  VAR_12 &= VAR_1 | VAR_5 | VAR_3 |
    VAR_4 | VAR_2;
  VAR_10 = VAR_8->driver->ops->tiocmset(VAR_8, VAR_11, VAR_12);
  FUNC_0("Clearing RTS: %s", VAR_10 ? "failed" : "success");
 } else {

  VAR_10 = VAR_8->driver->ops->tiocmget(VAR_8);
  FUNC_0("Current tiocm 0x%x", VAR_10);

  VAR_11 |= (VAR_4 | VAR_5);
  VAR_12 = ~VAR_11;
  VAR_11 &= VAR_1 | VAR_5 | VAR_3 |
         VAR_4 | VAR_2;
  VAR_12 &= VAR_1 | VAR_5 | VAR_3 |
    VAR_4 | VAR_2;
  VAR_10 = VAR_8->driver->ops->tiocmset(VAR_8, VAR_11, VAR_12);
  FUNC_0("Setting RTS: %s", VAR_10 ? "failed" : "success");


  VAR_9 = VAR_8->termios;
  VAR_9.c_cflag |= VAR_0;
  VAR_10 = FUNC_7(VAR_8, &VAR_9);
  FUNC_0("Enabling hardware flow control: %s",
         VAR_10 ? "failed" : "success");
 }
}

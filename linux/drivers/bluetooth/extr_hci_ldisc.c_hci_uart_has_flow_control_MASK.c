
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hci_uart {TYPE_3__* tty; scalar_t__ serdev; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ tiocmset; scalar_t__ tiocmget; } ;



bool FUNC_0(struct hci_uart *VAR_0)
{

 if (VAR_0->serdev)
  return 1;

 if (VAR_0->tty->driver->ops->tiocmget && VAR_0->tty->driver->ops->tiocmset)
  return 1;

 return 0;
}

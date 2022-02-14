
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int dummy; } ;
struct chan {int fd; TYPE_1__* ops; scalar_t__ primary; } ;
struct TYPE_2__ {scalar_t__ winch; } ;


 int FUNC_0 (int ,struct tty_port*) ;

void FUNC_1(struct chan *VAR_0, struct tty_port *VAR_1)
{
 if (VAR_0 && VAR_0->primary && VAR_0->ops->winch)
  FUNC_0(VAR_0->fd, VAR_1);
}

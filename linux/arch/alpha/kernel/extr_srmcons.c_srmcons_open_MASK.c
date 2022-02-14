
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty_port* port; struct srmcons_private* driver_data; } ;
struct tty_port {int lock; struct tty_struct* tty; } ;
struct srmcons_private {int timer; struct tty_port port; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct srmcons_private VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct tty_struct *VAR_2, struct file *VAR_3)
{
 struct srmcons_private *VAR_4 = &VAR_1;
 struct tty_port *VAR_5 = &VAR_4->port;
 unsigned long VAR_6;

 FUNC_1(&VAR_5->lock, VAR_6);

 if (!VAR_5->tty) {
  VAR_2->driver_data = VAR_4;
  VAR_2->port = VAR_5;
  VAR_5->tty = VAR_2;
  FUNC_0(&VAR_4->timer, VAR_0 + 10);
 }

 FUNC_2(&VAR_5->lock, VAR_6);

 return 0;
}

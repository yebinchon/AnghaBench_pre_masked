
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int count; struct srmcons_private* driver_data; } ;
struct tty_port {int lock; int * tty; } ;
struct srmcons_private {int timer; struct tty_port port; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct srmcons_private *VAR_2 = VAR_0->driver_data;
 struct tty_port *VAR_3 = &VAR_2->port;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);

 if (VAR_0->count == 1) {
  VAR_3->tty = ((void*)0);
  FUNC_0(&VAR_2->timer);
 }

 FUNC_2(&VAR_3->lock, VAR_4);
}

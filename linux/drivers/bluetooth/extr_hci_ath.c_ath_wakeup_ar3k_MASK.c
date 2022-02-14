
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* tiocmget ) (struct tty_struct*) ;int (* tiocmset ) (struct tty_struct*,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*,int,int) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_struct*,int,int) ;
 int FUNC_6 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_7(struct tty_struct *VAR_2)
{
 int VAR_3 = VAR_2->driver->ops->tiocmget(VAR_2);

 if (VAR_3 & VAR_0)
  return VAR_3;


 VAR_2->driver->ops->tiocmget(VAR_2);
 VAR_2->driver->ops->tiocmset(VAR_2, 0x00, VAR_1);
 FUNC_0(20);


 VAR_2->driver->ops->tiocmget(VAR_2);
 VAR_2->driver->ops->tiocmset(VAR_2, VAR_1, 0x00);
 FUNC_0(20);

 VAR_3 = VAR_2->driver->ops->tiocmget(VAR_2);
 return VAR_3;
}

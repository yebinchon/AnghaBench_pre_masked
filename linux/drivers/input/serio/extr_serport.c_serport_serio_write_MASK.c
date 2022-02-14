
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serport {TYPE_2__* tty; } ;
struct serio {struct serport* port_data; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write ) (TYPE_2__*,unsigned char*,int) ;} ;


 int FUNC_0 (TYPE_2__*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_1(struct serio *VAR_0, unsigned char VAR_1)
{
 struct serport *VAR_2 = VAR_0->port_data;
 return -(VAR_2->tty->ops->write(VAR_2->tty, &VAR_1, 1) != 1);
}

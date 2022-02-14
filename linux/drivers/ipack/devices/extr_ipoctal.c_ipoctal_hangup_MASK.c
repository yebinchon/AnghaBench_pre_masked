
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct ipoctal_channel* driver_data; } ;
struct TYPE_3__ {int open_wait; } ;
struct ipoctal_channel {TYPE_1__ tty_port; int lock; scalar_t__ pointer_write; scalar_t__ pointer_read; scalar_t__ nb_bytes; } ;


 int FUNC_0 (struct ipoctal_channel*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_0)
{
 unsigned long VAR_1;
 struct ipoctal_channel *VAR_2 = VAR_0->driver_data;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(&VAR_2->lock, VAR_1);
 VAR_2->nb_bytes = 0;
 VAR_2->pointer_read = 0;
 VAR_2->pointer_write = 0;
 FUNC_2(&VAR_2->lock, VAR_1);

 FUNC_3(&VAR_2->tty_port);

 FUNC_0(VAR_2);
 FUNC_4(&VAR_2->tty_port, 0);
 FUNC_5(&VAR_2->tty_port.open_wait);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct userio_device {unsigned char* buf; size_t head; int tail; int waitq; int buf_lock; } ;
struct serio {struct userio_device* port_data; } ;
struct TYPE_2__ {int this_device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct serio *VAR_2, unsigned char VAR_3)
{
 struct userio_device *VAR_4 = VAR_2->port_data;
 unsigned long VAR_5;

 FUNC_1(&VAR_4->buf_lock, VAR_5);

 VAR_4->buf[VAR_4->head] = VAR_3;
 VAR_4->head = (VAR_4->head + 1) % VAR_0;

 if (VAR_4->head == VAR_4->tail)
  FUNC_0(VAR_1.this_device,
    "Buffer overflowed, userio client isn't keeping up");

 FUNC_2(&VAR_4->buf_lock, VAR_5);

 FUNC_3(&VAR_4->waitq);

 return 0;
}

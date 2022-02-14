
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct line* driver_data; } ;
struct line {int throttled; TYPE_1__* driver; int chan_in; } ;
struct TYPE_2__ {int read_irq; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct tty_struct *VAR_0)
{
 struct line *VAR_1 = VAR_0->driver_data;

 FUNC_0(VAR_1->chan_in, VAR_1->driver->read_irq);
 VAR_1->throttled = 1;
}

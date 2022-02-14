
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ioapic {size_t io_numintr; TYPE_1__* io_pins; } ;
struct TYPE_2__ {int io_irq; } ;



int
FUNC_0(void *VAR_0, u_int VAR_1)
{
 struct ioapic *VAR_2;

 VAR_2 = (struct ioapic *)VAR_0;
 if (VAR_1 >= VAR_2->io_numintr)
  return (-1);
 return (VAR_2->io_pins[VAR_1].io_irq);
}

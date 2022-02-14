
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ioapic {size_t io_numintr; int io_id; TYPE_1__* io_pins; } ;
struct TYPE_2__ {scalar_t__ io_irq; int io_edgetrigger; int io_activehi; scalar_t__ io_masked; int io_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,size_t) ;

int
FUNC_1(void *VAR_4, u_int VAR_5)
{
 struct ioapic *VAR_6;

 VAR_6 = (struct ioapic *)VAR_4;
 if (VAR_5 >= VAR_6->io_numintr)
  return (VAR_1);
 if (VAR_6->io_pins[VAR_5].io_irq == VAR_2)
  return (0);
 if (VAR_6->io_pins[VAR_5].io_irq < 0)
  return (VAR_1);
 VAR_6->io_pins[VAR_5].io_bus = VAR_0;
 VAR_6->io_pins[VAR_5].io_irq = VAR_2;
 VAR_6->io_pins[VAR_5].io_masked = 0;
 VAR_6->io_pins[VAR_5].io_edgetrigger = 1;
 VAR_6->io_pins[VAR_5].io_activehi = 1;
 if (VAR_3)
  FUNC_0("ioapic%u: Routing SMI -> intpin %d\n",
      VAR_6->io_id, VAR_5);
 return (0);
}

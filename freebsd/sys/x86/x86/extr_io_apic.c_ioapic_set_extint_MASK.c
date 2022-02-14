
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ioapic {size_t io_numintr; int io_id; TYPE_1__* io_pins; } ;
struct TYPE_2__ {scalar_t__ io_irq; int io_masked; int io_edgetrigger; int io_activehi; int io_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int,size_t) ;

int
FUNC_1(void *VAR_5, u_int VAR_6)
{
 struct ioapic *VAR_7;

 VAR_7 = (struct ioapic *)VAR_5;
 if (VAR_6 >= VAR_7->io_numintr)
  return (VAR_1);
 if (VAR_7->io_pins[VAR_6].io_irq == VAR_2)
  return (0);
 if (VAR_7->io_pins[VAR_6].io_irq < 0)
  return (VAR_1);
 VAR_7->io_pins[VAR_6].io_bus = VAR_0;
 VAR_7->io_pins[VAR_6].io_irq = VAR_2;
 if (VAR_4)
  VAR_7->io_pins[VAR_6].io_masked = 0;
 else
  VAR_7->io_pins[VAR_6].io_masked = 1;
 VAR_7->io_pins[VAR_6].io_edgetrigger = 1;
 VAR_7->io_pins[VAR_6].io_activehi = 1;
 if (VAR_3)
  FUNC_0("ioapic%u: Routing external 8259A's -> intpin %d\n",
      VAR_7->io_id, VAR_6);
 return (0);
}

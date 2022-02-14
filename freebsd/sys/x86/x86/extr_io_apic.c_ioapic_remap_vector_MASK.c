
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ioapic {size_t io_numintr; int io_id; TYPE_1__* io_pins; } ;
struct TYPE_2__ {int io_irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int,size_t) ;

int
FUNC_1(void *VAR_2, u_int VAR_3, int VAR_4)
{
 struct ioapic *VAR_5;

 VAR_5 = (struct ioapic *)VAR_2;
 if (VAR_3 >= VAR_5->io_numintr || VAR_4 < 0)
  return (VAR_0);
 if (VAR_5->io_pins[VAR_3].io_irq < 0)
  return (VAR_0);
 VAR_5->io_pins[VAR_3].io_irq = VAR_4;
 if (VAR_1)
  FUNC_0("ioapic%u: Routing IRQ %d -> intpin %d\n", VAR_5->io_id,
      VAR_4, VAR_3);
 return (0);
}

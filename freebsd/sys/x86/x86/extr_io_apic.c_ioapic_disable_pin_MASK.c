
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ioapic {size_t io_numintr; int io_id; TYPE_1__* io_pins; } ;
struct TYPE_2__ {scalar_t__ io_irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,size_t) ;

int
FUNC_1(void *VAR_3, u_int VAR_4)
{
 struct ioapic *VAR_5;

 VAR_5 = (struct ioapic *)VAR_3;
 if (VAR_4 >= VAR_5->io_numintr)
  return (VAR_0);
 if (VAR_5->io_pins[VAR_4].io_irq == VAR_1)
  return (VAR_0);
 VAR_5->io_pins[VAR_4].io_irq = VAR_1;
 if (VAR_2)
  FUNC_0("ioapic%u: intpin %d disabled\n", VAR_5->io_id, VAR_4);
 return (0);
}

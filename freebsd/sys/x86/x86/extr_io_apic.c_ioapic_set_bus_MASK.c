
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ioapic {size_t io_numintr; int io_id; TYPE_1__* io_pins; } ;
struct TYPE_2__ {scalar_t__ io_irq; int io_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int,size_t,char*) ;

int
FUNC_2(void *VAR_3, u_int VAR_4, int VAR_5)
{
 struct ioapic *VAR_6;

 if (VAR_5 < 0 || VAR_5 > VAR_0)
  return (VAR_1);
 VAR_6 = (struct ioapic *)VAR_3;
 if (VAR_4 >= VAR_6->io_numintr)
  return (VAR_1);
 if (VAR_6->io_pins[VAR_4].io_irq < 0)
  return (VAR_1);
 if (VAR_6->io_pins[VAR_4].io_bus == VAR_5)
  return (0);
 VAR_6->io_pins[VAR_4].io_bus = VAR_5;
 if (VAR_2)
  FUNC_1("ioapic%u: intpin %d bus %s\n", VAR_6->io_id, VAR_4,
      FUNC_0(VAR_5));
 return (0);
}

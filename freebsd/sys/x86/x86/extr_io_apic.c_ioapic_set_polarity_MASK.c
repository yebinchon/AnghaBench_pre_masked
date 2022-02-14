
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ioapic {size_t io_numintr; int io_id; TYPE_1__* io_pins; } ;
typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
struct TYPE_2__ {scalar_t__ io_irq; int io_activehi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,size_t,char*) ;

int
FUNC_1(void *VAR_4, u_int VAR_5, enum intr_polarity VAR_6)
{
 struct ioapic *VAR_7;
 int VAR_8;

 VAR_7 = (struct ioapic *)VAR_4;
 if (VAR_5 >= VAR_7->io_numintr || VAR_6 == VAR_1)
  return (VAR_0);
 if (VAR_7->io_pins[VAR_5].io_irq < 0)
  return (VAR_0);
 VAR_8 = (VAR_6 == VAR_2);
 if (VAR_7->io_pins[VAR_5].io_activehi == VAR_8)
  return (0);
 VAR_7->io_pins[VAR_5].io_activehi = VAR_8;
 if (VAR_3)
  FUNC_0("ioapic%u: intpin %d polarity: %s\n", VAR_7->io_id, VAR_5,
      VAR_6 == VAR_2 ? "high" : "low");
 return (0);
}

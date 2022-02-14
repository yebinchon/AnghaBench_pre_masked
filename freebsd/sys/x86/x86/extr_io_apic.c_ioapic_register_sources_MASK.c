
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic {int dummy; } ;
struct ioapic_intsrc {scalar_t__ io_irq; int io_intsrc; } ;
struct ioapic {int io_numintr; struct ioapic_intsrc* io_pins; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct pic *VAR_0)
{
 struct ioapic_intsrc *VAR_1;
 struct ioapic *VAR_2;
 int VAR_3;

 VAR_2 = (struct ioapic *)VAR_0;
 for (VAR_3 = 0, VAR_1 = VAR_2->io_pins; VAR_3 < VAR_2->io_numintr; VAR_3++, VAR_1++) {
  if (VAR_1->io_irq >= 0)
   FUNC_0(&VAR_1->io_intsrc);
 }
}

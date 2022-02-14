
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioapic_intsrc {scalar_t__ io_vector; int io_cpu; int io_irq; } ;
struct intsrc {int is_domain; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct intsrc*,int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct intsrc *VAR_0)
{
 struct ioapic_intsrc *VAR_1 = (struct ioapic_intsrc *)VAR_0;

 if (VAR_1->io_vector == 0)
  if (FUNC_2(VAR_0, FUNC_1(VAR_0->is_domain)) != 0)
   FUNC_3("Couldn't find an APIC vector for IRQ %d",
       VAR_1->io_irq);
 FUNC_0(VAR_1->io_cpu, VAR_1->io_vector);
}

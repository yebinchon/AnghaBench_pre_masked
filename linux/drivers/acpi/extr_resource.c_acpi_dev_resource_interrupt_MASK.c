
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int flags; } ;
struct acpi_resource_irq {int interrupt_count; int shareable; int polarity; int triggering; int * interrupts; } ;
struct acpi_resource_extended_irq {int interrupt_count; int shareable; int polarity; int triggering; int * interrupts; } ;
struct TYPE_2__ {struct acpi_resource_extended_irq extended_irq; struct acpi_resource_irq irq; } ;
struct acpi_resource {int type; TYPE_1__ data; } ;




 int FUNC_0 (struct resource*,int ,int ,int ,int ,int) ;
 int FUNC_1 (struct resource*,int ) ;
 int FUNC_2 (struct acpi_resource_extended_irq*) ;

bool FUNC_3(struct acpi_resource *VAR_0, int VAR_1,
     struct resource *VAR_2)
{
 struct acpi_resource_irq *VAR_3;
 struct acpi_resource_extended_irq *VAR_4;

 switch (VAR_0->type) {
 case 128:




  VAR_3 = &VAR_0->data.irq;
  if (VAR_1 >= VAR_3->interrupt_count) {
   FUNC_1(VAR_2, 0);
   return 0;
  }
  FUNC_0(VAR_2, VAR_3->interrupts[VAR_1],
      VAR_3->triggering, VAR_3->polarity,
      VAR_3->shareable, 1);
  break;
 case 129:
  VAR_4 = &VAR_0->data.extended_irq;
  if (VAR_1 >= VAR_4->interrupt_count) {
   FUNC_1(VAR_2, 0);
   return 0;
  }
  if (FUNC_2(VAR_4))
   FUNC_0(VAR_2, VAR_4->interrupts[VAR_1],
      VAR_4->triggering, VAR_4->polarity,
      VAR_4->shareable, 0);
  else
   FUNC_1(VAR_2, 0);
  break;
 default:
  VAR_2->flags = 0;
  return 0;
 }

 return 1;
}

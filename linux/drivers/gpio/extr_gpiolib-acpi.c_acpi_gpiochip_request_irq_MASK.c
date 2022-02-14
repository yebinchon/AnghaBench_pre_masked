
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_gpio_event {int irqflags; int irq_requested; int irq; int (* handler ) (int ,struct acpi_gpio_event*) ;int desc; scalar_t__ irq_is_wake; } ;
struct acpi_gpio_chip {TYPE_1__* chip; } ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int (*) (int ,struct acpi_gpio_event*),int,char*,struct acpi_gpio_event*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,struct acpi_gpio_event*) ;

__attribute__((used)) static void FUNC_5(struct acpi_gpio_chip *VAR_3,
          struct acpi_gpio_event *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_4->irq, ((void*)0), VAR_4->handler,
       VAR_4->irqflags, "ACPI:Event", VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_3->chip->parent,
   "Failed to setup interrupt handler for %d\n",
   VAR_4->irq);
  return;
 }

 if (VAR_4->irq_is_wake)
  FUNC_1(VAR_4->irq);

 VAR_4->irq_requested = 1;


 if (VAR_2 &&
     (VAR_4->irqflags & (VAR_1 | VAR_0))) {
  VAR_6 = FUNC_2(VAR_4->desc);
  if (((VAR_4->irqflags & VAR_1) && VAR_6 == 1) ||
      ((VAR_4->irqflags & VAR_0) && VAR_6 == 0))
   VAR_4->handler(VAR_4->irq, VAR_4);
 }
}

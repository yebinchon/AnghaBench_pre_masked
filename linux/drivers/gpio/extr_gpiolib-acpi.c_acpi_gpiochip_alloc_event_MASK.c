
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {int dummy; } ;
struct gpio_chip {int parent; } ;
struct acpi_resource_gpio {int* pin_table; scalar_t__ triggering; int polarity; scalar_t__ wake_capable; } ;
struct acpi_resource {int dummy; } ;
struct acpi_gpio_event {int irqflags; int irq; int irq_is_wake; int pin; int node; struct gpio_desc* desc; int * handler; int handle; } ;
struct acpi_gpio_chip {int events; struct gpio_chip* chip; } ;
typedef int * irq_handler_t ;
typedef int acpi_status ;
typedef int acpi_handle ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (struct acpi_resource*,struct acpi_resource_gpio**) ;
 int * VAR_13 ;
 int * VAR_14 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct gpio_desc*) ;
 int FUNC_7 (struct gpio_chip*,int) ;
 struct gpio_desc* FUNC_8 (struct gpio_chip*,int,char*,int ,int ) ;
 int FUNC_9 (struct gpio_chip*,int) ;
 int FUNC_10 (struct gpio_desc*) ;
 struct acpi_gpio_event* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (char*,char*,char,int) ;

__attribute__((used)) static acpi_status FUNC_14(struct acpi_resource *VAR_15,
          void *VAR_16)
{
 struct acpi_gpio_chip *VAR_17 = VAR_16;
 struct gpio_chip *VAR_18 = VAR_17->chip;
 struct acpi_resource_gpio *VAR_19;
 acpi_handle VAR_20, VAR_21;
 struct acpi_gpio_event *VAR_22;
 irq_handler_t VAR_23 = ((void*)0);
 struct gpio_desc *VAR_24;
 int VAR_25, VAR_26, VAR_27;

 if (!FUNC_4(VAR_15, &VAR_19))
  return VAR_4;

 VAR_20 = FUNC_0(VAR_18->parent);
 VAR_26 = VAR_19->pin_table[0];

 if (VAR_26 <= 255) {
  char VAR_28[5];
  FUNC_13(VAR_28, "_%c%02hhX",
   VAR_19->triggering == VAR_0 ? 'E' : 'L',
   VAR_26);
  if (FUNC_1(FUNC_3(VAR_20, VAR_28, &VAR_21)))
   VAR_23 = VAR_13;
 }
 if (!VAR_23) {
  if (FUNC_1(FUNC_3(VAR_20, "_EVT", &VAR_21)))
   VAR_23 = VAR_14;
 }
 if (!VAR_23)
  return VAR_4;

 VAR_24 = FUNC_8(VAR_18, VAR_26, "ACPI:Event",
      VAR_7, VAR_6);
 if (FUNC_2(VAR_24)) {
  FUNC_5(VAR_18->parent, "Failed to request GPIO\n");
  return VAR_3;
 }

 VAR_25 = FUNC_7(VAR_18, VAR_26);
 if (VAR_25) {
  FUNC_5(VAR_18->parent, "Failed to lock GPIO as interrupt\n");
  goto fail_free_desc;
 }

 VAR_27 = FUNC_10(VAR_24);
 if (VAR_27 < 0) {
  FUNC_5(VAR_18->parent, "Failed to translate GPIO to IRQ\n");
  goto fail_unlock_irq;
 }

 VAR_22 = FUNC_11(sizeof(*VAR_22), VAR_5);
 if (!VAR_22)
  goto fail_unlock_irq;

 VAR_22->irqflags = VAR_8;
 if (VAR_19->triggering == VAR_1) {
  if (VAR_19->polarity == 129)
   VAR_22->irqflags |= VAR_10;
  else
   VAR_22->irqflags |= VAR_11;
 } else {
  switch (VAR_19->polarity) {
  case 129:
   VAR_22->irqflags |= VAR_12;
   break;
  case 128:
   VAR_22->irqflags |= VAR_9;
   break;
  default:
   VAR_22->irqflags |= VAR_12 |
        VAR_9;
   break;
  }
 }

 VAR_22->handle = VAR_21;
 VAR_22->handler = VAR_23;
 VAR_22->irq = VAR_27;
 VAR_22->irq_is_wake = VAR_19->wake_capable == VAR_2;
 VAR_22->pin = VAR_26;
 VAR_22->desc = VAR_24;

 FUNC_12(&VAR_22->node, &VAR_17->events);

 return VAR_4;

fail_unlock_irq:
 FUNC_9(VAR_18, VAR_26);
fail_free_desc:
 FUNC_6(VAR_24);

 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; int names; } ;
struct acpi_gpio_chip {int deferred_req_irqs_list_entry; int events; struct gpio_chip* chip; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct acpi_gpio_chip*) ;
 int VAR_1 ;
 int FUNC_4 (struct acpi_gpio_chip*) ;
 int FUNC_5 (struct acpi_gpio_chip*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct gpio_chip*,int ) ;
 int FUNC_10 (struct acpi_gpio_chip*) ;
 struct acpi_gpio_chip* FUNC_11 (int,int ) ;

void FUNC_12(struct gpio_chip *VAR_2)
{
 struct acpi_gpio_chip *VAR_3;
 acpi_handle VAR_4;
 acpi_status VAR_5;

 if (!VAR_2 || !VAR_2->parent)
  return;

 VAR_4 = FUNC_1(VAR_2->parent);
 if (!VAR_4)
  return;

 VAR_3 = FUNC_11(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_7(VAR_2->parent,
   "Failed to allocate memory for ACPI GPIO chip\n");
  return;
 }

 VAR_3->chip = VAR_2;
 FUNC_2(&VAR_3->events);
 FUNC_2(&VAR_3->deferred_req_irqs_list_entry);

 VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_3);
 if (FUNC_0(VAR_5)) {
  FUNC_7(VAR_2->parent, "Failed to attach ACPI GPIO chip\n");
  FUNC_10(VAR_3);
  return;
 }

 if (!VAR_2->names)
  FUNC_9(VAR_2, FUNC_8(VAR_2->parent));

 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_6(VAR_4);
}

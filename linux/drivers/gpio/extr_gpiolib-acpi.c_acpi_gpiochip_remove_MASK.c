
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; } ;
struct acpi_gpio_chip {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,void**) ;
 int VAR_0 ;
 int FUNC_4 (struct acpi_gpio_chip*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct acpi_gpio_chip*) ;

void FUNC_7(struct gpio_chip *VAR_1)
{
 struct acpi_gpio_chip *VAR_2;
 acpi_handle VAR_3;
 acpi_status VAR_4;

 if (!VAR_1 || !VAR_1->parent)
  return;

 VAR_3 = FUNC_1(VAR_1->parent);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_3(VAR_3, VAR_0, (void **)&VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_5(VAR_1->parent, "Failed to retrieve ACPI GPIO chip\n");
  return;
 }

 FUNC_4(VAR_2);

 FUNC_2(VAR_3, VAR_0);
 FUNC_6(VAR_2);
}

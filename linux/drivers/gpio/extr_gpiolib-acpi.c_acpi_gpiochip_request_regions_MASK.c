
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; } ;
struct acpi_gpio_chip {int conn_lock; int conns; struct gpio_chip* chip; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int *,struct acpi_gpio_chip*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct acpi_gpio_chip *VAR_2)
{
 struct gpio_chip *VAR_3 = VAR_2->chip;
 acpi_handle VAR_4 = FUNC_1(VAR_3->parent);
 acpi_status VAR_5;

 FUNC_2(&VAR_2->conns);
 FUNC_5(&VAR_2->conn_lock);
 VAR_5 = FUNC_3(VAR_4, VAR_0,
          VAR_1,
          ((void*)0), VAR_2);
 if (FUNC_0(VAR_5))
  FUNC_4(VAR_3->parent,
          "Failed to install GPIO OpRegion handler\n");
}

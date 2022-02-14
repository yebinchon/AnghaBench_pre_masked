
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int parent; int to_irq; } ;
struct acpi_gpio_chip {int deferred_req_irqs_list_entry; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct acpi_gpio_chip*) ;
 int FUNC_4 (int ,char*,int ,struct acpi_gpio_chip*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct gpio_chip *VAR_5)
{
 struct acpi_gpio_chip *VAR_6;
 acpi_handle VAR_7;
 acpi_status VAR_8;
 bool VAR_9;

 if (!VAR_5->parent || !VAR_5->to_irq)
  return;

 VAR_7 = FUNC_1(VAR_5->parent);
 if (!VAR_7)
  return;

 VAR_8 = FUNC_2(VAR_7, VAR_0, (void **)&VAR_6);
 if (FUNC_0(VAR_8))
  return;

 FUNC_4(VAR_7, "_AEI",
       VAR_4, VAR_6);

 FUNC_6(&VAR_3);
 VAR_9 = !VAR_1;
 if (VAR_9)
  FUNC_5(&VAR_6->deferred_req_irqs_list_entry,
    &VAR_2);
 FUNC_7(&VAR_3);

 if (VAR_9)
  return;

 FUNC_3(VAR_6);
}

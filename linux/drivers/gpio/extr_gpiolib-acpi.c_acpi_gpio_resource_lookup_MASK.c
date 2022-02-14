
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct acpi_gpio_info {struct acpi_device* adev; } ;
struct acpi_gpio_lookup {struct acpi_gpio_info info; int desc; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct acpi_device*,struct list_head*,int ,struct acpi_gpio_lookup*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct acpi_gpio_lookup *VAR_2,
         struct acpi_gpio_info *VAR_3)
{
 struct acpi_device *VAR_4 = VAR_2->info.adev;
 struct list_head VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5);

 VAR_6 = FUNC_2(VAR_4, &VAR_5,
         VAR_1,
         VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_1(&VAR_5);

 if (!VAR_2->desc)
  return -VAR_0;

 if (VAR_3)
  *VAR_3 = VAR_2->info;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
struct acpi_ac {int battery_nb; int charger; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ac*) ;
 struct acpi_ac* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_ac*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_1)
{
 struct acpi_ac *VAR_2 = ((void*)0);


 if (!VAR_1 || !FUNC_1(VAR_1))
  return -VAR_0;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_2->charger);
 FUNC_4(&VAR_2->battery_nb);





 FUNC_2(VAR_2);

 return 0;
}

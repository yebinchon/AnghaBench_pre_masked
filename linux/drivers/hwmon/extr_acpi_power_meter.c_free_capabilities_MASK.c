
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_power_meter_resource {int model_number; } ;
typedef int acpi_string ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct acpi_power_meter_resource *VAR_0)
{
 acpi_string *VAR_1;
 int VAR_2;

 VAR_1 = &VAR_0->model_number;
 for (VAR_2 = 0; VAR_2 < 3; VAR_2++, VAR_1++)
  FUNC_0(*VAR_1);
}

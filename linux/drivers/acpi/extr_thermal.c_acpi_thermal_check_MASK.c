
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_thermal {int thermal_zone; int tz_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct acpi_thermal *VAR_2 = VAR_1;

 if (!VAR_2->tz_enabled)
  return;

 FUNC_0(VAR_2->thermal_zone,
       VAR_0);
}

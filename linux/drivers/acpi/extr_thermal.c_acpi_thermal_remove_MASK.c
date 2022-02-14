
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_thermal {int dummy; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpi_thermal* FUNC_0 (struct acpi_device*) ;
 int VAR_1 ;
 int FUNC_1 (struct acpi_thermal*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_thermal*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_2)
{
 struct acpi_thermal *VAR_3 = ((void*)0);

 if (!VAR_2 || !FUNC_0(VAR_2))
  return -VAR_0;

 FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
 return 0;
}

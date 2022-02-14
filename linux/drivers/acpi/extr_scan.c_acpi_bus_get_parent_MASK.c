
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct acpi_device**) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 struct acpi_device* VAR_1 ;

__attribute__((used)) static struct acpi_device *FUNC_3(acpi_handle VAR_2)
{
 struct acpi_device *VAR_3 = ((void*)0);
 acpi_status VAR_4;






 if (!VAR_2)
  return VAR_1;

 do {
  VAR_4 = FUNC_2(VAR_2, &VAR_2);
  if (FUNC_0(VAR_4))
   return VAR_4 == VAR_0 ? ((void*)0) : VAR_1;
 } while (FUNC_1(VAR_2, &VAR_3));
 return VAR_3;
}

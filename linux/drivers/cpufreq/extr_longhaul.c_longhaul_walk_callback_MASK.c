
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 void* FUNC_1 (struct acpi_device*) ;

__attribute__((used)) static acpi_status FUNC_2(acpi_handle VAR_0,
       u32 VAR_1,
       void *VAR_2, void **VAR_3)
{
 struct acpi_device *VAR_4;

 if (FUNC_0(VAR_0, &VAR_4))
  return 0;

 *VAR_3 = FUNC_1(VAR_4);
 return 1;
}

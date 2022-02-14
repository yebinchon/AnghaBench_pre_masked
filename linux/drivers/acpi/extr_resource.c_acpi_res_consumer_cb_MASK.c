
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 scalar_t__ FUNC_1 (struct acpi_device*,struct resource*) ;

__attribute__((used)) static acpi_status FUNC_2(acpi_handle VAR_2, u32 VAR_3,
      void *VAR_4, void **VAR_5)
{
 struct resource *VAR_6 = VAR_4;
 struct acpi_device **VAR_7 = (struct acpi_device **) VAR_5;
 struct acpi_device *VAR_8;

 if (FUNC_0(VAR_2, &VAR_8))
  return VAR_1;

 if (FUNC_1(VAR_8, VAR_6)) {
  *VAR_7 = VAR_8;
  return VAR_0;
 }

 return VAR_1;
}

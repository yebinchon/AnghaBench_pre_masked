
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_handle ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct acpi_device*) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static bool FUNC_3(struct acpi_device *VAR_0)
{
 acpi_handle VAR_1 = VAR_0->handle;

 if (FUNC_2(VAR_1, "_EJ0") && FUNC_1(VAR_0))
  return 1;

 return FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {scalar_t__ driver_gpios; } ;


 scalar_t__ FUNC_0 (struct acpi_device*) ;

__attribute__((used)) static bool FUNC_1(struct acpi_device *VAR_0,
         const char *VAR_1)
{

 if (FUNC_0(VAR_0) || VAR_0->driver_gpios)
  return 0;

 return VAR_1 == ((void*)0);
}

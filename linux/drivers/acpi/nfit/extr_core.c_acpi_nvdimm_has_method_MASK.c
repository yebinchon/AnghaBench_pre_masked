
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static bool FUNC_2(struct acpi_device *VAR_0, char *VAR_1)
{
 acpi_handle VAR_2;
 acpi_status VAR_3;

 VAR_3 = FUNC_1(VAR_0->handle, VAR_1, &VAR_2);

 if (FUNC_0(VAR_3))
  return 1;
 return 0;
}

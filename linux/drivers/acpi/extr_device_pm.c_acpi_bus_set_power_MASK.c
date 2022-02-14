
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int FUNC_0 (int ,struct acpi_device**) ;
 int FUNC_1 (struct acpi_device*,int) ;

int FUNC_2(acpi_handle VAR_0, int VAR_1)
{
 struct acpi_device *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2, VAR_1);
}

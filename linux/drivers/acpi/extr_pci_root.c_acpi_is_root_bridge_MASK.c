
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
typedef int acpi_handle ;


 int FUNC_0 (int ,struct acpi_device**) ;
 int FUNC_1 (struct acpi_device*,int ) ;
 int VAR_0 ;

int FUNC_2(acpi_handle VAR_1)
{
 int VAR_2;
 struct acpi_device *VAR_3;

 VAR_2 = FUNC_0(VAR_1, &VAR_3);
 if (VAR_2)
  return 0;

 VAR_2 = FUNC_1(VAR_3, VAR_0);
 if (VAR_2)
  return 0;
 else
  return 1;
}

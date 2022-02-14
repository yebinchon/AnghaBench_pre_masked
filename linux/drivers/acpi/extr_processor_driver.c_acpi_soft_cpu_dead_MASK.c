
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor {int handle; } ;
struct acpi_device {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct acpi_device**) ;
 int FUNC_1 (struct acpi_processor*,int) ;
 struct acpi_processor* FUNC_2 (int ,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_1)
{
 struct acpi_processor *VAR_2 = FUNC_2(VAR_0, VAR_1);
 struct acpi_device *VAR_3;

 if (!VAR_2 || FUNC_0(VAR_2->handle, &VAR_3))
  return 0;

 FUNC_1(VAR_2, 1);
 return 0;
}

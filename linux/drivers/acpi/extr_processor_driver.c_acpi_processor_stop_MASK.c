
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_processor {int dummy; } ;
struct acpi_device {int handle; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (struct acpi_processor*) ;
 struct acpi_processor* FUNC_2 (struct acpi_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct acpi_processor*) ;
 int FUNC_4 (struct acpi_processor*,struct acpi_device*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_0(VAR_2);
 struct acpi_processor *VAR_4;

 if (!VAR_3)
  return 0;

 FUNC_5(VAR_3->handle, VAR_0,
       VAR_1);

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return 0;
 FUNC_3(VAR_4);

 FUNC_4(VAR_4, VAR_3);

 FUNC_1(VAR_4);

 return 0;
}

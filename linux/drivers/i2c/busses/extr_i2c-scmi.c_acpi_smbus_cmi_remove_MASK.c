
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_smbus_cmi {int adapter; } ;
struct acpi_device {int * driver_data; } ;


 struct acpi_smbus_cmi* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct acpi_smbus_cmi*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0)
{
 struct acpi_smbus_cmi *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->adapter);
 FUNC_2(VAR_1);
 VAR_0->driver_data = ((void*)0);

 return 0;
}

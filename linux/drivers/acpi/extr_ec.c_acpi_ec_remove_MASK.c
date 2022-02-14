
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec {int command_addr; int data_addr; } ;
struct acpi_device {int * driver_data; } ;


 int VAR_0 ;
 struct acpi_ec* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_ec*) ;
 struct acpi_ec* VAR_1 ;
 int FUNC_2 (struct acpi_ec*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_2)
{
 struct acpi_ec *VAR_3;

 if (!VAR_2)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2);
 FUNC_3(VAR_3->data_addr, 1);
 FUNC_3(VAR_3->command_addr, 1);
 VAR_2->driver_data = ((void*)0);
 if (VAR_3 != VAR_1) {
  FUNC_2(VAR_3);
  FUNC_1(VAR_3);
 }
 return 0;
}

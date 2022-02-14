
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dummy; } ;
struct acpi_button {int input; } ;


 int FUNC_0 (struct acpi_device*) ;
 struct acpi_button* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_button*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_0)
{
 struct acpi_button *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0);
 FUNC_2(VAR_1->input);
 FUNC_3(VAR_1);
 return 0;
}

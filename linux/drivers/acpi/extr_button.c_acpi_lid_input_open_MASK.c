
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct acpi_device {int dummy; } ;
struct acpi_button {int last_state; int last_time; } ;


 struct acpi_button* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 struct acpi_device* FUNC_3 (struct input_dev*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_0)
{
 struct acpi_device *VAR_1 = FUNC_3(VAR_0);
 struct acpi_button *VAR_2 = FUNC_0(VAR_1);

 VAR_2->last_state = !!FUNC_1(VAR_1);
 VAR_2->last_time = FUNC_4();
 FUNC_2(VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device_id {char* member_0; int member_1; } ;
struct acpi_device {struct acpi_device* parent; } ;


 int FUNC_0 (struct acpi_device*,struct acpi_device_id const*) ;

__attribute__((used)) static bool FUNC_1(struct acpi_device *VAR_0)
{
 struct acpi_device *VAR_1 = VAR_0->parent;
 static const struct acpi_device_id VAR_2[] = {
  {"HISI0191", 0},
  {}
 };

 return VAR_1 && !FUNC_0(VAR_1, VAR_2);
}

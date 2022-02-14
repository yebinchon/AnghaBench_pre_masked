
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_fan_fps {int speed; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct acpi_fan_fps *VAR_2 = VAR_0;
 const struct acpi_fan_fps *VAR_3 = VAR_1;
 return VAR_2->speed - VAR_3->speed;
}

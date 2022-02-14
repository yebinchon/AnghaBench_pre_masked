
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device_id {char* member_0; } ;
struct acpi_device {int dummy; } ;


 int FUNC_0 (struct acpi_device*,struct acpi_device_id const*) ;

__attribute__((used)) static int FUNC_1(struct acpi_device *VAR_0)
{
 static const struct acpi_device_id VAR_1[] = {
  { "PNP0B00" },
  { "PNP0B01" },
  { "PNP0B02" },
  {""},
 };
 return !FUNC_0(VAR_0, VAR_1);
}

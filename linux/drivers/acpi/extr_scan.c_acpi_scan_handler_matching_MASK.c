
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_scan_handler {int (* match ) (char const*,struct acpi_device_id const**) ;struct acpi_device_id* ids; } ;
struct acpi_device_id {scalar_t__* id; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,struct acpi_device_id const**) ;

__attribute__((used)) static bool FUNC_2(struct acpi_scan_handler *VAR_0,
           const char *VAR_1,
           const struct acpi_device_id **VAR_2)
{
 const struct acpi_device_id *VAR_3;

 if (VAR_0->match)
  return VAR_0->match(VAR_1, VAR_2);

 for (VAR_3 = VAR_0->ids; VAR_3->id[0]; VAR_3++)
  if (!FUNC_0((char *)VAR_3->id, VAR_1)) {
   if (VAR_2)
    *VAR_2 = VAR_3;

   return 1;
  }

 return 0;
}

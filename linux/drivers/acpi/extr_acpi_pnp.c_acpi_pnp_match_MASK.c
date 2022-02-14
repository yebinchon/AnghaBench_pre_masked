
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device_id {scalar_t__* id; } ;


 struct acpi_device_id* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_1, const struct acpi_device_id **VAR_2)
{
 const struct acpi_device_id *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->id[0]; VAR_3++)
  if (FUNC_0(VAR_1, (char *)VAR_3->id)) {
   if (VAR_2)
    *VAR_2 = VAR_3;

   return 1;
  }

 return 0;
}

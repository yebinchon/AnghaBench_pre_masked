
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* name; } ;
union acpi_predefined_info {TYPE_1__ info; } ;


 scalar_t__ FUNC_0 (char*,scalar_t__*) ;
 union acpi_predefined_info* VAR_0 ;
 union acpi_predefined_info* FUNC_1 (union acpi_predefined_info const*) ;

const union acpi_predefined_info *FUNC_2(char *VAR_1)
{
 const union acpi_predefined_info *VAR_2;



 if (VAR_1[0] != '_') {
  return (((void*)0));
 }



 VAR_2 = VAR_0;
 while (VAR_2->info.name[0]) {
  if (FUNC_0(VAR_1, VAR_2->info.name)) {
   return (VAR_2);
  }

  VAR_2 = FUNC_1(VAR_2);
 }

 return (((void*)0));
}

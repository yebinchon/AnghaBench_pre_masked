
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
union acpi_parse_object {TYPE_1__ named; } ;
typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 union acpi_parse_object* FUNC_0 (int ,int *) ;

union acpi_parse_object *FUNC_1(u8 *VAR_2)
{
 union acpi_parse_object *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3) {
  return (((void*)0));
 }

 VAR_3->named.name = VAR_0;
 return (VAR_3);
}

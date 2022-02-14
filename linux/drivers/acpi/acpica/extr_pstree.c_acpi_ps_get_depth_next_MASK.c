
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {union acpi_parse_object* parent; union acpi_parse_object* next; } ;
union acpi_parse_object {TYPE_1__ common; } ;


 int FUNC_0 () ;
 int FUNC_1 (union acpi_parse_object*) ;
 union acpi_parse_object* FUNC_2 (union acpi_parse_object*,int ) ;

union acpi_parse_object *FUNC_3(union acpi_parse_object *VAR_0,
      union acpi_parse_object *VAR_1)
{
 union acpi_parse_object *VAR_2 = ((void*)0);
 union acpi_parse_object *VAR_3;
 union acpi_parse_object *VAR_4;

 FUNC_0();

 if (!VAR_1) {
  return (((void*)0));
 }



 VAR_2 = FUNC_2(VAR_1, 0);
 if (VAR_2) {
  FUNC_1(VAR_2);
  return (VAR_2);
 }



 VAR_2 = VAR_1->common.next;
 if (VAR_2) {
  FUNC_1(VAR_2);
  return (VAR_2);
 }



 VAR_3 = VAR_1->common.parent;

 while (VAR_3) {
  VAR_4 = FUNC_2(VAR_3, 0);
  while (VAR_4 && (VAR_4 != VAR_0) && (VAR_4 != VAR_1)) {

   FUNC_1(VAR_4);
   VAR_4 = VAR_4->common.next;
  }

  if (VAR_4 == VAR_0) {



   return (((void*)0));
  }

  if (VAR_3->common.next) {



   FUNC_1(VAR_3->common.next);
   return (VAR_3->common.next);
  }

  VAR_1 = VAR_3;
  VAR_3 = VAR_3->common.parent;
 }

 FUNC_1(VAR_2);
 return (VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct TYPE_2__ {union acpi_operand_object** obj_desc; } ;
union acpi_generic_state {TYPE_1__ results; } ;
typedef size_t u32 ;
struct acpi_walk_state {scalar_t__ result_count; union acpi_generic_state* results; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct acpi_walk_state*) ;
 int FUNC_5 (union acpi_operand_object*) ;
 int VAR_6 ;

acpi_status
FUNC_6(union acpi_operand_object **VAR_7,
     struct acpi_walk_state *VAR_8)
{
 u32 VAR_9;
 union acpi_generic_state *VAR_10;
 acpi_status VAR_11;

 FUNC_3(VAR_6);

 VAR_10 = VAR_8->results;



 if (VAR_10 && !VAR_8->result_count) {
  FUNC_1((VAR_4, "No results on result stack"));
  return (VAR_2);
 }

 if (!VAR_10 && VAR_8->result_count) {
  FUNC_1((VAR_4, "No result state for result stack"));
  return (VAR_2);
 }



 if (!VAR_10) {
  FUNC_1((VAR_4, "Result stack is empty! State=%p",
       VAR_8));
  return (VAR_3);
 }



 VAR_8->result_count--;
 VAR_9 = (u32)VAR_8->result_count % VAR_1;

 *VAR_7 = VAR_10->results.obj_desc[VAR_9];
 if (!*VAR_7) {
  FUNC_1((VAR_4,
       "No result objects on result stack, State=%p",
       VAR_8));
  return (VAR_3);
 }

 VAR_10->results.obj_desc[VAR_9] = ((void*)0);
 if (VAR_9 == 0) {
  VAR_11 = FUNC_4(VAR_8);
  if (FUNC_2(VAR_11)) {
   return (VAR_11);
  }
 }

 FUNC_0((VAR_0,
     "Obj=%p [%s] Index=%X State=%p Num=%X\n", *VAR_7,
     FUNC_5(*VAR_7),
     VAR_9, VAR_8, VAR_8->result_count));

 return (VAR_5);
}

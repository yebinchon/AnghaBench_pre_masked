
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
struct acpi_walk_state {scalar_t__ num_operands; size_t operand_index; void** operands; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (union acpi_operand_object*) ;
 int VAR_5 ;

acpi_status
FUNC_4(void *VAR_6, struct acpi_walk_state *VAR_7)
{
 FUNC_2(VAR_5);



 if (VAR_7->num_operands >= VAR_1) {
  FUNC_1((VAR_2,
       "Object stack overflow! Obj=%p State=%p #Ops=%u",
       VAR_6, VAR_7, VAR_7->num_operands));
  return (VAR_4);
 }



 VAR_7->operands[VAR_7->operand_index] = VAR_6;
 VAR_7->num_operands++;



 VAR_7->operand_index++;

 FUNC_0((VAR_0, "Obj=%p [%s] State=%p #Ops=%X\n",
     VAR_6,
     FUNC_3((union
       acpi_operand_object *)
             VAR_6), VAR_7,
     VAR_7->num_operands));

 return (VAR_3);
}

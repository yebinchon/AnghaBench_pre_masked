
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_operand_object {int dummy; } acpi_operand_object ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct acpi_walk_state {int dummy; } ;
struct acpi_namespace_node {union acpi_operand_object* object; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,int ,struct acpi_walk_state*,struct acpi_namespace_node**) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (union acpi_operand_object*) ;
 union acpi_operand_object* FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(u8 VAR_9,
         u32 VAR_10,
         struct acpi_walk_state *VAR_11,
         union acpi_operand_object **VAR_12)
{
 acpi_status VAR_13;
 struct acpi_namespace_node *VAR_14;
 union acpi_operand_object *VAR_15;

 FUNC_2(VAR_8);



 if (!VAR_12) {
  FUNC_0((VAR_4, "Null object descriptor pointer"));
  FUNC_6(VAR_3);
 }



 VAR_13 = FUNC_3(VAR_9, VAR_10, VAR_11, &VAR_14);
 if (FUNC_1(VAR_13)) {
  FUNC_6(VAR_13);
 }



 VAR_15 = VAR_14->object;



 if (!VAR_15) {
  if (VAR_7) {
   VAR_15 = FUNC_5((u64) 0);
   if (!VAR_15) {
    FUNC_6(VAR_5);
   }

   VAR_14->object = VAR_15;
  }



  else
   switch (VAR_9) {
   case 129:

    FUNC_0((VAR_4,
         "Uninitialized Arg[%u] at node %p",
         VAR_10, VAR_14));

    FUNC_6(VAR_1);

   case 128:




    FUNC_6(VAR_2);

   default:

    FUNC_0((VAR_4,
         "Not a Arg/Local opcode: 0x%X",
         VAR_9));
    FUNC_6(VAR_0);
   }
 }





 *VAR_12 = VAR_15;
 FUNC_4(VAR_15);

 FUNC_6(VAR_6);
}

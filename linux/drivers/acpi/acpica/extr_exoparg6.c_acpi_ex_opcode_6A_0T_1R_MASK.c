
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t value; } ;
struct TYPE_3__ {size_t count; union acpi_operand_object** elements; } ;
union acpi_operand_object {TYPE_2__ integer; TYPE_1__ package; } ;
typedef size_t u64 ;
typedef int u32 ;
struct acpi_walk_state {int opcode; union acpi_operand_object* result_obj; union acpi_operand_object** operands; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 size_t VAR_7 ;
 int FUNC_4 (int ,union acpi_operand_object*,union acpi_operand_object*) ;
 int FUNC_5 (struct acpi_walk_state*,union acpi_operand_object**) ;
 int FUNC_6 (int) ;
 union acpi_operand_object* FUNC_7 (int ) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int VAR_8 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(struct acpi_walk_state *VAR_9)
{
 union acpi_operand_object **VAR_10 = &VAR_9->operands[0];
 union acpi_operand_object *VAR_11 = ((void*)0);
 acpi_status VAR_12 = VAR_6;
 u64 VAR_13;
 union acpi_operand_object *VAR_14;

 FUNC_3(VAR_8,
    FUNC_6(VAR_9->opcode));

 switch (VAR_9->opcode) {
 case 128:







  if ((VAR_10[1]->integer.value > VAR_7) ||
      (VAR_10[3]->integer.value > VAR_7)) {
   FUNC_0((VAR_4, "Match operator out of range"));
   VAR_12 = VAR_2;
   goto cleanup;
  }



  VAR_13 = VAR_10[5]->integer.value;
  if (VAR_13 >= VAR_10[0]->package.count) {
   FUNC_0((VAR_4,
        "Index (0x%8.8X%8.8X) beyond package end (0x%X)",
        FUNC_2(VAR_13),
        VAR_10[0]->package.count));
   VAR_12 = VAR_3;
   goto cleanup;
  }




  VAR_11 = FUNC_7(VAR_0);
  if (!VAR_11) {
   VAR_12 = VAR_5;
   goto cleanup;

  }
  for (; VAR_13 < VAR_10[0]->package.count; VAR_13++) {



   VAR_14 = VAR_10[0]->package.elements[VAR_13];



   if (!VAR_14) {
    continue;
   }






   if (!FUNC_4((u32) VAR_10[1]->integer.value,
           VAR_14, VAR_10[2])) {
    continue;
   }

   if (!FUNC_4((u32) VAR_10[3]->integer.value,
           VAR_14, VAR_10[4])) {
    continue;
   }



   VAR_11->integer.value = VAR_13;
   break;
  }
  break;

 case 129:

  VAR_12 = FUNC_5(VAR_9, &VAR_11);
  break;

 default:

  FUNC_0((VAR_4, "Unknown AML opcode 0x%X",
       VAR_9->opcode));

  VAR_12 = VAR_1;
  goto cleanup;
 }

cleanup:



 if (FUNC_1(VAR_12)) {
  FUNC_8(VAR_11);
 }



 else {
  VAR_9->result_obj = VAR_11;
 }

 FUNC_9(VAR_12);
}

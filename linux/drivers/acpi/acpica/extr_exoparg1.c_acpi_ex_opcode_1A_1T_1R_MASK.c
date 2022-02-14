
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_operand_object {TYPE_1__ integer; } ;
typedef int u64 ;
typedef int u32 ;
struct acpi_walk_state {int opcode; union acpi_operand_object* result_obj; union acpi_operand_object** operands; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_7 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_8 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_9 (union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 int FUNC_10 (union acpi_operand_object*,union acpi_operand_object*,struct acpi_walk_state*) ;
 int VAR_11 ;
 struct acpi_namespace_node* VAR_12 ;
 int FUNC_11 (int) ;
 int FUNC_12 (union acpi_operand_object*) ;
 int FUNC_13 (union acpi_operand_object*,union acpi_operand_object**,struct acpi_walk_state*) ;
 union acpi_operand_object* FUNC_14 (int ) ;
 int FUNC_15 (union acpi_operand_object*) ;
 int FUNC_16 (int,int,int*,int*) ;
 int VAR_13 ;
 int FUNC_17 (int ) ;

acpi_status FUNC_18(struct acpi_walk_state *VAR_14)
{
 acpi_status VAR_15 = VAR_9;
 union acpi_operand_object **VAR_16 = &VAR_14->operands[0];
 union acpi_operand_object *VAR_17 = ((void*)0);
 union acpi_operand_object *VAR_18 = ((void*)0);
 u32 VAR_19;
 u32 VAR_20;
 u64 VAR_21;
 u64 VAR_22;

 FUNC_3(VAR_13,
    FUNC_11(VAR_14->opcode));



 switch (VAR_14->opcode) {
 case 141:
 case 138:
 case 137:
 case 136:
 case 132:
 case 140:



  VAR_17 = FUNC_14(VAR_3);
  if (!VAR_17) {
   VAR_15 = VAR_8;
   goto cleanup;
  }

  switch (VAR_14->opcode) {
  case 141:

   VAR_17->integer.value = ~VAR_16[0]->integer.value;
   break;

  case 138:

   VAR_17->integer.value = VAR_16[0]->integer.value;





   for (VAR_19 = 0; VAR_17->integer.value &&
        VAR_19 < VAR_2; ++VAR_19) {
    VAR_17->integer.value >>= 1;
   }

   VAR_17->integer.value = VAR_19;
   break;

  case 137:

   VAR_17->integer.value = VAR_16[0]->integer.value;





   for (VAR_19 = 0; VAR_17->integer.value &&
        VAR_19 < VAR_2; ++VAR_19) {
    VAR_17->integer.value <<= 1;
   }



   VAR_17->integer.value =
       VAR_19 ==
       0 ? 0 : (VAR_2 + 1) - VAR_19;
   break;

  case 136:





   VAR_21 = 1;
   VAR_17->integer.value = 0;
   VAR_22 = VAR_16[0]->integer.value;



   for (VAR_20 = 0;
        (VAR_20 < VAR_11) && (VAR_22 > 0);
        VAR_20++) {



    VAR_19 = ((u32) VAR_22) & 0xF;



    if (VAR_19 > 9) {
     FUNC_0((VAR_7,
          "BCD digit too large (not decimal): 0x%X",
          VAR_19));

     VAR_15 = VAR_6;
     goto cleanup;
    }



    VAR_17->integer.value +=
        (((u64) VAR_19) * VAR_21);



    VAR_22 >>= 4;



    VAR_21 *= 10;
   }
   break;

  case 132:

   VAR_17->integer.value = 0;
   VAR_22 = VAR_16[0]->integer.value;



   for (VAR_20 = 0;
        (VAR_20 < VAR_11) && (VAR_22 > 0);
        VAR_20++) {
    (void)FUNC_16(VAR_22, 10, &VAR_22,
          &VAR_19);





    VAR_17->integer.value |=
        (((u64) VAR_19) << FUNC_4(VAR_20));
   }



   if (VAR_22 > 0) {
    FUNC_0((VAR_7,
         "Integer too large to convert to BCD: 0x%8.8X%8.8X",
         FUNC_2(VAR_16[0]->
              integer.value)));
    VAR_15 = VAR_6;
    goto cleanup;
   }
   break;

  case 140:





   if ((struct acpi_namespace_node *)VAR_16[0] ==
       VAR_12) {




    VAR_17->integer.value = 0;
    goto cleanup;
   }



   VAR_15 = FUNC_9(VAR_16[0],
             &VAR_18,
             VAR_14);
   if (FUNC_1(VAR_15)) {
    goto cleanup;
   }

   VAR_15 =
       FUNC_10(VAR_18, VAR_16[1], VAR_14);
   FUNC_15(VAR_18);



   VAR_17->integer.value = VAR_4;
   goto cleanup;

  default:



   break;
  }
  break;

 case 133:





  VAR_15 = FUNC_10(VAR_16[0], VAR_16[1], VAR_14);
  if (FUNC_1(VAR_15)) {
   FUNC_17(VAR_15);
  }



  if (!VAR_14->result_obj) {






   VAR_14->result_obj = VAR_16[0];
   VAR_14->operands[0] = ((void*)0);
  }
  FUNC_17(VAR_15);




 case 139:

  VAR_15 =
      FUNC_13(VAR_16[0], &VAR_17,
          VAR_14);
  break;

 case 130:

  VAR_15 =
      FUNC_8(VAR_16[0], &VAR_17,
           VAR_0);
  if (VAR_17 == VAR_16[0]) {



   FUNC_12(VAR_17);
  }
  break;

 case 129:

  VAR_15 =
      FUNC_8(VAR_16[0], &VAR_17,
           VAR_1);
  if (VAR_17 == VAR_16[0]) {



   FUNC_12(VAR_17);
  }
  break;

 case 131:

  VAR_15 = FUNC_6(VAR_16[0], &VAR_17);
  if (VAR_17 == VAR_16[0]) {



   FUNC_12(VAR_17);
  }
  break;

 case 128:



  VAR_15 =
      FUNC_7(VAR_16[0], &VAR_17, 0);
  if (VAR_17 == VAR_16[0]) {



   FUNC_12(VAR_17);
  }
  break;

 case 135:
 case 134:



  FUNC_0((VAR_7,
       "%s is obsolete and not implemented",
       FUNC_11(VAR_14->opcode)));
  VAR_15 = VAR_10;
  goto cleanup;

 default:

  FUNC_0((VAR_7, "Unknown AML opcode 0x%X",
       VAR_14->opcode));
  VAR_15 = VAR_5;
  goto cleanup;
 }

 if (FUNC_5(VAR_15)) {



  VAR_15 = FUNC_10(VAR_17, VAR_16[1], VAR_14);
 }

cleanup:



 if (FUNC_1(VAR_15)) {
  FUNC_15(VAR_17);
 }



 else if (!VAR_14->result_obj) {
  VAR_14->result_obj = VAR_17;
 }

 FUNC_17(VAR_15);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int pointer; } ;
struct TYPE_5__ {int value; } ;
struct TYPE_4__ {int type; } ;
union acpi_operand_object {TYPE_3__ buffer; TYPE_2__ integer; TYPE_1__ common; } ;
typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
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
 int FUNC_3 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_4 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_5 (union acpi_operand_object*,union acpi_operand_object**,int ) ;
 int FUNC_6 (union acpi_operand_object*) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ) ;

acpi_status
FUNC_9(u16 VAR_8,
        union acpi_operand_object *VAR_9,
        union acpi_operand_object *VAR_10, u8 * VAR_11)
{
 union acpi_operand_object *VAR_12 = VAR_10;
 u64 VAR_13;
 u64 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 acpi_status VAR_17 = VAR_4;
 u8 VAR_18 = VAR_5;
 int VAR_19;

 FUNC_2(VAR_7);
 switch (VAR_9->common.type) {
 case 132:

  VAR_17 = FUNC_4(VAR_10, &VAR_12,
          VAR_0);
  break;

 case 131:

  VAR_17 =
      FUNC_5(VAR_10, &VAR_12,
           VAR_1);
  break;

 case 133:

  VAR_17 = FUNC_3(VAR_10, &VAR_12);
  break;

 default:

  FUNC_0((VAR_3,
       "Invalid object type for logical operator: %X",
       VAR_9->common.type));
  VAR_17 = VAR_2;
  break;
 }

 if (FUNC_1(VAR_17)) {
  goto cleanup;
 }




 if (VAR_9->common.type == 132) {




  VAR_13 = VAR_9->integer.value;
  VAR_14 = VAR_12->integer.value;

  switch (VAR_8) {
  case 130:

   if (VAR_13 == VAR_14) {
    VAR_18 = VAR_6;
   }
   break;

  case 129:

   if (VAR_13 > VAR_14) {
    VAR_18 = VAR_6;
   }
   break;

  case 128:

   if (VAR_13 < VAR_14) {
    VAR_18 = VAR_6;
   }
   break;

  default:

   FUNC_0((VAR_3,
        "Invalid comparison opcode: %X", VAR_8));
   VAR_17 = VAR_2;
   break;
  }
 } else {






  VAR_15 = VAR_9->buffer.length;
  VAR_16 = VAR_12->buffer.length;



  VAR_19 = FUNC_7(VAR_9->buffer.pointer,
     VAR_12->buffer.pointer,
     (VAR_15 > VAR_16) ? VAR_16 : VAR_15);

  switch (VAR_8) {
  case 130:



   if ((VAR_15 == VAR_16) && (VAR_19 == 0)) {



    VAR_18 = VAR_6;
   }
   break;

  case 129:

   if (VAR_19 > 0) {
    VAR_18 = VAR_6;
    goto cleanup;
   }
   if (VAR_19 < 0) {
    goto cleanup;
   }



   if (VAR_15 > VAR_16) {
    VAR_18 = VAR_6;
   }
   break;

  case 128:

   if (VAR_19 > 0) {
    goto cleanup;
   }
   if (VAR_19 < 0) {
    VAR_18 = VAR_6;
    goto cleanup;
   }



   if (VAR_15 < VAR_16) {
    VAR_18 = VAR_6;
   }
   break;

  default:

   FUNC_0((VAR_3,
        "Invalid comparison opcode: %X", VAR_8));
   VAR_17 = VAR_2;
   break;
  }
 }

cleanup:



 if (VAR_12 != VAR_10) {
  FUNC_6(VAR_12);
 }



 *VAR_11 = VAR_18;
 FUNC_8(VAR_17);
}

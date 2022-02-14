
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; union acpi_operand_object* buffer_obj; } ;
struct TYPE_7__ {scalar_t__ type; int reference_count; } ;
struct TYPE_6__ {scalar_t__ length; } ;
struct TYPE_5__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_4__ buffer_field; TYPE_3__ common; TYPE_2__ buffer; TYPE_1__ integer; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,union acpi_operand_object*) ;
 scalar_t__ FUNC_5 (union acpi_operand_object*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (union acpi_operand_object*,int ,int ,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int FUNC_9 (union acpi_operand_object*) ;
 int FUNC_10 (union acpi_operand_object*) ;
 int FUNC_11 (union acpi_operand_object*) ;
 int VAR_12 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static acpi_status
FUNC_13(u16 VAR_13,
     union acpi_operand_object *VAR_14,
     union acpi_operand_object *VAR_15,
     union acpi_operand_object *VAR_16,
     union acpi_operand_object *VAR_17,
     union acpi_operand_object *VAR_18)
{
 u32 VAR_19;
 u32 VAR_20;
 u32 VAR_21;
 u8 VAR_22;
 acpi_status VAR_23;

 FUNC_4(VAR_12, VAR_14);



 if (VAR_15->common.type != VAR_1) {
  FUNC_2((VAR_6,
       "Target of Create Field is not a Buffer object - %s",
       FUNC_10(VAR_15)));

  VAR_23 = VAR_4;
  goto cleanup;
 }






 if (FUNC_5(VAR_18) != VAR_0) {
  FUNC_2((VAR_6,
       "(%s) destination not a NS Node [%s]",
       FUNC_7(VAR_13),
       FUNC_8(VAR_18)));

  VAR_23 = VAR_4;
  goto cleanup;
 }

 VAR_19 = (u32) VAR_16->integer.value;




 switch (VAR_13) {
 case 130:



  VAR_22 = VAR_7;
  VAR_20 = VAR_19;
  VAR_21 = (u32) VAR_17->integer.value;



  if (VAR_21 == 0) {
   FUNC_0((VAR_6,
      "Attempt to CreateField of length zero"));
   VAR_23 = VAR_5;
   goto cleanup;
  }
  break;

 case 133:



  VAR_20 = VAR_19;
  VAR_21 = 1;
  VAR_22 = VAR_7;
  break;

 case 132:



  VAR_20 = 8 * VAR_19;
  VAR_21 = 8;
  VAR_22 = VAR_7;
  break;

 case 128:



  VAR_20 = 8 * VAR_19;
  VAR_21 = 16;
  VAR_22 = VAR_10;
  break;

 case 131:



  VAR_20 = 8 * VAR_19;
  VAR_21 = 32;
  VAR_22 = VAR_8;
  break;

 case 129:



  VAR_20 = 8 * VAR_19;
  VAR_21 = 64;
  VAR_22 = VAR_9;
  break;

 default:

  FUNC_2((VAR_6,
       "Unknown field creation opcode 0x%02X",
       VAR_13));
  VAR_23 = VAR_2;
  goto cleanup;
 }



 if ((VAR_20 + VAR_21) > (8 * (u32)VAR_15->buffer.length)) {
  VAR_23 = VAR_3;
  FUNC_1((VAR_6, VAR_23,
         "Field [%4.4s] at bit offset/length %u/%u "
         "exceeds size of target Buffer (%u bits)",
         FUNC_9(VAR_18),
         VAR_20, VAR_21,
         8 * (u32)VAR_15->buffer.length));
  goto cleanup;
 }






 VAR_23 =
     FUNC_6(VAR_14, VAR_22, 0,
          VAR_20, VAR_21);
 if (FUNC_3(VAR_23)) {
  goto cleanup;
 }

 VAR_14->buffer_field.buffer_obj = VAR_15;



 VAR_15->common.reference_count = (u16)
     (VAR_15->common.reference_count +
      VAR_14->common.reference_count);

cleanup:



 FUNC_11(VAR_16);
 FUNC_11(VAR_15);

 if (VAR_13 == 130) {
  FUNC_11(VAR_17);
 }



 if (FUNC_3(VAR_23)) {
  FUNC_11(VAR_18);
 } else {


  VAR_14->buffer_field.flags |= VAR_11;
 }

 FUNC_12(VAR_23);
}

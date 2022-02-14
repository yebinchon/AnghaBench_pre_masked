
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int field_flags; int base_byte_offset; int start_field_bit_offset; int bit_length; } ;
struct TYPE_17__ {int type; int flags; } ;
struct TYPE_16__ {int length; void* pointer; } ;
struct TYPE_15__ {int length; void* pointer; } ;
struct TYPE_14__ {int value; } ;
struct TYPE_13__ {TYPE_3__* region_obj; scalar_t__ base_byte_offset; int bit_length; } ;
union acpi_operand_object {TYPE_9__ common_field; TYPE_8__ common; TYPE_7__ string; TYPE_6__ buffer; TYPE_5__ integer; TYPE_4__ field; } ;
typedef int u64 ;
typedef int u32 ;
typedef int acpi_status ;
typedef int acpi_size ;
struct TYPE_11__ {scalar_t__ internal_pcc_buffer; } ;
struct TYPE_10__ {scalar_t__ space_id; scalar_t__ address; } ;
struct TYPE_12__ {TYPE_2__ field; TYPE_1__ region; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_operand_object*) ;
 scalar_t__ FUNC_3 (int ) ;

 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (union acpi_operand_object*) ;
 int FUNC_7 (union acpi_operand_object*,int ,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (union acpi_operand_object*,void*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (union acpi_operand_object*,union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_12 (union acpi_operand_object*,union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_13 (int) ;
 int VAR_14 ;
 int FUNC_14 (scalar_t__,void*,int) ;
 int FUNC_15 (int ) ;

acpi_status
FUNC_16(union acpi_operand_object *VAR_15,
       union acpi_operand_object *VAR_16,
       union acpi_operand_object **VAR_17)
{
 acpi_status VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 void *VAR_21;

 FUNC_2(VAR_14, VAR_16);



 if (!VAR_15 || !VAR_16) {
  FUNC_15(VAR_9);
 }

 if (VAR_16->common.type == VAR_6) {




  if (!(VAR_16->common.flags & VAR_12)) {
   VAR_18 = FUNC_6(VAR_16);
   if (FUNC_1(VAR_18)) {
    FUNC_15(VAR_18);
   }
  }
 } else if ((VAR_16->common.type == VAR_7) &&
     (VAR_16->field.region_obj->region.space_id ==
      VAR_0)) {



  VAR_18 = FUNC_11(VAR_15, VAR_16, VAR_17);
  FUNC_15(VAR_18);
 } else if ((VAR_16->common.type == VAR_7) &&
     (VAR_16->field.region_obj->region.space_id ==
      VAR_4
      || VAR_16->field.region_obj->region.space_id ==
      VAR_1
      || VAR_16->field.region_obj->region.space_id ==
      VAR_2)) {



  VAR_18 =
      FUNC_12(VAR_15, VAR_16,
          VAR_17);
  FUNC_15(VAR_18);
 } else if ((VAR_16->common.type == VAR_7) &&
     (VAR_16->field.region_obj->region.space_id ==
      VAR_3)) {







  VAR_20 =
      (acpi_size)FUNC_3(VAR_16->field.
          bit_length);
  FUNC_14(VAR_16->field.region_obj->field.internal_pcc_buffer +
         VAR_16->field.base_byte_offset,
         VAR_15->buffer.pointer, VAR_20);

  if ((VAR_16->field.region_obj->region.address ==
       VAR_13
       && FUNC_5(VAR_16->field.
      base_byte_offset))
      || FUNC_4(VAR_16->field.
      base_byte_offset)) {



   FUNC_0((VAR_5,
       "PCC COMD field has been written. Invoking PCC handler now.\n"));

   VAR_18 =
       FUNC_7(VAR_16, 0,
        (u64 *)VAR_16->field.
        region_obj->field.
        internal_pcc_buffer,
        VAR_8);
   FUNC_15(VAR_18);
  }
  return (VAR_11);
 }



 switch (VAR_15->common.type) {
 case 129:

  VAR_21 = &VAR_15->integer.value;
  VAR_19 = sizeof(VAR_15->integer.value);
  break;

 case 130:

  VAR_21 = VAR_15->buffer.pointer;
  VAR_19 = VAR_15->buffer.length;
  break;

 case 128:

  VAR_21 = VAR_15->string.pointer;
  VAR_19 = VAR_15->string.length;
  break;

 default:
  FUNC_15(VAR_10);
 }

 FUNC_0((VAR_5,
     "FieldWrite [FROM]: Obj %p (%s:%X), Buf %p, ByteLen %X\n",
     VAR_15,
     FUNC_13(VAR_15->common.type),
     VAR_15->common.type, VAR_21, VAR_19));

 FUNC_0((VAR_5,
     "FieldWrite [TO]:   Obj %p (%s:%X), BitLen %X, BitOff %X, ByteOff %X\n",
     VAR_16,
     FUNC_13(VAR_16->common.type),
     VAR_16->common.type,
     VAR_16->common_field.bit_length,
     VAR_16->common_field.start_field_bit_offset,
     VAR_16->common_field.base_byte_offset));



 FUNC_8(VAR_16->common_field.field_flags);



 VAR_18 = FUNC_9(VAR_16, VAR_21, VAR_19);
 FUNC_10(VAR_16->common_field.field_flags);
 FUNC_15(VAR_18);
}

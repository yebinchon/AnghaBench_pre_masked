
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int field_flags; int base_byte_offset; int start_field_bit_offset; int bit_length; } ;
struct TYPE_15__ {scalar_t__ type; int flags; } ;
struct TYPE_14__ {int bit_length; scalar_t__ base_byte_offset; TYPE_5__* region_obj; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_9__ {void* pointer; } ;
union acpi_operand_object {TYPE_8__ common_field; TYPE_7__ common; TYPE_6__ field; TYPE_2__ integer; TYPE_1__ buffer; } ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct acpi_walk_state {int dummy; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;
struct TYPE_12__ {scalar_t__ internal_pcc_buffer; } ;
struct TYPE_11__ {scalar_t__ space_id; } ;
struct TYPE_13__ {TYPE_4__ field; TYPE_3__ region; } ;


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
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (union acpi_operand_object*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (union acpi_operand_object*,void*,scalar_t__) ;
 int FUNC_7 (union acpi_operand_object*,void*) ;
 int FUNC_8 (union acpi_operand_object*,union acpi_operand_object**) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_13 ;
 union acpi_operand_object* FUNC_10 (scalar_t__) ;
 union acpi_operand_object* FUNC_11 (int ) ;
 int FUNC_12 (union acpi_operand_object*) ;
 int VAR_14 ;
 int FUNC_13 (void*,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ) ;

acpi_status
FUNC_15(struct acpi_walk_state *VAR_15,
        union acpi_operand_object *VAR_16,
        union acpi_operand_object **VAR_17)
{
 acpi_status VAR_18;
 union acpi_operand_object *VAR_19;
 void *VAR_20;
 u32 VAR_21;

 FUNC_2(VAR_14, VAR_16);



 if (!VAR_16) {
  FUNC_14(VAR_8);
 }
 if (!VAR_17) {
  FUNC_14(VAR_9);
 }

 if (VAR_16->common.type == VAR_6) {




  if (!(VAR_16->common.flags & VAR_12)) {
   VAR_18 = FUNC_4(VAR_16);
   if (FUNC_1(VAR_18)) {
    FUNC_14(VAR_18);
   }
  }
 } else if ((VAR_16->common.type == VAR_7) &&
     (VAR_16->field.region_obj->region.space_id ==
      VAR_4
      || VAR_16->field.region_obj->region.space_id ==
      VAR_1
      || VAR_16->field.region_obj->region.space_id ==
      VAR_2)) {



  VAR_18 = FUNC_8(VAR_16, VAR_17);
  FUNC_14(VAR_18);
 }
 VAR_21 =
     (acpi_size)FUNC_3(VAR_16->field.bit_length);

 if (VAR_21 > VAR_13) {



  VAR_19 = FUNC_10(VAR_21);
  if (!VAR_19) {
   FUNC_14(VAR_10);
  }
  VAR_20 = VAR_19->buffer.pointer;
 } else {


  VAR_19 = FUNC_11((u64) 0);
  if (!VAR_19) {
   FUNC_14(VAR_10);
  }

  VAR_21 = VAR_13;
  VAR_20 = &VAR_19->integer.value;
 }

 if ((VAR_16->common.type == VAR_7) &&
     (VAR_16->field.region_obj->region.space_id ==
      VAR_0)) {



  VAR_18 = FUNC_7(VAR_16, VAR_20);
  goto exit;
 } else if ((VAR_16->common.type == VAR_7) &&
     (VAR_16->field.region_obj->region.space_id ==
      VAR_3)) {




  FUNC_0((VAR_5,
      "PCC FieldRead bits %u\n",
      VAR_16->field.bit_length));

  FUNC_13(VAR_20,
         VAR_16->field.region_obj->field.internal_pcc_buffer +
         VAR_16->field.base_byte_offset,
         (acpi_size)FUNC_3(VAR_16->field.
             bit_length));

  *VAR_17 = VAR_19;
  return VAR_11;
 }

 FUNC_0((VAR_5,
     "FieldRead [TO]:   Obj %p, Type %X, Buf %p, ByteLen %X\n",
     VAR_16, VAR_16->common.type, VAR_20,
     VAR_21));
 FUNC_0((VAR_5,
     "FieldRead [FROM]: BitLen %X, BitOff %X, ByteOff %X\n",
     VAR_16->common_field.bit_length,
     VAR_16->common_field.start_field_bit_offset,
     VAR_16->common_field.base_byte_offset));



 FUNC_5(VAR_16->common_field.field_flags);



 VAR_18 = FUNC_6(VAR_16, VAR_20, VAR_21);
 FUNC_9(VAR_16->common_field.field_flags);

exit:
 if (FUNC_1(VAR_18)) {
  FUNC_12(VAR_19);
 } else {
  *VAR_17 = VAR_19;
 }

 FUNC_14(VAR_18);
}

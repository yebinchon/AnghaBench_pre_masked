
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int field_flags; } ;
struct TYPE_11__ {scalar_t__ length; void* pointer; } ;
struct TYPE_10__ {int attribute; TYPE_3__* region_obj; } ;
struct TYPE_7__ {scalar_t__ type; } ;
union acpi_operand_object {TYPE_6__ common_field; TYPE_5__ buffer; TYPE_4__ field; TYPE_1__ common; } ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
typedef int acpi_status ;
struct TYPE_8__ {int space_id; } ;
struct TYPE_9__ {TYPE_2__ region; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,union acpi_operand_object*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (union acpi_operand_object*,int ,int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,scalar_t__*) ;
 int FUNC_6 (int ) ;
 union acpi_operand_object* FUNC_7 (scalar_t__) ;
 int FUNC_8 (union acpi_operand_object*) ;
 int VAR_9 ;
 int FUNC_9 (void*,void*,scalar_t__) ;
 int FUNC_10 (int ) ;

acpi_status
FUNC_11(union acpi_operand_object *VAR_10,
    union acpi_operand_object *VAR_11,
    union acpi_operand_object **VAR_12)
{
 acpi_status VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 void *VAR_16;
 union acpi_operand_object *VAR_17;
 u32 VAR_18;
 u16 VAR_19;

 FUNC_2(VAR_9, VAR_11);
 if (VAR_10->common.type != VAR_3) {
  FUNC_0((VAR_7,
       "SMBus/IPMI/GenericSerialBus write requires "
       "Buffer, found type %s",
       FUNC_8(VAR_10)));

  FUNC_10(VAR_6);
 }

 switch (VAR_11->field.region_obj->region.space_id) {
 case 128:

  VAR_14 = VAR_2;
  VAR_18 = VAR_4 | (VAR_11->field.attribute << 16);
  break;

 case 129:

  VAR_14 = VAR_0;
  VAR_18 = VAR_4;
  break;

 case 130:

  VAR_19 = VAR_11->field.attribute;
  VAR_13 =
      FUNC_5(VAR_19,
             &VAR_14);
  if (FUNC_1(VAR_13)) {
   FUNC_0((VAR_7,
        "Invalid protocol ID for GSBus: 0x%4.4X",
        VAR_19));

   FUNC_10(VAR_13);
  }



  VAR_14 += VAR_1;
  VAR_18 = VAR_4 | (VAR_19 << 16);
  break;

 default:
  FUNC_10(VAR_5);
 }



 VAR_17 = FUNC_7(VAR_14);
 if (!VAR_17) {
  FUNC_10(VAR_8);
 }



 VAR_16 = VAR_17->buffer.pointer;
 VAR_15 = (VAR_14 < VAR_10->buffer.length ?
         VAR_14 : VAR_10->buffer.length);
 FUNC_9(VAR_16, VAR_10->buffer.pointer, VAR_15);



 FUNC_4(VAR_11->common_field.field_flags);





 VAR_13 = FUNC_3(VAR_11, 0, (u64 *)VAR_16, VAR_18);
 FUNC_6(VAR_11->common_field.field_flags);

 *VAR_12 = VAR_17;
 FUNC_10(VAR_13);
}

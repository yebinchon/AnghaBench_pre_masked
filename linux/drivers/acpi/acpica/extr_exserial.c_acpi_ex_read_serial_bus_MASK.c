
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int field_flags; } ;
struct TYPE_9__ {int pointer; } ;
struct TYPE_8__ {int attribute; TYPE_2__* region_obj; } ;
union acpi_operand_object {TYPE_5__ common_field; TYPE_4__ buffer; TYPE_3__ field; } ;
typedef int u32 ;
typedef int u16 ;
typedef int acpi_status ;
struct TYPE_6__ {int space_id; } ;
struct TYPE_7__ {TYPE_1__ region; } ;





 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,union acpi_operand_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (union acpi_operand_object*,int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (int ) ;
 union acpi_operand_object* FUNC_8 (int) ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int VAR_10 ;

acpi_status
FUNC_10(union acpi_operand_object *VAR_11,
   union acpi_operand_object **VAR_12)
{
 acpi_status VAR_13;
 u32 VAR_14;
 union acpi_operand_object *VAR_15;
 u32 VAR_16;
 u16 VAR_17;

 FUNC_3(VAR_9, VAR_11);
 switch (VAR_11->field.region_obj->region.space_id) {
 case 128:

  VAR_14 = VAR_3;
  VAR_16 = VAR_1 | (VAR_11->field.attribute << 16);
  break;

 case 129:

  VAR_14 = VAR_0;
  VAR_16 = VAR_1;
  break;

 case 130:

  VAR_17 = VAR_11->field.attribute;
  if (VAR_17 == VAR_8) {
   FUNC_1((VAR_6,
        "Invalid direct read using bidirectional write-then-read protocol"));

   FUNC_9(VAR_5);
  }

  VAR_13 =
      FUNC_6(VAR_17,
             &VAR_14);
  if (FUNC_2(VAR_13)) {
   FUNC_1((VAR_6,
        "Invalid protocol ID for GSBus: 0x%4.4X",
        VAR_17));

   FUNC_9(VAR_13);
  }



  VAR_14 += VAR_2;
  VAR_16 = VAR_1 | (VAR_17 << 16);
  break;

 default:
  FUNC_9(VAR_4);
 }



 VAR_15 = FUNC_8(VAR_14);
 if (!VAR_15) {
  FUNC_9(VAR_7);
 }



 FUNC_5(VAR_11->common_field.field_flags);



 VAR_13 = FUNC_4(VAR_11, 0,
           FUNC_0(VAR_10,
           VAR_15->buffer.
           pointer), VAR_16);
 FUNC_7(VAR_11->common_field.field_flags);

 *VAR_12 = VAR_15;
 FUNC_9(VAR_13);
}

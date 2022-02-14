
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ space_id; scalar_t__ length; int node; } ;
struct TYPE_5__ {scalar_t__ base_byte_offset; scalar_t__ access_byte_width; int node; union acpi_operand_object* region_obj; } ;
struct TYPE_4__ {scalar_t__ type; int flags; } ;
union acpi_operand_object {TYPE_3__ region; TYPE_2__ common_field; TYPE_1__ common; } ;
typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (union acpi_operand_object*) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (union acpi_operand_object*) ;
 int VAR_11 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static acpi_status
FUNC_9(union acpi_operand_object *VAR_12,
       u32 VAR_13)
{
 acpi_status VAR_14 = VAR_8;
 union acpi_operand_object *VAR_15;
 u8 VAR_16;

 FUNC_2(VAR_11, VAR_13);

 VAR_15 = VAR_12->common_field.region_obj;



 if (VAR_15->common.type != VAR_3) {
  FUNC_0((VAR_7, "Needed Region, found type 0x%X (%s)",
       VAR_15->common.type,
       FUNC_7(VAR_15)));

  FUNC_8(VAR_5);
 }

 VAR_16 = VAR_15->region.space_id;



 if (!FUNC_5(VAR_16)) {
  FUNC_0((VAR_7,
       "Invalid/unknown Address Space ID: 0x%2.2X",
       VAR_16));
  FUNC_8(VAR_4);
 }





 if (!(VAR_15->common.flags & VAR_9)) {
  VAR_14 = FUNC_4(VAR_15);
  if (FUNC_1(VAR_14)) {
   FUNC_8(VAR_14);
  }
 }





 if (VAR_16 == VAR_2 ||
     VAR_16 == VAR_0 ||
     VAR_16 == VAR_1) {



  FUNC_8(VAR_8);
 }
 if (VAR_15->region.length <
     (VAR_12->common_field.base_byte_offset + VAR_13 +
      VAR_12->common_field.access_byte_width)) {
  if (VAR_10) {





   if (FUNC_3(VAR_15->region.length,
       VAR_12->common_field.
       access_byte_width) >=
       ((acpi_size)VAR_12->common_field.
        base_byte_offset +
        VAR_12->common_field.access_byte_width +
        VAR_13)) {
    FUNC_8(VAR_8);
   }
  }

  if (VAR_15->region.length <
      VAR_12->common_field.access_byte_width) {





   FUNC_0((VAR_7,
        "Field [%4.4s] access width (%u bytes) "
        "too large for region [%4.4s] (length %u)",
        FUNC_6(VAR_12->
         common_field.node),
        VAR_12->common_field.access_byte_width,
        FUNC_6(VAR_15->region.
         node),
        VAR_15->region.length));
  }





  FUNC_0((VAR_7,
       "Field [%4.4s] Base+Offset+Width %u+%u+%u "
       "is beyond end of region [%4.4s] (length %u)",
       FUNC_6(VAR_12->common_field.node),
       VAR_12->common_field.base_byte_offset,
       VAR_13,
       VAR_12->common_field.access_byte_width,
       FUNC_6(VAR_15->region.node),
       VAR_15->region.length));

  FUNC_8(VAR_6);
 }

 FUNC_8(VAR_8);
}

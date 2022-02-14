
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int address; int space_id; } ;
struct TYPE_3__ {int base_byte_offset; int access_byte_width; union acpi_operand_object* region_obj; } ;
union acpi_operand_object {TYPE_2__ region; TYPE_1__ common_field; } ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (union acpi_operand_object*,union acpi_operand_object*,int,int,int ,int *) ;
 scalar_t__ FUNC_8 (union acpi_operand_object*,int) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int FUNC_10 (scalar_t__) ;

acpi_status
FUNC_11(union acpi_operand_object *VAR_7,
        u32 VAR_8, u64 *VAR_9, u32 VAR_10)
{
 acpi_status VAR_11;
 union acpi_operand_object *VAR_12;
 u32 VAR_13;

 FUNC_5(VAR_6);





 VAR_11 = FUNC_8(VAR_7, VAR_8);
 if (FUNC_3(VAR_11)) {
  FUNC_10(VAR_11);
 }
 VAR_12 = VAR_7->common_field.region_obj;
 VAR_13 =
     VAR_7->common_field.base_byte_offset + VAR_8;

 if ((VAR_10 & VAR_1) == VAR_2) {
  FUNC_0((VAR_0, "[READ]"));
 } else {
  FUNC_0((VAR_0, "[WRITE]"));
 }

 FUNC_1((VAR_0,
         " Region [%s:%X], Width %X, ByteBase %X, Offset %X at %8.8X%8.8X\n",
         FUNC_9(VAR_12->region.
            space_id),
         VAR_12->region.space_id,
         VAR_7->common_field.access_byte_width,
         VAR_7->common_field.base_byte_offset,
         VAR_8,
         FUNC_4(VAR_12->region.address +
       VAR_13)));



 VAR_11 = FUNC_7(VAR_12, VAR_7,
      VAR_10, VAR_13,
      FUNC_6(VAR_7->
          common_field.
          access_byte_width),
      VAR_9);

 if (FUNC_3(VAR_11)) {
  if (VAR_11 == VAR_5) {
   FUNC_2((VAR_3,
        "Region %s (ID=%u) not implemented",
        FUNC_9(VAR_12->region.
           space_id),
        VAR_12->region.space_id));
  } else if (VAR_11 == VAR_4) {
   FUNC_2((VAR_3,
        "Region %s (ID=%u) has no handler",
        FUNC_9(VAR_12->region.
           space_id),
        VAR_12->region.space_id));
  }
 }

 FUNC_10(VAR_11);
}

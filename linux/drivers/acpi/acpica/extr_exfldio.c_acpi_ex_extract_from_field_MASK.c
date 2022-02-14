
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bit_length; int access_byte_width; int start_field_bit_offset; } ;
union acpi_operand_object {TYPE_1__ common_field; } ;
typedef int u64 ;
typedef int u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (union acpi_operand_object*,int,int*,int ) ;
 int VAR_5 ;
 int FUNC_9 (char*,int*,int) ;
 int FUNC_10 (void*,int ,int) ;
 int FUNC_11 (int ) ;

acpi_status
FUNC_12(union acpi_operand_object *VAR_6,
      void *VAR_7, u32 VAR_8)
{
 acpi_status VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;

 FUNC_2(VAR_5);



 if (VAR_8 <
     FUNC_6(VAR_6->common_field.bit_length)) {
  FUNC_0((VAR_3,
       "Field size %u (bits) is too large for buffer (%u)",
       VAR_6->common_field.bit_length, VAR_8));

  FUNC_11(VAR_2);
 }

 FUNC_10(VAR_7, 0, VAR_8);
 VAR_17 = FUNC_5(VAR_6->common_field.access_byte_width);



 if ((VAR_6->common_field.start_field_bit_offset == 0) &&
     (VAR_6->common_field.bit_length == VAR_17)) {
  if (VAR_8 >= sizeof(u64)) {
   VAR_9 =
       FUNC_8(VAR_6, 0, VAR_7,
         VAR_1);
  } else {


   VAR_9 =
       FUNC_8(VAR_6, 0, &VAR_10,
         VAR_1);
   FUNC_9(VAR_7, &VAR_10, VAR_8);
  }

  FUNC_11(VAR_9);
 }





 if (VAR_6->common_field.access_byte_width > sizeof(u64)) {
  VAR_6->common_field.access_byte_width = sizeof(u64);
  VAR_17 = sizeof(u64) * 8;
 }



 VAR_15 =
     FUNC_7(VAR_6->common_field.bit_length,
        VAR_17);

 VAR_16 = FUNC_7(VAR_6->common_field.bit_length +
          VAR_6->common_field.
          start_field_bit_offset,
          VAR_17);



 VAR_9 =
     FUNC_8(VAR_6, VAR_12, &VAR_10,
       VAR_1);
 if (FUNC_1(VAR_9)) {
  FUNC_11(VAR_9);
 }
 VAR_11 =
     VAR_10 >> VAR_6->common_field.start_field_bit_offset;



 for (VAR_18 = 1; VAR_18 < VAR_16; VAR_18++) {



  VAR_12 += VAR_6->common_field.access_byte_width;
  VAR_9 =
      FUNC_8(VAR_6, VAR_12, &VAR_10,
        VAR_1);
  if (FUNC_1(VAR_9)) {
   FUNC_11(VAR_9);
  }
  if (VAR_17 -
      VAR_6->common_field.start_field_bit_offset <
      VAR_0) {
   VAR_11 |=
       VAR_10 << (VAR_17 -
       VAR_6->common_field.
       start_field_bit_offset);
  }

  if (VAR_18 == VAR_15) {
   break;
  }



  FUNC_9(((char *)VAR_7) + VAR_13, &VAR_11,
         FUNC_4(VAR_6->common_field.access_byte_width,
    VAR_8 - VAR_13));

  VAR_13 += VAR_6->common_field.access_byte_width;
  VAR_11 =
      VAR_10 >> VAR_6->common_field.start_field_bit_offset;
 }



 VAR_14 = VAR_6->common_field.bit_length % VAR_17;
 if (VAR_14) {
  VAR_11 &= FUNC_3(VAR_14);
 }



 FUNC_9(((char *)VAR_7) + VAR_13, &VAR_11,
        FUNC_4(VAR_6->common_field.access_byte_width,
   VAR_8 - VAR_13));

 FUNC_11(VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int field_flags; int access_byte_width; } ;
union acpi_operand_object {TYPE_1__ common_field; } ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int mask ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;


 int FUNC_6 (union acpi_operand_object*,int ,scalar_t__*,int ) ;
 int VAR_8 ;
 int FUNC_7 (int ) ;

acpi_status
FUNC_8(union acpi_operand_object *VAR_9,
          u64 VAR_10,
          u64 VAR_11, u32 VAR_12)
{
 acpi_status VAR_13 = VAR_6;
 u64 VAR_14;
 u64 VAR_15;

 FUNC_4(VAR_8, VAR_10);



 VAR_14 = VAR_11;



 if (VAR_10 != VAR_2) {



  switch (VAR_9->common_field.
   field_flags & VAR_7) {
  case 130:




   if ((~VAR_10 << (FUNC_5(sizeof(VAR_10)) -
           FUNC_5(VAR_9->common_field.
        access_byte_width))) != 0) {




    VAR_13 =
        FUNC_6(VAR_9,
          VAR_12,
          &VAR_15,
          VAR_1);
    if (FUNC_2(VAR_13)) {
     FUNC_7(VAR_13);
    }

    VAR_14 |= (VAR_15 & ~VAR_10);
   }
   break;

  case 129:



   VAR_14 |= ~VAR_10;
   break;

  case 128:



   VAR_14 &= VAR_10;
   break;

  default:

   FUNC_1((VAR_5,
        "Unknown UpdateRule value: 0x%X",
        (VAR_9->common_field.field_flags &
         VAR_7)));
   FUNC_7(VAR_4);
  }
 }

 FUNC_0((VAR_0,
     "Mask %8.8X%8.8X, DatumOffset %X, Width %X, "
     "Value %8.8X%8.8X, MergedValue %8.8X%8.8X\n",
     FUNC_3(VAR_10),
     VAR_12,
     VAR_9->common_field.access_byte_width,
     FUNC_3(VAR_11),
     FUNC_3(VAR_14)));



 VAR_13 =
     FUNC_6(VAR_9, VAR_12,
       &VAR_14, VAR_3);

 FUNC_7(VAR_13);
}

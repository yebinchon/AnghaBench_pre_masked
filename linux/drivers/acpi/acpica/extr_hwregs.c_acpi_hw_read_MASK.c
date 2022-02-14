
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct acpi_generic_address {int bit_offset; int bit_width; scalar_t__ space_id; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_physical_address ;
typedef scalar_t__ acpi_io_address ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__*,int,int ,scalar_t__) ;
 int FUNC_7 (scalar_t__,struct acpi_generic_address*,int) ;
 int FUNC_8 (scalar_t__,int*,int) ;
 int FUNC_9 (struct acpi_generic_address*,int,scalar_t__*) ;
 int FUNC_10 (scalar_t__,scalar_t__*,int) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_2 ;

acpi_status FUNC_12(u64 *VAR_3, struct acpi_generic_address *VAR_4)
{
 u64 VAR_5;
 u8 VAR_6;
 u32 VAR_7;
 u8 VAR_8;
 u64 VAR_9;
 u32 VAR_10;
 u8 VAR_11;
 acpi_status VAR_12;

 FUNC_4(VAR_2);



 VAR_12 = FUNC_9(VAR_4, 64, &VAR_5);
 if (FUNC_2(VAR_12)) {
  return (VAR_12);
 }





 *VAR_3 = 0;
 VAR_6 = FUNC_7(VAR_5, VAR_4, 64);
 VAR_7 = VAR_4->bit_offset + VAR_4->bit_width;
 VAR_8 = VAR_4->bit_offset;





 VAR_11 = 0;
 while (VAR_7) {
  if (VAR_8 >= VAR_6) {
   VAR_9 = 0;
   VAR_8 -= VAR_6;
  } else {
   if (VAR_4->space_id == VAR_0) {
    VAR_12 =
        FUNC_10((acpi_physical_address)
       VAR_5 +
       VAR_11 *
       FUNC_1
       (VAR_6),
       &VAR_9, VAR_6);
   } else {

    VAR_12 = FUNC_8((acpi_io_address)
          VAR_5 +
          VAR_11 *
          FUNC_1
          (VAR_6),
          &VAR_10,
          VAR_6);
    VAR_9 = (u64)VAR_10;
   }
  }





  FUNC_6(VAR_3, VAR_11 * VAR_6,
         FUNC_5(VAR_6), VAR_9);

  VAR_7 -=
      VAR_7 > VAR_6 ? VAR_6 : VAR_7;
  VAR_11++;
 }

 FUNC_0((VAR_1,
     "Read:  %8.8X%8.8X width %2d from %8.8X%8.8X (%s)\n",
     FUNC_3(*VAR_3), VAR_6,
     FUNC_3(VAR_5),
     FUNC_11(VAR_4->space_id)));

 return (VAR_12);
}

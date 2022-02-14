
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct acpi_generic_address {int bit_offset; int bit_width; scalar_t__ space_id; scalar_t__ access_width; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u8
FUNC_4(u64 VAR_1,
        struct acpi_generic_address *VAR_2, u8 VAR_3)
{
 u8 VAR_4;
 if (!VAR_2->bit_offset && VAR_2->bit_width &&
     FUNC_2(VAR_2->bit_width) &&
     FUNC_1(VAR_2->bit_width, 8)) {
  VAR_4 = VAR_2->bit_width;
 } else if (VAR_2->access_width) {
  VAR_4 = FUNC_0(VAR_2->access_width);
 } else {
  VAR_4 =
      FUNC_3(VAR_2->bit_offset +
       VAR_2->bit_width);
  if (VAR_4 <= 8) {
   VAR_4 = 8;
  } else {
   while (!FUNC_1(VAR_1, VAR_4 >> 3)) {
    VAR_4 >>= 1;
   }
  }
 }



 if (VAR_2->space_id == VAR_0) {
  VAR_3 = 32;
 }






 if (VAR_4 < VAR_3) {
  return (VAR_4);
 }
 return (VAR_3);
}

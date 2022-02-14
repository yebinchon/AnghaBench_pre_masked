
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef size_t acpi_size ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int*,int *) ;




 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(u8 *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5;
 u32 VAR_6;
 u8 VAR_7;

 if (!VAR_0) {
  FUNC_2("Null Buffer Pointer in DumpBuffer!\n");
  return;
 }

 if ((VAR_1 < 4) || (VAR_1 & 0x01)) {
  VAR_2 = 131;
 }



 while (VAR_4 < VAR_1) {



  FUNC_2("%8.4X: ", (VAR_3 + VAR_4));



  for (VAR_5 = 0; VAR_5 < 16;) {
   if (VAR_4 + VAR_5 >= VAR_1) {



    FUNC_2("%*s", ((VAR_2 * 2) + 1), " ");
    VAR_5 += VAR_2;
    continue;
   }

   switch (VAR_2) {
   case 131:
   default:

    FUNC_2("%02X ",
            VAR_0[(acpi_size)VAR_4 + VAR_5]);
    break;

   case 128:

    FUNC_0(&VAR_6,
         &VAR_0[(acpi_size)VAR_4 + VAR_5]);
    FUNC_2("%04X ", VAR_6);
    break;

   case 130:

    FUNC_1(&VAR_6,
         &VAR_0[(acpi_size)VAR_4 + VAR_5]);
    FUNC_2("%08X ", VAR_6);
    break;

   case 129:

    FUNC_1(&VAR_6,
         &VAR_0[(acpi_size)VAR_4 + VAR_5]);
    FUNC_2("%08X", VAR_6);

    FUNC_1(&VAR_6,
         &VAR_0[(acpi_size)VAR_4 + VAR_5 +
          4]);
    FUNC_2("%08X ", VAR_6);
    break;
   }

   VAR_5 += VAR_2;
  }





  FUNC_2(" ");
  for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
   if (VAR_4 + VAR_5 >= VAR_1) {
    FUNC_2("\n");
    return;
   }





   if (VAR_5 == 0) {
    FUNC_2("// ");
   }

   VAR_7 = VAR_0[(acpi_size)VAR_4 + VAR_5];
   if (FUNC_3(VAR_7)) {
    FUNC_2("%c", VAR_7);
   } else {
    FUNC_2(".");
   }
  }



  FUNC_2("\n");
  VAR_4 += 16;
 }

 return;
}

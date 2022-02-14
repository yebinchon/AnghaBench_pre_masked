
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ acpi_rsdesc_size ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,...) ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(u8 *VAR_1,
         acpi_rsdesc_size VAR_2,
         u8 *VAR_3,
         acpi_rsdesc_size VAR_4)
{
 u8 *VAR_5;
 u8 *VAR_6;
 u8 *VAR_7;
 u8 *VAR_8;
 acpi_rsdesc_size VAR_9;
 acpi_rsdesc_size VAR_10;
 acpi_rsdesc_size VAR_11 = 0;
 u8 VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14;



 if (VAR_2 != VAR_4) {
  FUNC_0("**** Buffer length mismatch in converted "
          "AML: Original %X, New %X ****\n",
          VAR_2, VAR_4);
 }

 VAR_5 = VAR_1;
 VAR_6 = VAR_3;
 VAR_7 = VAR_1 + VAR_2;
 VAR_8 = VAR_3 + VAR_4;



 while ((VAR_5 < VAR_7) && (VAR_6 < VAR_8)) {



  VAR_9 = FUNC_1(VAR_5);
  VAR_10 = FUNC_1(VAR_6);
  VAR_12 = FUNC_2(VAR_5);



  if (VAR_9 != VAR_10) {
   FUNC_0
       ("**** Length mismatch in descriptor [%.2X] type %2.2X, "
        "Offset %8.8X Len1 %X, Len2 %X ****\n", VAR_13,
        VAR_12, VAR_11, VAR_9, VAR_10);
  }



  else if (FUNC_3(VAR_5, VAR_6, VAR_9)) {
   FUNC_0
       ("**** Data mismatch in descriptor [%.2X] type %2.2X, "
        "Offset %8.8X ****\n", VAR_13, VAR_12,
        VAR_11);

   for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
    if (VAR_5[VAR_14] != VAR_6[VAR_14]) {
     FUNC_0
         ("Mismatch at byte offset %.2X: is %2.2X, "
          "should be %2.2X\n", VAR_14, VAR_6[VAR_14],
          VAR_5[VAR_14]);
    }
   }
  }



  if (VAR_12 == VAR_0) {
   return;
  }



  VAR_13++;
  VAR_11 += VAR_9;
  VAR_5 += VAR_9;
  VAR_6 += VAR_10;
 }
}

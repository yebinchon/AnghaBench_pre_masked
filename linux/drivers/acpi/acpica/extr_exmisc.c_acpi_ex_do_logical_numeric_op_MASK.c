
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;

acpi_status
FUNC_3(u16 VAR_6,
         u64 VAR_7, u64 VAR_8, u8 *VAR_9)
{
 acpi_status VAR_10 = VAR_2;
 u8 VAR_11 = VAR_3;

 FUNC_1(VAR_5);

 switch (VAR_6) {
 case 129:

  if (VAR_7 && VAR_8) {
   VAR_11 = VAR_4;
  }
  break;

 case 128:

  if (VAR_7 || VAR_8) {
   VAR_11 = VAR_4;
  }
  break;

 default:

  FUNC_0((VAR_1,
       "Invalid numeric logical opcode: %X", VAR_6));
  VAR_10 = VAR_0;
  break;
 }



 *VAR_9 = VAR_11;
 FUNC_2(VAR_10);
}

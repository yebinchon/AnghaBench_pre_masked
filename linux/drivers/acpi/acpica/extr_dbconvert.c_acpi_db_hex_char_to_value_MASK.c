
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

acpi_status FUNC_2(int VAR_2, u8 *VAR_3)
{
 u8 VAR_4;



 if (!FUNC_0(VAR_2)) {
  return (VAR_0);
 }

 if (VAR_2 <= 0x39) {
  VAR_4 = (u8)(VAR_2 - 0x30);
 } else {
  VAR_4 = (u8)(FUNC_1(VAR_2) - 0x37);
 }

 *VAR_3 = VAR_4;
 return (VAR_1);
}

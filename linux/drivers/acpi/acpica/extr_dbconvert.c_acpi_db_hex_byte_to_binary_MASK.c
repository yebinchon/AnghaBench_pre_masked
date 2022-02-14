
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char,int*) ;

__attribute__((used)) static acpi_status FUNC_2(char *VAR_1, u8 *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 acpi_status VAR_5;



 VAR_5 = FUNC_1(VAR_1[0], &VAR_3);
 if (FUNC_0(VAR_5)) {
  return (VAR_5);
 }



 VAR_5 = FUNC_1(VAR_1[1], &VAR_4);
 if (FUNC_0(VAR_5)) {
  return (VAR_5);
 }

 *VAR_2 = (u8)((VAR_3 << 4) | VAR_4);
 return (VAR_0);
}

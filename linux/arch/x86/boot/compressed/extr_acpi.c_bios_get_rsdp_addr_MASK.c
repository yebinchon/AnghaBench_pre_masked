
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned long u16 ;
typedef int acpi_physical_address ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ) ;

__attribute__((used)) static acpi_physical_address FUNC_1(void)
{
 unsigned long VAR_4;
 u8 *VAR_5;


 VAR_4 = *(u16 *)VAR_0;
 VAR_4 <<= 4;





 if (VAR_4 > 0x400) {
  VAR_5 = FUNC_0((u8 *)VAR_4, VAR_1);
  if (VAR_5)
   return (acpi_physical_address)(unsigned long)VAR_5;
 }


 VAR_5 = FUNC_0((u8 *) VAR_2,
     VAR_3);
 if (VAR_5)
  return (acpi_physical_address)(unsigned long)VAR_5;

 return 0;
}

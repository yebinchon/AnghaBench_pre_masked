
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t acpi_object_type ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;

u32 FUNC_2(acpi_object_type VAR_5)
{
 FUNC_0();

 if (VAR_5 > VAR_2) {



  FUNC_1((VAR_3, "Invalid Object Type 0x%X", VAR_5));
  return (VAR_1);
 }

 return (((u32)VAR_4[VAR_5]) & VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int acpi_status ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;

acpi_status
FUNC_1(u32 VAR_6, u32 *VAR_7)
{

 if ((VAR_6 > VAR_1) ||
     (VAR_5[VAR_6] == VAR_0)) {
  FUNC_0((VAR_3,
       "Invalid Field/AccessAs protocol ID: 0x%4.4X",
       VAR_6));

  return (VAR_2);
 }

 *VAR_7 = VAR_5[VAR_6];
 return (VAR_4);
}

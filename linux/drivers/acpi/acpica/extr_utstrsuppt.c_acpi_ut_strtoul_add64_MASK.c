
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static acpi_status FUNC_0(u64 VAR_5, u32 VAR_6, u64 *VAR_7)
{
 u64 VAR_8;



 if ((VAR_5 > 0) && (VAR_6 > (VAR_1 - VAR_5))) {
  return (VAR_2);
 }

 VAR_8 = VAR_5 + VAR_6;



 if ((VAR_4 == 32) && (VAR_8 > VAR_0)) {
  return (VAR_2);
 }

 *VAR_7 = VAR_8;
 return (VAR_3);
}

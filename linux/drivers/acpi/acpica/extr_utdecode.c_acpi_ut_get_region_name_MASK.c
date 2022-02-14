
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 char const** VAR_4 ;

const char *FUNC_0(u8 VAR_5)
{

 if (VAR_5 >= VAR_3) {
  return ("UserDefinedRegion");
 } else if (VAR_5 == VAR_0) {
  return ("DataTable");
 } else if (VAR_5 == VAR_1) {
  return ("FunctionalFixedHW");
 } else if (VAR_5 >= VAR_2) {
  return ("InvalidSpaceId");
 }

 return (VAR_4[VAR_5]);
}

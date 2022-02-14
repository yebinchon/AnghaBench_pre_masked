
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool FUNC_0(u32 VAR_5, u32 VAR_6)
{
 if (VAR_6 == VAR_3) {
  if (VAR_5 >= VAR_0 && VAR_5 <= 21000000)
   return 1;
  if (VAR_5 >= 25300000 && VAR_5 <= VAR_1)
   return 1;
 } else if (VAR_6 == VAR_2) {
  if (VAR_5 >= 25000000 && VAR_5 <= VAR_1)
   return 1;
 } else if (VAR_6 >= VAR_4 && VAR_6 < VAR_2) {
  if (VAR_5 >= VAR_0 && VAR_5 <= VAR_1)
   return 1;
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static char * FUNC_0(u8 VAR_3)
{
 if (VAR_3 & VAR_0)
  if (VAR_3 & VAR_1)
   if (VAR_3 & VAR_2)
    return "Active - First & Last";
   else
    return "Active - First";
  else
   if (VAR_3 & VAR_2)
    return "Active - Last";
   else
    return "Active";
 else
  return "Inactive";
}

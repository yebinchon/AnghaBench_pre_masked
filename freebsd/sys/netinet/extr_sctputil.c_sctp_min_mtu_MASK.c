
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

uint32_t
FUNC_1(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (VAR_0 > 0) {
  if (VAR_1 > 0) {
   if (VAR_2 > 0) {
    return (FUNC_0(VAR_0, FUNC_0(VAR_1, VAR_2)));
   } else {
    return (FUNC_0(VAR_0, VAR_1));
   }
  } else {
   if (VAR_2 > 0) {
    return (FUNC_0(VAR_0, VAR_2));
   } else {
    return (VAR_0);
   }
  }
 } else {
  if (VAR_1 > 0) {
   if (VAR_2 > 0) {
    return (FUNC_0(VAR_1, VAR_2));
   } else {
    return (VAR_1);
   }
  } else {
   return (VAR_2);
  }
 }
}

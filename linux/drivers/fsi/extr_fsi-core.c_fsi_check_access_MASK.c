
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(uint32_t VAR_1, size_t VAR_2)
{
 if (VAR_2 == 4) {
  if (VAR_1 & 0x3)
   return -VAR_0;
 } else if (VAR_2 == 2) {
  if (VAR_1 & 0x1)
   return -VAR_0;
 } else if (VAR_2 != 1)
  return -VAR_0;

 return 0;
}

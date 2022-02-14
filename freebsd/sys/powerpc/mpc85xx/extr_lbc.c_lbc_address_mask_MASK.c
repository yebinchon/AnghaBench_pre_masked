
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_1)
{
 int VAR_2 = 15;

 if (VAR_1 == ~0)
  return (0);

 while (VAR_2 < 32) {
  if (VAR_1 == (1U << VAR_2))
   break;
  VAR_2++;
 }

 if (VAR_2 == 32)
  return (VAR_0);

 return (0xffff8000 << (VAR_2 - 15));
}

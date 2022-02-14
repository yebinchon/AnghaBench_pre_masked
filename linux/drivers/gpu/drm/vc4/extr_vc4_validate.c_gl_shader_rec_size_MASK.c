
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(uint32_t VAR_0)
{
 uint32_t VAR_1 = VAR_0 & 7;
 bool VAR_2 = VAR_0 & 8;

 if (VAR_1 == 0)
  VAR_1 = 8;

 if (VAR_2)
  return 100 + VAR_1 * 4;
 else
  return 36 + VAR_1 * 8;
}

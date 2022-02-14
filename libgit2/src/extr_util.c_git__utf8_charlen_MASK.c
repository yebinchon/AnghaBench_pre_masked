
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t* VAR_0 ;

int FUNC_0(const uint8_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4;

 VAR_3 = VAR_0[VAR_1[0]];
 if (!VAR_3)
  return -1;

 if (VAR_2 > 0 && VAR_3 > VAR_2)
  return -1;

 for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
  if ((VAR_1[VAR_4] & 0xC0) != 0x80)
   return -1;
 }

 return (int)VAR_3;
}

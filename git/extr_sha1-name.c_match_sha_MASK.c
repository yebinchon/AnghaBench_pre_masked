
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned VAR_0, const unsigned char *VAR_1, const unsigned char *VAR_2)
{
 do {
  if (*VAR_1 != *VAR_2)
   return 0;
  VAR_1++;
  VAR_2++;
  VAR_0 -= 2;
 } while (VAR_0 > 1);
 if (VAR_0)
  if ((*VAR_1 ^ *VAR_2) & 0xf0)
   return 0;
 return 1;
}

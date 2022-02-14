
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(register char *VAR_0, register char *VAR_1)
{
 register int VAR_2 = 0;

 while (VAR_0 < VAR_1) {
  if (*VAR_0 == '\t') {
   VAR_2 = (VAR_2 + 8) &~ 7;
   VAR_0++;
   continue;
  }
  if (*VAR_0 < ' ')
   VAR_2 += 2;
  else
   VAR_2++;
  VAR_0++;
 }
 return (VAR_2);
}

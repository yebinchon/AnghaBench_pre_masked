
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

void
FUNC_0(char *VAR_1, char *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
 while (VAR_4--) {
  VAR_2[VAR_3] = VAR_0 % 256;
  if (VAR_3 % 2)
   VAR_2[VAR_3] += VAR_1[VAR_3];
  VAR_3++;
 }
}

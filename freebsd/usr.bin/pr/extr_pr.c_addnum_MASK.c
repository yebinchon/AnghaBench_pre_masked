
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

void
FUNC_0(char *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_1 + VAR_2;

 do {
  *--VAR_4 = VAR_0[VAR_3 % 10];
  VAR_3 /= 10;
 } while (VAR_3 && (VAR_4 > VAR_1));




 while (VAR_4 > VAR_1)
  *--VAR_4 = ' ';
}

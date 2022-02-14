
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char VAR_0)
{
 static char VAR_1[3];

 if (VAR_0 < 040 || VAR_0 == 0177) {
  VAR_1[0] = '^';
  VAR_1[1] = VAR_0 == 0177 ? '?' : VAR_0+'A'-1;
  VAR_1[2] = '\0';
 } else {
  VAR_1[0] = VAR_0;
  VAR_1[1] = '\0';
 }
 return (VAR_1);
}

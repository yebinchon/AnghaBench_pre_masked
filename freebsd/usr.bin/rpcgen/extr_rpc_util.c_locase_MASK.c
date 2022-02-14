
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(const char *VAR_0)
{
 char VAR_1;
 static char VAR_2[100];
 char *VAR_3 = VAR_2;

 while ( (VAR_1 = *VAR_0++) ) {
  *VAR_3++ = (VAR_1 >= 'A' && VAR_1 <= 'Z') ? (VAR_1 - 'A' + 'a') : VAR_1;
 }
 *VAR_3 = 0;
 return (VAR_2);
}

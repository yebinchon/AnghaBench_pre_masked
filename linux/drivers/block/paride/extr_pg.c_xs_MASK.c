
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, char *VAR_1, int VAR_2)
{
 char VAR_3 = '\0';
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  char VAR_5 = *VAR_0++;
  if (VAR_5 != ' ' && VAR_5 != VAR_3)
   VAR_3 = *VAR_1++ = VAR_5;
 }
 if (VAR_3 == ' ')
  VAR_1--;
 *VAR_1 = '\0';
}

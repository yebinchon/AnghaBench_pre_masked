
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char*,int *,int) ;

int
FUNC_2(
 const char *VAR_0, size_t VAR_1, char *VAR_2, int VAR_3)
{
 char VAR_4;
 int VAR_5;
 int VAR_6 = (VAR_3 == 1) ? 1: 0;
 unsigned VAR_7;

 for (VAR_7 = VAR_5 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_4 = VAR_0[VAR_7];
  if (VAR_4 == '?') {
   if (VAR_3 < 0)
    VAR_6 = 1;
  } else if (VAR_4 == '+' && VAR_6) {
   VAR_4 = ' ';
  } else if ((VAR_7 + 2) < VAR_1 && VAR_4 == '%' &&
   FUNC_0(VAR_0[VAR_7+1]) && FUNC_0(VAR_0[VAR_7+2])) {
   char VAR_8[3];
   VAR_8[0] = VAR_0[VAR_7+1];
   VAR_8[1] = VAR_0[VAR_7+2];
   VAR_8[2] = '\0';
   VAR_4 = (char)FUNC_1(VAR_8, ((void*)0), 16);
   VAR_7 += 2;
  }
  VAR_2[VAR_5++] = VAR_4;
 }
 VAR_2[VAR_5] = '\0';

 return (VAR_5);
}

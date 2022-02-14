
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,int) ;
 char const FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0,
          const char *VAR_1,
          size_t VAR_2,
          const char *VAR_3)
{
 int VAR_4;
 size_t VAR_5;

 if ((VAR_0[0] == '.' && !FUNC_0(VAR_0 + 1, VAR_1, VAR_2))) {
  VAR_5 = VAR_2 + 1;
only_spaces_and_periods:
  for (;;) {
   char VAR_6 = VAR_0[VAR_5++];
   if (!VAR_6)
    return 1;
   if (VAR_6 != ' ' && VAR_6 != '.')
    return 0;
  }
 }





 if (!FUNC_0(VAR_0, VAR_1, 6) && VAR_0[6] == '~' &&
     VAR_0[7] >= '1' && VAR_0[7] <= '4') {
  VAR_5 = 8;
  goto only_spaces_and_periods;
 }





 for (VAR_5 = 0, VAR_4 = 0; VAR_5 < 8; VAR_5++)
  if (VAR_0[VAR_5] == '\0')
   return 0;
  else if (VAR_4) {
   if (VAR_0[VAR_5] < '0' || VAR_0[VAR_5] > '9')
    return 0;
  } else if (VAR_0[VAR_5] == '~') {
   if (VAR_0[++VAR_5] < '1' || VAR_0[VAR_5] > '9')
    return 0;
   VAR_4 = 1;
  } else if (VAR_5 >= 6)
   return 0;
  else if (VAR_0[VAR_5] & 0x80) {




   return 0;
  } else if (FUNC_1(VAR_0[VAR_5]) != VAR_3[VAR_5])
   return 0;

 goto only_spaces_and_periods;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;

int FUNC_2(char *VAR_0, const char *VAR_1, int *VAR_2)
{
 char *VAR_3;
 const char *VAR_4;




 VAR_4 = VAR_1 + FUNC_1(VAR_1);
 while (VAR_1 < VAR_4) {
  char VAR_5 = *VAR_1++;
  if (FUNC_0(VAR_5))
   VAR_5 = '/';
  *VAR_0++ = VAR_5;
 }
 VAR_3 = VAR_0;

 while (FUNC_0(*VAR_1))
  VAR_1++;

 for (;;) {
  char VAR_6 = *VAR_1;
  if (VAR_6 == '.') {
   if (!VAR_1[1]) {

    VAR_1++;
   } else if (FUNC_0(VAR_1[1])) {

    VAR_1 += 2;
    while (FUNC_0(*VAR_1))
     VAR_1++;
    continue;
   } else if (VAR_1[1] == '.') {
    if (!VAR_1[2]) {

     VAR_1 += 2;
     goto up_one;
    } else if (FUNC_0(VAR_1[2])) {

     VAR_1 += 3;
     while (FUNC_0(*VAR_1))
      VAR_1++;
     goto up_one;
    }
   }
  }


  while ((VAR_6 = *VAR_1++) != '\0' && !FUNC_0(VAR_6))
   *VAR_0++ = VAR_6;
  if (FUNC_0(VAR_6)) {
   *VAR_0++ = '/';
   while (FUNC_0(VAR_6))
    VAR_6 = *VAR_1++;
   VAR_1--;
  } else if (!VAR_6)
   break;
  continue;

 up_one:




  VAR_0--;
  if (VAR_0 <= VAR_3)
   return -1;

  while (VAR_3 < VAR_0 && VAR_0[-1] != '/')
   VAR_0--;
  if (VAR_2 && *VAR_2 > VAR_0 - VAR_3)
   *VAR_2 = VAR_0 - VAR_3;
 }
 *VAR_0 = '\0';
 return 0;
}

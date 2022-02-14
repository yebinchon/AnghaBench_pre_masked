
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static int FUNC_1(char **VAR_0, int VAR_1)
{
 char *VAR_2 = *VAR_0;

 for (;;) {
  while (FUNC_0((unsigned char)*VAR_2))
   VAR_2++;
  if (VAR_1 && *VAR_2 == ')') {
   VAR_2++;
   break;
  }
  if (*VAR_2 == '(') {

   VAR_2++;
   if (FUNC_1(&VAR_2, VAR_1 + 1))
    goto bail;
  } else if (*VAR_2 == '"') {

   VAR_2++;
   for (; *VAR_2 != '"'; VAR_2++)
    if (!*VAR_2)
     goto bail;
   VAR_2++;
  } else {

   for (; *VAR_2 && !FUNC_0((unsigned char)*VAR_2); VAR_2++)
    if (VAR_1 && *VAR_2 == ')')
     break;
  }

  if (!VAR_1)
   break;
  if (!*VAR_2)
   goto bail;
 }
 *VAR_0 = VAR_2;
 return 0;

bail:
 return -1;
}

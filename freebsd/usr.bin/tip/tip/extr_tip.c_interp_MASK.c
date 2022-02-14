
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0)
{
 static char VAR_1[256];
 char *VAR_2 = VAR_1, VAR_3, *VAR_4;

 while ((VAR_3 = *VAR_0++)) {
  for (VAR_4 = "\nn\rr\tt\ff\033E\bb"; *VAR_4; VAR_4++)
   if (*VAR_4++ == VAR_3) {
    *VAR_2++ = '\\'; *VAR_2++ = *VAR_4;
    goto next;
   }
  if (VAR_3 < 040) {
   *VAR_2++ = '^'; *VAR_2++ = VAR_3 + 'A'-1;
  } else if (VAR_3 == 0177) {
   *VAR_2++ = '^'; *VAR_2++ = '?';
  } else
   *VAR_2++ = VAR_3;
 next:
  ;
 }
 *VAR_2 = '\0';
 return (VAR_1);
}

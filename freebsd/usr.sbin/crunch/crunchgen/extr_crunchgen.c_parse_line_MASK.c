
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

void
FUNC_1(char *VAR_0, int *VAR_1, char **VAR_2, int VAR_3)
{
 char *VAR_4;

 VAR_4 = VAR_0;
 *VAR_1 = 0;

 while (1) {
  while (FUNC_0((unsigned char)*VAR_4))
   VAR_4++;

  if (*VAR_4 == '\0' || *VAR_4 == '#')
   break;

  if (*VAR_1 < VAR_3)
   VAR_2[(*VAR_1)++] = VAR_4;

  while (*VAR_4 && !FUNC_0((unsigned char)*VAR_4) && *VAR_4 != '#')
   VAR_4++;

  if (*VAR_4 == '\0' || *VAR_4 == '#')
   break;

  *VAR_4++ = '\0';
 }

 if (*VAR_4)
  *VAR_4 = '\0';
}

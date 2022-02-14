
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 char* FUNC_1 (char*) ;

char *FUNC_2(char *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3;
 if ((VAR_1 = FUNC_1(VAR_0)) == ((void*)0))
  return ((void*)0);
 for (VAR_3 = VAR_2 = VAR_1; *VAR_2 != '\0'; VAR_2++) {
  if (*VAR_2 == '-')
   *VAR_3++ = '_';
  else if (*VAR_2 == '_' || FUNC_0((unsigned char)*VAR_2))
   *VAR_3++ = *VAR_2;
 }
 *VAR_3 = '\0';
 return VAR_1;
}

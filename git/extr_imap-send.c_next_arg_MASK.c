
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static char *FUNC_2(char **VAR_0)
{
 char *VAR_1;

 if (!VAR_0 || !*VAR_0)
  return ((void*)0);
 while (FUNC_0((unsigned char) **VAR_0))
  (*VAR_0)++;
 if (!**VAR_0) {
  *VAR_0 = ((void*)0);
  return ((void*)0);
 }
 if (**VAR_0 == '"') {
  ++*VAR_0;
  VAR_1 = *VAR_0;
  *VAR_0 = FUNC_1(*VAR_0, '"');
 } else {
  VAR_1 = *VAR_0;
  while (**VAR_0 && !FUNC_0((unsigned char) **VAR_0))
   (*VAR_0)++;
 }
 if (*VAR_0) {
  if (**VAR_0)
   *(*VAR_0)++ = 0;
  if (!**VAR_0)
   *VAR_0 = ((void*)0);
 }
 return VAR_1;
}

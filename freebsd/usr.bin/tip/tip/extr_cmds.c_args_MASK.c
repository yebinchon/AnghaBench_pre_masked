
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char *VAR_0, char *VAR_1[], int VAR_2)
{
 char *VAR_3 = VAR_0, *VAR_4;
 char **VAR_5 = VAR_1;
 int VAR_6 = 0;

 do {
  while (*VAR_3 && (*VAR_3 == ' ' || *VAR_3 == '\t'))
   VAR_3++;
  VAR_4 = VAR_3;
  if (*VAR_3)
   *VAR_5 = VAR_3;
  while (*VAR_3 && (*VAR_3 != ' ' && *VAR_3 != '\t'))
   VAR_3++;
  if (VAR_3 != VAR_4)
   VAR_5++, VAR_6++;
  if (*VAR_3)
   *VAR_3++ = '\0';
 } while (*VAR_3 && VAR_6 < VAR_2);

 return(VAR_6);
}

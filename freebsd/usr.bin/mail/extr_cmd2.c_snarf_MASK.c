
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(char *VAR_0, int *VAR_1)
{
 char *VAR_2;

 *VAR_1 = 1;
 VAR_2 = FUNC_2(VAR_0) + VAR_0 - 1;





 while (VAR_2 > VAR_0 && FUNC_0((unsigned char)*VAR_2))
  VAR_2--;
 *++VAR_2 = '\0';





 while (VAR_2 > VAR_0 && !FUNC_0((unsigned char)*VAR_2))
  VAR_2--;
 if (*VAR_2 == '\0') {
  FUNC_1("No file specified.\n");
  return (((void*)0));
 }
 if (FUNC_0((unsigned char)*VAR_2))
  *VAR_2++ = '\0';
 else
  *VAR_1 = 0;
 return (VAR_2);
}

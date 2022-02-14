
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;

int
FUNC_3(char *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = 0;
 while (*VAR_0 != '\0' && VAR_2 < VAR_1 - 1) {
  if (!FUNC_1((unsigned char)*VAR_0) ||
      !(FUNC_0((unsigned char)*VAR_0) ||
      FUNC_2((unsigned char)*VAR_0))) {
   return (0);
  }
  VAR_0++;
  VAR_2++;
 }
 *VAR_0 = '\0';
 return (VAR_2 > 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (unsigned char) ;

__attribute__((used)) static char *
FUNC_3(int *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_1;

 if (!FUNC_2((unsigned char)*++VAR_3)) {
  if (VAR_2 || *VAR_3 == '-' || *VAR_3 == '+')
   FUNC_1(1, "option %.1s requires an unsigned integer", VAR_1);
  *VAR_0 = 0;
  return(VAR_1);
 }
 *VAR_0 = FUNC_0(VAR_3);
 while (*++VAR_3)
  if (!FUNC_2((unsigned char)*VAR_3))
   break;
 return(--VAR_3);
}

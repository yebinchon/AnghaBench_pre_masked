
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char) ;
 char** VAR_0 ;

__attribute__((used)) static int
FUNC_2(register char *VAR_1)
{
 register char **VAR_2 = VAR_0;
 register int VAR_3 = 1;
 register char *VAR_4 = VAR_1;

 while (++VAR_4, FUNC_1(*VAR_4))
  VAR_3++;
 while ((VAR_4 = *VAR_2++))
  if (!FUNC_0(VAR_1,VAR_4,VAR_3) && !FUNC_1(VAR_4[VAR_3]))
   return (VAR_3);
 return (0);
}

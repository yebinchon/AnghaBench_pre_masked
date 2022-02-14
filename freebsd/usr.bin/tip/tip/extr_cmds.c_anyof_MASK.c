
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,char*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, char *VAR_1)
{
 int VAR_2;

 while ((VAR_2 = *VAR_0++))
  if (FUNC_0(VAR_2, VAR_1))
   return(1);
 return(0);
}

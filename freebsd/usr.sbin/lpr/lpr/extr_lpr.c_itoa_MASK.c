
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(int VAR_0)
{
 static char VAR_1[10] = "########";
 register char *VAR_2;

 VAR_2 = &VAR_1[8];
 do
  *VAR_2-- = VAR_0%10 + '0';
 while (VAR_0 /= 10);
 return(++VAR_2);
}

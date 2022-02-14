
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_1(int VAR_0)
{
 char VAR_1[12],
  *VAR_2;
 int VAR_3 = 0;


 FUNC_0(VAR_1, "%u", VAR_0);
 for (VAR_2 = VAR_1; *VAR_2 != '\0'; VAR_2++)
  VAR_3 += (*VAR_2 - '0');

 return(VAR_3);
}

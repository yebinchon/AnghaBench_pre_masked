
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int,char*,char*) ;
 scalar_t__ FUNC_1 (char*,char**,int) ;

__attribute__((used)) static u_long
FUNC_2(char *VAR_0)
{
 char *VAR_1;
 register u_long VAR_2;

 VAR_2 = (int) FUNC_1(VAR_0, &VAR_1, 10);
 if (VAR_1 == VAR_0 || *VAR_1 != '\0')
  FUNC_0(1, "%s is illegal version number", VAR_0);
 return (VAR_2);
}

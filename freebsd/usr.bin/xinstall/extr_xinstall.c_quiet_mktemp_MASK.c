
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_2(VAR_1)) == -1)
  return (((void*)0));
 FUNC_0 (VAR_2);
 if (FUNC_3(VAR_1) == -1)
  FUNC_1(VAR_0, "unlink %s", VAR_1);
 return (VAR_1);
}

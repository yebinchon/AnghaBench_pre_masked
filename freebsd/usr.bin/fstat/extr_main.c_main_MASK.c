
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int,char*,char*) ;
 int FUNC_4 (char*,char*) ;

int
FUNC_5(int VAR_0, char *VAR_1[])
{
 char *VAR_2;

 VAR_2 = FUNC_0(VAR_1[0]);
 if (VAR_2 == ((void*)0))
  FUNC_3(1, "basename(%s)", VAR_1[0]);
 if (!FUNC_4(VAR_2, "fuser"))
  return (FUNC_2(VAR_0, VAR_1));
 else
  return (FUNC_1(VAR_0, VAR_1));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 (int,char**) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int
FUNC_6(int VAR_0, char **VAR_1)
{
 char *VAR_2;

 if (VAR_1[0] == ((void*)0))
  FUNC_1(1, "NULL command name");

 VAR_2 = FUNC_0(VAR_1[0]);

 if (FUNC_5(VAR_2, "automount") == 0)
  return (FUNC_2(VAR_0, VAR_1));
 else if (FUNC_5(VAR_2, "automountd") == 0)
  return (FUNC_3(VAR_0, VAR_1));
 else if (FUNC_5(VAR_2, "autounmountd") == 0)
  return (FUNC_4(VAR_0, VAR_1));
 else
  FUNC_1(1, "binary name should be either \"automount\", "
      "\"automountd\", or \"autounmountd\"");
}

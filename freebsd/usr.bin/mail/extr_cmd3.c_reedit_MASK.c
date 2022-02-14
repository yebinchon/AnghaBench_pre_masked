
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

char *
FUNC_3(char *VAR_0)
{
 char *VAR_1;

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 if ((VAR_0[0] == 'r' || VAR_0[0] == 'R') &&
     (VAR_0[1] == 'e' || VAR_0[1] == 'E') &&
     VAR_0[2] == ':')
  return (VAR_0);
 VAR_1 = FUNC_0(FUNC_2(VAR_0) + 5);
 FUNC_1(VAR_1, "Re: %s", VAR_0);
 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

int FUNC_2 (char *VAR_0)
{
 if (VAR_0[0] == '$')
  return FUNC_0 (VAR_0+1);
 if (VAR_0[0] == '0' && VAR_0[1] == 'x')
  return FUNC_0 (VAR_0+2);
 return FUNC_1 (VAR_0);
}

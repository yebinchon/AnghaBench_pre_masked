
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;

int FUNC_1(const char *VAR_0)
{

 if (!VAR_0 || !FUNC_0(1, *VAR_0++))
  return 0;
 while (*VAR_0 && *VAR_0 != ':') {
  if (!FUNC_0(0, *VAR_0++))
   return 0;
 }

 return (VAR_0[0] == ':' && VAR_0[1] == '/' && VAR_0[2] == '/');
}

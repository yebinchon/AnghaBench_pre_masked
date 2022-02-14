
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;

int FUNC_2(const char *VAR_0)
{
 const char *VAR_1 = FUNC_1(VAR_0, ':');
 const char *VAR_2 = FUNC_1(VAR_0, '/');
 return !VAR_1 || (VAR_2 && VAR_2 < VAR_1) ||
  FUNC_0(VAR_0);
}

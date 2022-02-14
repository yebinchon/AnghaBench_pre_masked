
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_4)
{
 if (FUNC_0(VAR_4, "http") == 0)
  return VAR_1;
 else if (FUNC_0(VAR_4, "https") == 0)
  return VAR_2;
 else if (FUNC_0(VAR_4, "git") == 0)
  return VAR_0;
 else if (FUNC_0(VAR_4, "ssh") == 0)
  return VAR_3;

 return ((void*)0);
}

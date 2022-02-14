
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static uintmax_t FUNC_1(const char *VAR_0)
{
 if (!*VAR_0)
  return 1;
 else if (!FUNC_0(VAR_0, "k"))
  return 1024;
 else if (!FUNC_0(VAR_0, "m"))
  return 1024 * 1024;
 else if (!FUNC_0(VAR_0, "g"))
  return 1024 * 1024 * 1024;
 return 0;
}

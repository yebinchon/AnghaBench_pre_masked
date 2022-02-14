
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* long_name; char* short_name; } ;


 int FUNC_0 (char*,char*,char const*,...) ;

int FUNC_1(const struct option *VAR_0, const char *VAR_1)
{
 if (VAR_0->long_name) {
  if (VAR_0->short_name)
   return FUNC_0("BUG: switch '%c' (--%s) %s",
         VAR_0->short_name, VAR_0->long_name, VAR_1);
  return FUNC_0("BUG: option '%s' %s", VAR_0->long_name, VAR_1);
 }
 return FUNC_0("BUG: switch '%c' %s", VAR_0->short_name, VAR_1);
}

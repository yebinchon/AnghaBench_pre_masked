
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const**) ;
 int FUNC_3 (char const*,int ,char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(const char *VAR_0, const char **VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;
 if (FUNC_4(*VAR_1, "now")) {
  timestamp_t VAR_3 = FUNC_1("now");
  if (FUNC_1(*VAR_1) >= VAR_3)
   FUNC_3(VAR_0, FUNC_0("Invalid %s: '%s'"), VAR_0, *VAR_1);
 }
 return VAR_2;
}

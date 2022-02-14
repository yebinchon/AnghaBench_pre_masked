
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*) ;
 int VAR_6 ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_7, const char *VAR_8)
{
 if (!FUNC_5(VAR_7, "branch.autosetupmerge")) {
  if (VAR_8 && !FUNC_4(VAR_8, "always")) {
   VAR_6 = VAR_4;
   return 0;
  }
  VAR_6 = FUNC_3(VAR_7, VAR_8);
  return 0;
 }
 if (!FUNC_5(VAR_7, "branch.autosetuprebase")) {
  if (!VAR_8)
   return FUNC_1(VAR_7);
  else if (!FUNC_5(VAR_8, "never"))
   VAR_5 = VAR_2;
  else if (!FUNC_5(VAR_8, "local"))
   VAR_5 = VAR_1;
  else if (!FUNC_5(VAR_8, "remote"))
   VAR_5 = VAR_3;
  else if (!FUNC_5(VAR_8, "always"))
   VAR_5 = VAR_0;
  else
   return FUNC_2(FUNC_0("malformed value for %s"), VAR_7);
  return 0;
 }


 return 0;
}

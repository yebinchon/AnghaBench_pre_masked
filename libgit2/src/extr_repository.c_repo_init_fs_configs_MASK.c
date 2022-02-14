
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(
 git_config *VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 bool VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_3)
  VAR_3 = VAR_2;

 if ((VAR_5 = FUNC_2(
   VAR_0, "core.filemode", FUNC_5(VAR_1))) < 0)
  return VAR_5;

 if (!FUNC_0(VAR_3)) {
  if ((VAR_5 = FUNC_2(VAR_0, "core.symlinks", 0)) < 0)
   return VAR_5;
 } else if (FUNC_1(VAR_0, "core.symlinks") < 0)
  FUNC_3();

 if (VAR_4) {
  if (FUNC_6(VAR_2)) {
   if ((VAR_5 = FUNC_2(VAR_0, "core.ignorecase", 1)) < 0)
    return VAR_5;
  } else if (FUNC_1(VAR_0, "core.ignorecase") < 0)
   FUNC_3();
 }
 return 0;
}

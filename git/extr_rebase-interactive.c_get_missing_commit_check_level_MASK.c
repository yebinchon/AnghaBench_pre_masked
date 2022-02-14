
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum missing_commit_check_level { ____Placeholder_missing_commit_check_level } missing_commit_check_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char const**) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,char const*) ;

__attribute__((used)) static enum missing_commit_check_level FUNC_4(void)
{
 const char *VAR_3;

 if (FUNC_1("rebase.missingcommitscheck", &VAR_3) ||
   !FUNC_2("ignore", VAR_3))
  return VAR_1;
 if (!FUNC_2("warn", VAR_3))
  return VAR_2;
 if (!FUNC_2("error", VAR_3))
  return VAR_0;
 FUNC_3(FUNC_0("unrecognized setting %s for option "
    "rebase.missingCommitsCheck. Ignoring."), VAR_3);
 return VAR_1;
}

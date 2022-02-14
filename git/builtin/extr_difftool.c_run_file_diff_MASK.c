
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct argv_array {int argv; } ;


 struct argv_array VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct argv_array*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char const*,char const**) ;

__attribute__((used)) static int FUNC_3(int VAR_2, const char *VAR_3,
    int VAR_4, const char **VAR_5)
{
 struct argv_array VAR_6 = VAR_0;
 const char *VAR_7[] = {
  "GIT_PAGER=", "GIT_EXTERNAL_DIFF=git-difftool--helper", ((void*)0),
  ((void*)0)
 };
 int VAR_8 = 0, VAR_9;

 if (VAR_2 > 0)
  VAR_7[2] = "GIT_DIFFTOOL_PROMPT=true";
 else if (!VAR_2)
  VAR_7[2] = "GIT_DIFFTOOL_NO_PROMPT=true";


 FUNC_0(&VAR_6, "diff");
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
  FUNC_0(&VAR_6, VAR_5[VAR_9]);
 VAR_8 = FUNC_2(VAR_6.argv, VAR_1, VAR_3, VAR_7);
 FUNC_1(VAR_8);
}

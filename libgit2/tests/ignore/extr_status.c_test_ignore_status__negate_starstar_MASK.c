
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int*,int ,char*) ;

void FUNC_6(void)
{
    int VAR_1;

    VAR_0 = FUNC_3("empty_standard_repo");

    FUNC_1("empty_standard_repo/.gitignore",
              "code/projects/**/packages/*\n"
              "!code/projects/**/packages/repositories.config");

    FUNC_2(FUNC_4("empty_standard_repo/code/projects/foo/bar/packages", 0777));
    FUNC_1("empty_standard_repo/code/projects/foo/bar/packages/repositories.config", "");

    FUNC_2(FUNC_5(&VAR_1, VAR_0, "code/projects/foo/bar/packages/repositories.config"));
    FUNC_0(0, VAR_1);
}

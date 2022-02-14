
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int *,char*) ;
 int FUNC_6 (int*,int ,char*) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (char*,int) ;

void FUNC_9(void)
{
 int VAR_2, VAR_3 = 0, VAR_4;
 git_config *VAR_5;

 VAR_1 = FUNC_3("empty_standard_repo");

 FUNC_2(FUNC_7(&VAR_5, VAR_1));
 VAR_4 = FUNC_5(&VAR_3, VAR_5, "core.ignorecase");
 FUNC_4(VAR_5);
 if (VAR_4 == VAR_0)
  VAR_4 = 0;

 FUNC_2(VAR_4);

 FUNC_2(FUNC_8("empty_standard_repo/src", 0777));
 FUNC_2(FUNC_8("empty_standard_repo/src/src", 0777));
 FUNC_1("empty_standard_repo/src/.gitignore", "src\n");
 FUNC_1("empty_standard_repo/.gitignore", "");

 FUNC_2(FUNC_6(&VAR_2, VAR_1, "src/test.txt"));
 FUNC_0(0, VAR_2);
 FUNC_2(FUNC_6(&VAR_2, VAR_1, "src/src/test.txt"));
 FUNC_0(1, VAR_2);
 FUNC_2(FUNC_6(&VAR_2, VAR_1, "src/foo/test.txt"));
 FUNC_0(0, VAR_2);

 FUNC_2(FUNC_6(&VAR_2, VAR_1, "SRC/src/test.txt"));
 FUNC_0(VAR_3, VAR_2);
 FUNC_2(FUNC_6(&VAR_2, VAR_1, "src/SRC/test.txt"));
 FUNC_0(VAR_3, VAR_2);
}

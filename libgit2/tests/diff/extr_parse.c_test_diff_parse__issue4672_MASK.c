
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_patch ;
typedef int git_diff_hunk ;
typedef int git_diff ;


 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int,int,int,int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ) ;
 int FUNC_7 (int const**,size_t*,int *,int ) ;
 int FUNC_8 (char const*) ;

void FUNC_9(void)
{
 const char *VAR_0 = "diff --git a/a b/a\n"
 "index 7f129fd..af431f2 100644\n"
 "--- a/a\n"
 "+++ b/a\n"
 "@@ -3 +3 @@\n"
 "-a contents 2\n"
 "+a contents\n";

 git_diff *VAR_1;
 git_patch *VAR_2;
 const git_diff_hunk *VAR_3;
 size_t VAR_4, VAR_5 = 0;

 FUNC_2(FUNC_4(&VAR_1, VAR_0, FUNC_8(VAR_0)));
 FUNC_2(FUNC_6(&VAR_2, VAR_1, 0));
 FUNC_2(FUNC_7(&VAR_3, &VAR_4, VAR_2, 0));

 FUNC_1(3, -1, 1, VAR_2, 0, VAR_5++);
 FUNC_1(-1, 3, 1, VAR_2, 0, VAR_5++);

 FUNC_0(VAR_4, VAR_5);

 FUNC_5(VAR_2);
 FUNC_3(VAR_1);
}

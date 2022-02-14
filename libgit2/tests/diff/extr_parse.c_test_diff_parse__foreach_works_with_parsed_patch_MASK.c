
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_diff ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *,int *,int *,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,int ) ;
 int FUNC_5 (char const*) ;

void FUNC_6(void)
{
 const char VAR_1[] =
     "diff --git a/obj1 b/obj2\n"
     "index 1234567..7654321 10644\n"
     "--- a/obj1\n"
     "+++ b/obj2\n"
     "@@ -1 +1 @@\n"
     "-abcde\n"
     "+12345\n";
 int VAR_2 = 0;
 git_diff *VAR_3;

 FUNC_1(FUNC_4(&VAR_3, VAR_1, FUNC_5(VAR_1)));
 FUNC_1(FUNC_2(VAR_3, VAR_0, ((void*)0), ((void*)0), ((void*)0), &VAR_2));
 FUNC_0(VAR_2, 1);

 FUNC_3(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_reuc_entry ;
typedef int git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int **,char*,char*) ;
 scalar_t__ FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_index *VAR_0;
 const git_index_entry *VAR_1;
 const git_index_reuc_entry *VAR_2;

 FUNC_1(FUNC_6(&VAR_0, "trivial-6", "trivial-6-branch"));

 FUNC_0((VAR_1 = FUNC_3(VAR_0, "removed-in-both.txt", 0)) == ((void*)0));
 FUNC_0(FUNC_4(VAR_0) == 1);
 FUNC_0(VAR_2 = FUNC_5(VAR_0, "removed-in-both.txt"));

 FUNC_0(FUNC_7(VAR_0) == 0);

 FUNC_2(VAR_0);
}

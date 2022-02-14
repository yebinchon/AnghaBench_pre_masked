
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_entry ;
typedef int git_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int **,char*,char*) ;
 scalar_t__ FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_index *VAR_0;
 const git_index_entry *VAR_1;

 FUNC_1(FUNC_5(&VAR_0, "trivial-5alt-1", "trivial-5alt-1-branch"));

 FUNC_0(VAR_1 = FUNC_3(VAR_0, "new-and-same.txt", 0));
 FUNC_0(FUNC_4(VAR_0) == 0);
 FUNC_0(FUNC_6(VAR_0) == 0);

 FUNC_2(VAR_0);
}

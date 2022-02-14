
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_reuc_entry ;
typedef int git_index_entry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 () ;
 int VAR_0 ;

void FUNC_7(void)
{
 const git_index_entry *VAR_1;
 const git_index_reuc_entry *VAR_2;

 FUNC_1(FUNC_5("trivial-8", "trivial-8-branch"));

 FUNC_0((VAR_1 = FUNC_2(VAR_0, "removed-in-8.txt", 0)) == ((void*)0));

 FUNC_0(FUNC_3(VAR_0) == 1);
 FUNC_0(VAR_2 = FUNC_4(VAR_0, "removed-in-8.txt"));

 FUNC_0(FUNC_6() == 0);
}

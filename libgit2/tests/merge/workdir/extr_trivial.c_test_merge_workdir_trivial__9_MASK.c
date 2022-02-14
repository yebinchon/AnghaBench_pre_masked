
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_index_entry ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;
 int VAR_0 ;

void FUNC_6(void)
{
 const git_index_entry *VAR_1;

 FUNC_1(FUNC_4("trivial-9", "trivial-9-branch"));

 FUNC_0((VAR_1 = FUNC_2(VAR_0, "removed-in-9-branch.txt", 0)) == ((void*)0));
 FUNC_0(FUNC_3(VAR_0) == 0);

 FUNC_0(FUNC_5() == 2);
 FUNC_0(VAR_1 = FUNC_2(VAR_0, "removed-in-9-branch.txt", 1));
 FUNC_0(VAR_1 = FUNC_2(VAR_0, "removed-in-9-branch.txt", 2));
}

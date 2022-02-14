
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (unsigned int*,int *,char*) ;

void FUNC_5(void)
{
 unsigned int VAR_1;
 git_repository *VAR_2 = FUNC_3("empty_standard_repo");

 FUNC_1("empty_standard_repo/new_file", "new_file\n");

 FUNC_2(FUNC_4(&VAR_1, VAR_2, "new_file"));
 FUNC_0(VAR_1 == VAR_0);
}

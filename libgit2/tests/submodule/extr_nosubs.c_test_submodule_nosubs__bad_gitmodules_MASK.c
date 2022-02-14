
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *,int *,char*) ;

void FUNC_6(void)
{
 git_repository *VAR_1 = FUNC_4("status");

 FUNC_1("status/.gitmodules", "[submodule \"foobar\"]\tpath=blargle\n\turl=\n\tbranch=\n\tupdate=flooble\n\n");

 FUNC_3("status/.gitmodules", "[submodule \"foobar\"]\tpath=blargle\n\turl=\n\tbranch=\n\tupdate=rebase\n\n");

 FUNC_2(FUNC_5(((void*)0), VAR_1, "foobar"));
 FUNC_0(VAR_0, FUNC_5(((void*)0), VAR_1, "subdir"));
}

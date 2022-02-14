
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 () ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int *) ;

void FUNC_4(void)
{
 git_repository *VAR_0 = FUNC_1("testrepo.git");

 FUNC_3("refs/fakestash", ((void*)0), VAR_0);

 FUNC_2(VAR_0);
 FUNC_3("refs/fakestash", "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", VAR_0);
 FUNC_3("refs/fakestash@{0}", "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", VAR_0);
 FUNC_3("fakestash", "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", VAR_0);
 FUNC_3("fakestash@{0}", "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", VAR_0);

 FUNC_0();
}

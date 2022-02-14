
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int **,int *,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,char*) ;
 int FUNC_9 (char*,char*,int *) ;

void FUNC_10(void)
{
 git_repository *VAR_1;
 git_reference *VAR_2;
 git_object *VAR_3;
 char VAR_4[VAR_0 + 1];

 VAR_1 = FUNC_2("testrepo.git");

 FUNC_9("a65fedf39aefe402d3bb6e24df4d4f5fe4547750", "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", VAR_1);

 FUNC_0(FUNC_8(&VAR_3, VAR_1, "HEAD~3"));
 FUNC_0(FUNC_3(&VAR_2, VAR_1, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", (git_commit *)VAR_3, 0));

 FUNC_6(VAR_4, VAR_0 + 1, FUNC_5(VAR_3));

 FUNC_9("a65fedf39aefe402d3bb6e24df4d4f5fe4547750", "a65fedf39aefe402d3bb6e24df4d4f5fe4547750", VAR_1);
 FUNC_9("heads/a65fedf39aefe402d3bb6e24df4d4f5fe4547750", VAR_4, VAR_1);

 FUNC_7(VAR_2);
 FUNC_4(VAR_3);
 FUNC_1();
}

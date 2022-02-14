
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char const**,int *,int ,char*,char*) ;
 int FUNC_5 (int *) ;

void FUNC_6(void)
{
 git_repository *VAR_1 = FUNC_3("testrepo.git");
 const char *VAR_2;

 FUNC_1(FUNC_5(VAR_1));

 FUNC_2(FUNC_4(
  &VAR_2, VAR_1, VAR_0, "README.md", "diff"));
 FUNC_1(FUNC_0(VAR_2));
}

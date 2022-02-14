
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 char const* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int **,int *,char const*,int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*) ;
 int * VAR_1 ;

void FUNC_10(void)
{
 git_reference *VAR_2, *VAR_3, *VAR_4;
 git_repository *VAR_5;

 const char *VAR_6 = "refs/heads/" "\303\205" "ngstr" "\303\266" "m";
 const char *VAR_7 = "refs/heads/master";


 FUNC_2(FUNC_5(&VAR_2, VAR_1, VAR_7));
 FUNC_2(FUNC_3(
  &VAR_3, VAR_1, VAR_6, FUNC_7(VAR_2), 0, ((void*)0)));
 FUNC_1(VAR_6, FUNC_6(VAR_3));
 FUNC_4(VAR_2);


 FUNC_2(FUNC_9(&VAR_5, "testrepo.git"));

 FUNC_2(FUNC_5(&VAR_4, VAR_5, VAR_6));
 FUNC_0(FUNC_7(VAR_3), FUNC_7(VAR_4));
 FUNC_1(VAR_6, FUNC_6(VAR_4));
 FUNC_4(VAR_4);
 FUNC_4(VAR_3);
 FUNC_8(VAR_5);
}

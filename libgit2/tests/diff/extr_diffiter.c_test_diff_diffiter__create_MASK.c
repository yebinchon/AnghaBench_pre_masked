
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_diff_delta ;
typedef int git_diff ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,size_t) ;
 int FUNC_5 (int **,int *,int *,int *) ;
 size_t FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_repository *VAR_0 = FUNC_2("attr");
 git_diff *VAR_1;
 size_t VAR_2, VAR_3;

 FUNC_1(FUNC_5(&VAR_1, VAR_0, ((void*)0), ((void*)0)));

 VAR_3 = FUNC_6(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  const git_diff_delta *VAR_4 = FUNC_4(VAR_1, VAR_2);
  FUNC_0(VAR_4 != ((void*)0));
 }

 FUNC_0(!FUNC_4(VAR_1, VAR_3));

 FUNC_3(VAR_1);
}

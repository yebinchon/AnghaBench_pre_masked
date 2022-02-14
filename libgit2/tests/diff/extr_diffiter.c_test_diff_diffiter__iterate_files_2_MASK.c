
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_diff_delta ;
typedef int git_diff ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,size_t) ;
 int FUNC_6 (int **,int *,int *,int *) ;
 size_t FUNC_7 (int *) ;

void FUNC_8(void)
{
 git_repository *VAR_0 = FUNC_3("status");
 git_diff *VAR_1;
 size_t VAR_2, VAR_3;
 int VAR_4 = 0;

 FUNC_2(FUNC_6(&VAR_1, VAR_0, ((void*)0), ((void*)0)));

 VAR_3 = FUNC_7(VAR_1);
 FUNC_1(8, (int)VAR_3);

 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  const git_diff_delta *VAR_5 = FUNC_5(VAR_1, VAR_2);
  FUNC_0(VAR_5 != ((void*)0));
  VAR_4++;
 }
 FUNC_1(8, VAR_4);

 FUNC_4(VAR_1);
}

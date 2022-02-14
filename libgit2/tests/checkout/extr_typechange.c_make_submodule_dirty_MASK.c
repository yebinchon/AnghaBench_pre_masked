
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int **,int *,int ) ;

__attribute__((used)) static int FUNC_11(git_submodule *VAR_3, const char *VAR_4, void *VAR_5)
{
 git_buf VAR_6 = VAR_0;
 git_buf VAR_7 = VAR_0;
 git_repository *VAR_8;

 FUNC_0(VAR_4);
 FUNC_0(VAR_5);


 FUNC_1(FUNC_5(
  &VAR_6,
  FUNC_8(VAR_2),
  FUNC_9(VAR_3)
 ));
 FUNC_6(FUNC_3(&VAR_6), ((void*)0), VAR_1);


 FUNC_1(FUNC_10(&VAR_8, VAR_3, 0));


 FUNC_1(
  FUNC_5(&VAR_7, FUNC_8(VAR_8), "dirty"));
 FUNC_2(FUNC_3(&VAR_7));

 FUNC_4(&VAR_7);
 FUNC_4(&VAR_6);
 FUNC_7(VAR_8);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_repository ;


 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int **,int *) ;

__attribute__((used)) static int FUNC_5(git_submodule *VAR_0, const char *VAR_1, void *VAR_2)
{
 git_repository *VAR_3 = ((void*)0);
 FUNC_0(VAR_1); FUNC_0(VAR_2);

 if (FUNC_4(&VAR_3, VAR_0) < 0 ||
  FUNC_3(VAR_3, 1) < 0)
  FUNC_1();
 FUNC_2(VAR_3);

 return 0;
}

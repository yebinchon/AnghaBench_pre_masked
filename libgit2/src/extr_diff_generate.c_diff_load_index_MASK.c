
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_index ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static int FUNC_3(git_index **VAR_0, git_repository *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0, VAR_1);


 if (!VAR_2 && FUNC_1(*VAR_0, 0) < 0)
  FUNC_0();

 return VAR_2;
}

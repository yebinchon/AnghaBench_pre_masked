
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int ) ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static int FUNC_3(git_tree **VAR_1, git_repository *VAR_2)
{
 int VAR_3 = 0;
 git_reference *VAR_4 = ((void*)0);
 git_object *VAR_5;

 if (!(VAR_3 = FUNC_2(&VAR_4, VAR_2)) &&
  !(VAR_3 = FUNC_1(&VAR_5, VAR_4, VAR_0)))
  *VAR_1 = (git_tree *)VAR_5;

 FUNC_0(VAR_4);

 return VAR_3;
}

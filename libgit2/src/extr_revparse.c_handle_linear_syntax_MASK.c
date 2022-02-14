
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int **,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int ) ;

__attribute__((used)) static int FUNC_3(git_object **VAR_4, git_object *VAR_5, int VAR_6)
{
 git_object *VAR_7 = ((void*)0);
 int VAR_8;

 if ((VAR_8 = FUNC_2(&VAR_7, VAR_5, VAR_3)) < 0)
  return (VAR_8 == VAR_0 || VAR_8 == VAR_2) ?
   VAR_1 : VAR_8;

 VAR_8 = FUNC_0((git_commit **)VAR_4, (git_commit*)VAR_7, VAR_6);

 FUNC_1(VAR_7);
 return VAR_8;
}

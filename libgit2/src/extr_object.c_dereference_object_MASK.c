
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_tag ;
typedef int git_object_t ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *) ;

__attribute__((used)) static int FUNC_3(git_object **VAR_2, git_object *VAR_3)
{
 git_object_t VAR_4 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 130:
  return FUNC_0((git_tree **)VAR_2, (git_commit*)VAR_3);

 case 129:
  return FUNC_2(VAR_2, (git_tag*)VAR_3);

 case 131:
 case 128:
  return VAR_1;

 default:
  return VAR_0;
 }
}

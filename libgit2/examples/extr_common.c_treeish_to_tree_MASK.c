
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (int **,int *,char const*) ;

void FUNC_4(
 git_tree **VAR_1, git_repository *VAR_2, const char *VAR_3)
{
 git_object *VAR_4 = ((void*)0);

 FUNC_0(
  FUNC_3(&VAR_4, VAR_2, VAR_3),
  "looking up object", VAR_3);

 FUNC_0(
  FUNC_2((git_object **)VAR_1, VAR_4, VAR_0),
  "resolving object to tree", VAR_3);

 FUNC_1(VAR_4);
}

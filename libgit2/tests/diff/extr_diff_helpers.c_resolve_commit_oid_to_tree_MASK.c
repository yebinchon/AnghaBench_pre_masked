
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int *,size_t,int ) ;
 int FUNC_3 (int **,int *,int ) ;
 scalar_t__ FUNC_4 (int *,char const*,size_t) ;
 size_t FUNC_5 (char const*) ;

git_tree *FUNC_6(
 git_repository *VAR_2,
 const char *VAR_3)
{
 size_t VAR_4 = FUNC_5(VAR_3);
 git_oid VAR_5;
 git_object *VAR_6 = ((void*)0);
 git_tree *VAR_7 = ((void*)0);

 if (FUNC_4(&VAR_5, VAR_3, VAR_4) == 0)
  FUNC_0(FUNC_2(&VAR_6, VAR_2, &VAR_5, VAR_4, VAR_0));

 FUNC_0(FUNC_3((git_object **) &VAR_7, VAR_6, VAR_1));
 FUNC_1(VAR_6);
 return VAR_7;
}

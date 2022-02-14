
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (int **,int *,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;

__attribute__((used)) static int FUNC_6(
 git_object **VAR_3,
 git_object *VAR_4,
 const char *VAR_5)
{
 git_object *VAR_6;
 int VAR_7 = -1;
 git_tree_entry *VAR_8 = ((void*)0);

 if ((VAR_7 = FUNC_2(&VAR_6, VAR_4, VAR_2)) < 0)
  return VAR_7 == VAR_1 ? VAR_0 : VAR_7;

 if (*VAR_5 == '\0') {
  *VAR_3 = VAR_6;
  return 0;
 }





 if ((VAR_7 = FUNC_3(&VAR_8, (git_tree *)VAR_6, VAR_5)) < 0)
  goto cleanup;

 VAR_7 = FUNC_5(VAR_3, FUNC_1(VAR_6), VAR_8);

cleanup:
 FUNC_4(VAR_8);
 FUNC_0(VAR_6);

 return VAR_7;
}

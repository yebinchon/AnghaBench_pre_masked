
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_entry ;
typedef int git_tree ;
typedef scalar_t__ git_object_t ;
typedef int git_object ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,scalar_t__) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int **,int const*,int ) ;
 int FUNC_4 (int **,int *,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(
  git_object **VAR_4,
  const git_object *VAR_5,
  const char *VAR_6,
  git_object_t VAR_7)
{
 int VAR_8 = -1;
 git_tree *VAR_9 = ((void*)0);
 git_tree_entry *VAR_10 = ((void*)0);

 FUNC_0(VAR_4 && VAR_5 && VAR_6);

 if ((VAR_8 = FUNC_3((git_object**)&VAR_9, VAR_5, VAR_3)) < 0 ||
   (VAR_8 = FUNC_4(&VAR_10, VAR_9, VAR_6)) < 0)
 {
  goto cleanup;
 }

 if (VAR_7 != VAR_2 && FUNC_7(VAR_10) != VAR_7)
 {
  FUNC_1(VAR_1,
    "object at path '%s' is not of the asked-for type %d",
    VAR_6, VAR_7);
  VAR_8 = VAR_0;
  goto cleanup;
 }

 VAR_8 = FUNC_6(VAR_4, FUNC_2(VAR_5), VAR_10);

cleanup:
 FUNC_5(VAR_10);
 FUNC_8(VAR_9);
 return VAR_8;
}

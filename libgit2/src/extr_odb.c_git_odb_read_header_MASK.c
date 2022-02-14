
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_odb_object ;
typedef int git_odb ;
typedef int git_object_t ;


 int FUNC_0 (int **,size_t*,int *,int *,int const*) ;
 int FUNC_1 (int *) ;

int FUNC_2(size_t *VAR_0, git_object_t *VAR_1, git_odb *VAR_2, const git_oid *VAR_3)
{
 int VAR_4;
 git_odb_object *VAR_5;

 VAR_4 = FUNC_0(&VAR_5, VAR_0, VAR_1, VAR_2, VAR_3);

 if (VAR_5)
  FUNC_1(VAR_5);

 return VAR_4;
}

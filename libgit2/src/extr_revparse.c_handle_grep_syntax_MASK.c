
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_regexp ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int **,int *,int *) ;

__attribute__((used)) static int FUNC_8(git_object **VAR_1, git_repository *VAR_2, const git_oid *VAR_3, const char *VAR_4)
{
 git_regexp VAR_5;
 git_revwalk *VAR_6 = ((void*)0);
 int VAR_7;

 if ((VAR_7 = FUNC_0(&VAR_5, VAR_4)) < 0)
  return VAR_7;

 if ((VAR_7 = FUNC_3(&VAR_6, VAR_2)) < 0)
  goto cleanup;

 FUNC_6(VAR_6, VAR_0);

 if (VAR_3 == ((void*)0)) {
  if ((VAR_7 = FUNC_5(VAR_6, "refs/*")) < 0)
   goto cleanup;
 } else if ((VAR_7 = FUNC_4(VAR_6, VAR_3)) < 0)
   goto cleanup;

 VAR_7 = FUNC_7(VAR_1, VAR_6, &VAR_5);

cleanup:
 FUNC_1(&VAR_5);
 FUNC_2(VAR_6);

 return VAR_7;
}

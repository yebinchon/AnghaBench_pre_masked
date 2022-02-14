
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_signature ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char const*,int const*,int const*,int *,int ,int *,int,int const**) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int *,char const*,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(
  git_oid *VAR_3,
  git_repository *VAR_4,
  const git_signature *VAR_5, const git_signature *VAR_6,
  const char *VAR_7, git_tree *VAR_8,
  const char *VAR_9, git_commit **VAR_10)
{
 int VAR_11;
 git_tree *VAR_12 = ((void*)0);
 git_oid VAR_13;

 if ((VAR_11 = FUNC_3(
  &VAR_12, VAR_4, VAR_8, ((void*)0), VAR_9, 0,
  VAR_1, VAR_2)) < 0)
  goto cleanup;

 VAR_11 = FUNC_0(&VAR_13, VAR_4, VAR_7, VAR_5, VAR_6,
   ((void*)0), VAR_0,
   VAR_12,
   *VAR_10 == ((void*)0) ? 0 : 1,
   (const git_commit **) VAR_10);

 if (VAR_11 < 0)
  goto cleanup;

 if (VAR_3)
  FUNC_1(VAR_3, &VAR_13);

cleanup:
 FUNC_2(VAR_12);
 return VAR_11;
}


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
 int FUNC_0 (int *,int *,char const*,int ) ;
 int FUNC_1 (int *,int *,char const*,int const*,int const*,int *,int ,int *,int,int const**) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int **,int *,int *,int *,char const*,int ,int ,int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
 git_oid *VAR_3,
 git_oid *VAR_4,
 git_repository *VAR_5,
 const git_signature *VAR_6,
 const git_signature *VAR_7,
 const char *VAR_8,
 const char *VAR_9,
 git_tree *VAR_10,
 const char *VAR_11,
 git_commit **VAR_12,
 int VAR_13)
{
 int VAR_14;
 git_oid VAR_15;
 git_tree *VAR_16 = ((void*)0);



 if ((VAR_14 = FUNC_0(&VAR_15, VAR_5, VAR_9, FUNC_5(VAR_9))) < 0)
  goto cleanup;

 if ((VAR_14 = FUNC_4(
  &VAR_16, VAR_5, VAR_10, &VAR_15, VAR_11, 0,
  VAR_13 ? VAR_2 : VAR_1,
  VAR_2)) < 0)
  goto cleanup;

 if (VAR_4)
  FUNC_2(VAR_4, &VAR_15);


 VAR_14 = FUNC_1(&VAR_15, VAR_5, VAR_8, VAR_6, VAR_7,
      ((void*)0), VAR_0,
      VAR_16, *VAR_12 == ((void*)0) ? 0 : 1, (const git_commit **) VAR_12);

 if (VAR_3)
  FUNC_2(VAR_3, &VAR_15);

cleanup:
 FUNC_3(VAR_16);
 return VAR_14;
}

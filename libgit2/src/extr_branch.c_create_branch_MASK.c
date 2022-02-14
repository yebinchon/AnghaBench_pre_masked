
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_commit ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,int *,char const*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,char const*) ;
 scalar_t__ FUNC_7 (int *,char*,char const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int ,char*,...) ;
 int * FUNC_10 (int const*) ;
 int FUNC_11 (int **,int *,int ,int ,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(
 git_reference **VAR_4,
 git_repository *VAR_5,
 const char *VAR_6,
 const git_commit *VAR_7,
 const char *VAR_8,
 int VAR_9)
{
 int VAR_10 = 0;
 git_reference *VAR_11 = ((void*)0);
 git_buf VAR_12 = VAR_1,
     VAR_13 = VAR_1;
 int VAR_14 = -1;
 int VAR_15 = FUNC_13(VAR_5);

 FUNC_0(VAR_6 && VAR_7 && VAR_4);
 FUNC_0(FUNC_10((const git_object *)VAR_7) == VAR_5);

 if (!FUNC_1(VAR_6, "HEAD")) {
  FUNC_9(VAR_2, "'HEAD' is not a valid branch name");
  VAR_14 = -1;
  goto cleanup;
 }

 if (VAR_9 && !VAR_15 && FUNC_3(&VAR_11, VAR_5, VAR_6, VAR_0) == 0) {
  VAR_14 = FUNC_2(VAR_11);
  FUNC_12(VAR_11);
  VAR_11 = ((void*)0);

  if (VAR_14 < 0)
   goto cleanup;

  VAR_10 = VAR_14;
 }

 if (VAR_10 && VAR_9) {
  FUNC_9(VAR_2, "cannot force update branch '%s' as it is "
   "the current HEAD of the repository.", VAR_6);
  VAR_14 = -1;
  goto cleanup;
 }

 if (FUNC_6(&VAR_12, VAR_3, VAR_6) < 0)
  goto cleanup;

 if (FUNC_7(&VAR_13, "branch: Created from %s", VAR_8) < 0)
  goto cleanup;

 VAR_14 = FUNC_11(&VAR_11, VAR_5,
  FUNC_4(&VAR_12), FUNC_8(VAR_7), VAR_9,
  FUNC_4(&VAR_13));

 if (!VAR_14)
  *VAR_4 = VAR_11;

cleanup:
 FUNC_5(&VAR_12);
 FUNC_5(&VAR_13);
 return VAR_14;
}

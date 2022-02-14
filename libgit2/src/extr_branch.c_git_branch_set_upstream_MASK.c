
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;
typedef int git_refspec ;
typedef int git_reference ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int **,int *,char const*,int ) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*,char const*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int ,char*,char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int const*,char*) ;
 int * FUNC_14 (int *,char*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int **,int *,int ) ;
 scalar_t__ FUNC_17 (int **,int *) ;
 int FUNC_18 (char const*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,char const*) ;

int FUNC_21(git_reference *VAR_6, const char *VAR_7)
{
 git_buf VAR_8 = VAR_2, VAR_9 = VAR_2;
 git_reference *VAR_10;
 git_repository *VAR_11;
 git_remote *VAR_12 = ((void*)0);
 git_config *VAR_13;
 const char *VAR_14, *VAR_15;
 int VAR_16, VAR_17;
 const git_refspec *VAR_18;

 VAR_14 = FUNC_11(VAR_6);
 if (!FUNC_9(VAR_14))
  return FUNC_18(VAR_14);

 if (FUNC_17(&VAR_13, FUNC_12(VAR_6)) < 0)
  return -1;

 VAR_15 = VAR_14 + FUNC_19(VAR_5);

 if (VAR_7 == ((void*)0))
  return FUNC_20(VAR_13, VAR_15);

 VAR_11 = FUNC_12(VAR_6);


 if (FUNC_0(&VAR_10, VAR_11, VAR_7, VAR_0) == 0)
  VAR_16 = 1;
 else if (FUNC_0(&VAR_10, VAR_11, VAR_7, VAR_1) == 0)
  VAR_16 = 0;
 else {
  FUNC_8(VAR_4,
   "cannot set upstream for branch '%s'", VAR_15);
  return VAR_3;
 }







 if (VAR_16)
  VAR_17 = FUNC_6(&VAR_9, ".");
 else
  VAR_17 = FUNC_1(&VAR_9, VAR_11, FUNC_11(VAR_10));

 if (VAR_17 < 0)
  goto on_error;

 if (FUNC_5(&VAR_8, "branch.%s.remote", VAR_15) < 0)
  goto on_error;

 if (FUNC_7(VAR_13, FUNC_3(&VAR_8), FUNC_3(&VAR_9)) < 0)
  goto on_error;

 if (VAR_16) {
  FUNC_2(&VAR_9);
  if (FUNC_6(&VAR_9, FUNC_11(VAR_10)) < 0)
   goto on_error;
 } else {

  if (FUNC_16(&VAR_12, VAR_11, FUNC_3(&VAR_9)) < 0)
   goto on_error;

  VAR_18 = FUNC_14(VAR_12, FUNC_11(VAR_10));
  FUNC_2(&VAR_9);
  if (!VAR_18 || FUNC_13(&VAR_9, VAR_18, FUNC_11(VAR_10)) < 0)
   goto on_error;

  FUNC_15(VAR_12);
  VAR_12 = ((void*)0);
 }

 FUNC_2(&VAR_8);
 if (FUNC_5(&VAR_8, "branch.%s.merge", VAR_15) < 0)
  goto on_error;

 if (FUNC_7(VAR_13, FUNC_3(&VAR_8), FUNC_3(&VAR_9)) < 0)
  goto on_error;

 FUNC_10(VAR_10);
 FUNC_4(&VAR_8);
 FUNC_4(&VAR_9);

 return 0;

on_error:
 FUNC_10(VAR_10);
 FUNC_4(&VAR_8);
 FUNC_4(&VAR_9);
 FUNC_15(VAR_12);

 return -1;
}

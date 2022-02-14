
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;
typedef int git_fetch_options ;
typedef int git_checkout_options ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *,int const*,char const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *,int const*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int **,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(git_repository *VAR_5, git_remote *VAR_6, const git_fetch_options *VAR_7, const git_checkout_options *VAR_8, const char *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 git_repository *VAR_13;
 git_buf VAR_14 = VAR_0, VAR_15 = VAR_0, VAR_16 = VAR_0;
 git_buf VAR_17 = VAR_0;

 FUNC_0(VAR_5 && VAR_6);

 if (!FUNC_12(VAR_5)) {
  FUNC_6(VAR_2, "the repository is not empty");
  return -1;
 }






 if ((VAR_11 = FUNC_8(&VAR_16, FUNC_10(VAR_6))) < 0)
  return VAR_11;


 if ((VAR_11 = FUNC_14(&VAR_13, FUNC_3(&VAR_16))) < 0) {
  FUNC_4(&VAR_16);
  return VAR_11;
 }

 if (FUNC_13(&VAR_14, VAR_13, VAR_4) < 0
  || FUNC_13(&VAR_15, VAR_5, VAR_4) < 0) {
  VAR_11 = -1;
  goto cleanup;
 }

 VAR_12 = 0;
 if (FUNC_1(FUNC_15(VAR_13), FUNC_15(VAR_5), VAR_10))
  VAR_12 |= VAR_1;

 VAR_11 = FUNC_7(FUNC_3(&VAR_14), FUNC_3(&VAR_15),
    VAR_12, VAR_3);






 if (VAR_11 < 0 && VAR_10) {
  VAR_12 &= ~VAR_1;
  VAR_11 = FUNC_7(FUNC_3(&VAR_14), FUNC_3(&VAR_15),
     VAR_12, VAR_3);
 }

 if (VAR_11 < 0)
  goto cleanup;

 FUNC_5(&VAR_17, "clone: from %s", FUNC_10(VAR_6));

 if ((VAR_11 = FUNC_9(VAR_6, ((void*)0), VAR_7, FUNC_3(&VAR_17))) != 0)
  goto cleanup;

 VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_8, VAR_9, FUNC_3(&VAR_17));

cleanup:
 FUNC_4(&VAR_17);
 FUNC_4(&VAR_16);
 FUNC_4(&VAR_14);
 FUNC_4(&VAR_15);
 FUNC_11(VAR_13);
 return VAR_11;
}

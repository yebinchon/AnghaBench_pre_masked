
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,char*,scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ) ;

int FUNC_14(git_reference *VAR_5)
{
 int VAR_6;
 git_buf VAR_7 = VAR_0;
 int VAR_8 = -1;

 FUNC_0(VAR_5);

 if (!FUNC_9(VAR_5) && !FUNC_10(VAR_5)) {
  FUNC_7(VAR_2, "reference '%s' is not a valid branch.",
   FUNC_11(VAR_5));
  return VAR_1;
 }

 if ((VAR_6 = FUNC_2(VAR_5)) < 0)
  return VAR_6;

 if (VAR_6) {
  FUNC_7(VAR_3, "cannot delete branch '%s' as it is "
   "the current HEAD of the repository.", FUNC_11(VAR_5));
  return -1;
 }

 if (FUNC_9(VAR_5) && FUNC_1(VAR_5)) {
  FUNC_7(VAR_3, "Cannot delete branch '%s' as it is "
   "the current HEAD of a linked repository.", FUNC_11(VAR_5));
  return -1;
 }

 if (FUNC_5(&VAR_7, '.', "branch",
   FUNC_11(VAR_5) + FUNC_13(VAR_4)) < 0)
  goto on_error;

 if (FUNC_6(
  FUNC_12(VAR_5), FUNC_3(&VAR_7), ((void*)0)) < 0)
  goto on_error;

 VAR_8 = FUNC_8(VAR_5);

on_error:
 FUNC_4(&VAR_7);
 return VAR_8;
}

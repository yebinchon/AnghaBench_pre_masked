
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_tree ;
typedef scalar_t__ git_reset_t ;
typedef int git_repository ;
typedef int git_object ;
typedef int git_index ;
typedef int git_commit ;
struct TYPE_5__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int const*) ;
 int FUNC_14 (int **,int const*,int ) ;
 int FUNC_15 (int *,int ,int ,int *,int ) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int **,int *) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(
 git_repository *VAR_13,
 const git_object *VAR_14,
 const char *VAR_15,
 git_reset_t VAR_16,
 const git_checkout_options *VAR_17)
{
 git_object *VAR_18 = ((void*)0);
 git_index *VAR_19 = ((void*)0);
 git_tree *VAR_20 = ((void*)0);
 int VAR_21 = 0;
 git_checkout_options VAR_22 = VAR_3;
 git_buf VAR_23 = VAR_1;

 FUNC_0(VAR_13 && VAR_14);

 if (VAR_17)
  VAR_22 = *VAR_17;

 if (FUNC_13(VAR_14) != VAR_13) {
  FUNC_6(VAR_5,
   "%s - The given target does not belong to this repository.", VAR_0);
  return -1;
 }

 if (VAR_16 != VAR_12 &&
  (VAR_21 = FUNC_16(VAR_13,
   VAR_16 == VAR_11 ? "reset mixed" : "reset hard")) < 0)
  return VAR_21;

 if ((VAR_21 = FUNC_14(&VAR_18, VAR_14, VAR_8)) < 0 ||
  (VAR_21 = FUNC_17(&VAR_19, VAR_13)) < 0 ||
  (VAR_21 = FUNC_5(&VAR_20, (git_commit *)VAR_18)) < 0)
  goto cleanup;

 if (VAR_16 == VAR_12 &&
  (FUNC_18(VAR_13) == VAR_9 ||
   FUNC_8(VAR_19)))
 {
  FUNC_6(VAR_5, "%s (soft) in the middle of a merge", VAR_0);
  VAR_21 = VAR_6;
  goto cleanup;
 }

 if ((VAR_21 = FUNC_3(&VAR_23, "reset: moving to %s", VAR_15)) < 0)
  return VAR_21;

 if (VAR_16 == VAR_10) {

  VAR_22.checkout_strategy = VAR_2;

  if ((VAR_21 = FUNC_4(VAR_13, (git_object *)VAR_20, &VAR_22)) < 0)
   goto cleanup;
 }


 if ((VAR_21 = FUNC_15(VAR_13, VAR_7,
  FUNC_12(VAR_18), ((void*)0), FUNC_1(&VAR_23))) < 0)
  goto cleanup;

 if (VAR_16 > VAR_12) {


  if ((VAR_21 = FUNC_9(VAR_19, VAR_20)) < 0 ||
   (VAR_21 = FUNC_10(VAR_19)) < 0)
   goto cleanup;

  if ((VAR_21 = FUNC_19(VAR_13)) < 0) {
   FUNC_6(VAR_4, "%s - failed to clean up merge data", VAR_0);
   goto cleanup;
  }
 }

cleanup:
 FUNC_11(VAR_18);
 FUNC_7(VAR_19);
 FUNC_20(VAR_20);
 FUNC_2(&VAR_23);

 return VAR_21;
}

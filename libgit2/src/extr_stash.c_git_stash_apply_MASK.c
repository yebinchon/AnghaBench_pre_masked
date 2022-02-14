
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_9__ {unsigned int checkout_strategy; int * baseline_index; } ;
struct TYPE_8__ {int flags; TYPE_5__ checkout_options; } ;
typedef TYPE_1__ git_stash_apply_options ;
typedef int git_repository ;
typedef int git_index ;
typedef int git_commit ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_1__,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,TYPE_5__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int *,int *,int *,int *) ;
 int FUNC_14 (int **,int *,int *,int *,int *) ;
 int FUNC_15 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_16 (int **,int *,size_t) ;
 int FUNC_17 (int **,int **,int **,int **,int **,int *) ;
 int FUNC_18 (int **,int *,int *) ;

int FUNC_19(
 git_repository *VAR_11,
 size_t VAR_12,
 const git_stash_apply_options *VAR_13)
{
 git_stash_apply_options VAR_14;
 unsigned int VAR_15;
 git_commit *VAR_16 = ((void*)0);
 git_tree *VAR_17 = ((void*)0);
 git_tree *VAR_18 = ((void*)0);
 git_tree *VAR_19 = ((void*)0);
 git_tree *VAR_20 = ((void*)0);
 git_tree *VAR_21 = ((void*)0);
 git_index *VAR_22 = ((void*)0);
 git_index *VAR_23 = ((void*)0);
 git_index *VAR_24 = ((void*)0);
 git_index *VAR_25 = ((void*)0);
 git_index *VAR_26 = ((void*)0);
 int VAR_27;

 FUNC_0(VAR_13, VAR_2, "git_stash_apply_options");

 FUNC_15(&VAR_14, VAR_13);
 VAR_15 = VAR_14.checkout_options.checkout_strategy;

 FUNC_1(VAR_14, VAR_9);


 if ((VAR_27 = FUNC_16(&VAR_16, VAR_11, VAR_12)) < 0)
  goto cleanup;


 if ((VAR_27 = FUNC_17(
   &VAR_17, &VAR_18, &VAR_19,
   &VAR_20, &VAR_21, VAR_16)) < 0)
  goto cleanup;


 if ((VAR_27 = FUNC_10(&VAR_23, VAR_11)) < 0)
  goto cleanup;

 FUNC_1(VAR_14, VAR_3);

 if ((VAR_27 = FUNC_2(VAR_11, VAR_23)) < 0)
  goto cleanup;


 if ((VAR_14.flags & VAR_10) &&
  FUNC_9(FUNC_12(VAR_18), FUNC_12(VAR_19))) {

  if ((VAR_27 = FUNC_13(
    &VAR_24, VAR_11, VAR_20, VAR_23, VAR_19)) < 0)
   goto cleanup;

  if (FUNC_6(VAR_24)) {
   VAR_27 = VAR_1;
   goto cleanup;
  }




 } else if ((VAR_14.flags & VAR_10) == 0) {
  if ((VAR_27 = FUNC_18(
    &VAR_22, VAR_18, VAR_17)) < 0 ||
   (VAR_27 = FUNC_14(
    &VAR_24, VAR_11, VAR_18, VAR_23, VAR_22)) < 0)
   goto cleanup;
 }

 FUNC_1(VAR_14, VAR_4);


 if ((VAR_27 = FUNC_13(
   &VAR_25, VAR_11, VAR_18, VAR_23, VAR_17)) < 0)
  goto cleanup;


 if (VAR_21) {
  FUNC_1(VAR_14, VAR_5);

  if ((VAR_27 = FUNC_13(&VAR_26, VAR_11, ((void*)0), VAR_23, VAR_21)) < 0)
   goto cleanup;
 }

 if (VAR_26) {
  VAR_14.checkout_options.checkout_strategy |= VAR_0;

  FUNC_1(VAR_14, VAR_7);

  if ((VAR_27 = FUNC_3(VAR_11, VAR_26, &VAR_14.checkout_options)) < 0)
   goto cleanup;

  VAR_14.checkout_options.checkout_strategy = VAR_15;
 }







 if (!FUNC_6(VAR_25))
  VAR_14.checkout_options.checkout_strategy |= VAR_0;





 VAR_14.checkout_options.baseline_index = VAR_23;

 FUNC_1(VAR_14, VAR_6);

 if ((VAR_27 = FUNC_3(VAR_11, VAR_25, &VAR_14.checkout_options)) < 0)
  goto cleanup;

 if (VAR_24 && !FUNC_6(VAR_25)) {
  if ((VAR_27 = FUNC_7(VAR_23, VAR_24)) < 0)
   goto cleanup;
 }

 FUNC_1(VAR_14, VAR_8);

 VAR_27 = FUNC_8(VAR_23);

cleanup:
 FUNC_5(VAR_26);
 FUNC_5(VAR_25);
 FUNC_5(VAR_24);
 FUNC_5(VAR_22);
 FUNC_5(VAR_23);
 FUNC_11(VAR_21);
 FUNC_11(VAR_20);
 FUNC_11(VAR_19);
 FUNC_11(VAR_18);
 FUNC_11(VAR_17);
 FUNC_4(VAR_16);
 return VAR_27;
}

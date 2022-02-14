
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char** annotated; int annotated_count; scalar_t__ heads; int no_commit; } ;
typedef TYPE_1__ merge_options ;
typedef scalar_t__ git_repository_state_t ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_merge_preference_t ;
struct TYPE_13__ {int file_flags; scalar_t__ flags; } ;
typedef TYPE_2__ git_merge_options ;
typedef int git_merge_analysis_t ;
typedef int git_index ;
struct TYPE_14__ {int checkout_strategy; } ;
typedef TYPE_3__ git_checkout_options ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int *,int *,TYPE_1__*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (char**) ;
 int * FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int const**,int,TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (int*,int*,int *,int const**,int) ;
 int FUNC_9 (int **,int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char const**,TYPE_1__*,int,char**) ;
 int FUNC_14 (int *,int const*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,TYPE_1__*) ;
 int VAR_12 ;

int FUNC_17(git_repository *VAR_13, int VAR_14, char **VAR_15)
{
 merge_options VAR_16;
 git_index *VAR_17;
 git_repository_state_t VAR_18;
 git_merge_analysis_t VAR_19;
 git_merge_preference_t VAR_20;
 const char *VAR_21 = ".";
 int VAR_22 = 0;

 FUNC_11(&VAR_16);
 FUNC_13(&VAR_21, &VAR_16, VAR_14, VAR_15);

 VAR_18 = FUNC_10(VAR_13);
 if (VAR_18 != VAR_11) {
  FUNC_3(VAR_12, "repository is in unexpected state %ld\n", VAR_18);
  goto cleanup;
 }

 VAR_22 = FUNC_16(VAR_13, &VAR_16);
 if (VAR_22 != 0)
  goto cleanup;

 VAR_22 = FUNC_8(&VAR_19, &VAR_20,
                          VAR_13,
                          (const git_annotated_commit **)VAR_16.annotated,
                          VAR_16.annotated_count);
 FUNC_1(VAR_22, "merge analysis failed", ((void*)0));

 if (VAR_19 & VAR_6) {
  FUNC_15("Already up-to-date\n");
  return 0;
 } else if (VAR_19 & VAR_5 ||
           (VAR_19 & VAR_3 &&
           !(VAR_20 & VAR_10))) {
  const git_oid *VAR_23;
  if (VAR_19 & VAR_5) {
   FUNC_15("Unborn\n");
  } else {
   FUNC_15("Fast-forward\n");
  }


  VAR_23 = FUNC_5(VAR_16.annotated[0]);
  FUNC_0(VAR_16.annotated_count == 1);

  return FUNC_14(VAR_13, VAR_23, (VAR_19 & VAR_5));
 } else if (VAR_19 & VAR_4) {
  git_merge_options VAR_24 = VAR_8;
  git_checkout_options VAR_25 = VAR_2;

  VAR_24.flags = 0;
  VAR_24.file_flags = VAR_7;

  VAR_25.checkout_strategy = VAR_1|VAR_0;

  if (VAR_20 & VAR_9) {
   FUNC_15("Fast-forward is preferred, but only a merge is possible\n");
   return -1;
  }

  VAR_22 = FUNC_7(VAR_13,
                  (const git_annotated_commit **)VAR_16.annotated, VAR_16.annotated_count,
                  &VAR_24, &VAR_25);
  FUNC_1(VAR_22, "merge failed", ((void*)0));
 }



 FUNC_1(FUNC_9(&VAR_17, VAR_13), "failed to get repository index", ((void*)0));

 if (FUNC_6(VAR_17)) {

  FUNC_12(VAR_17);
 } else if (!VAR_16.no_commit) {
  FUNC_2(VAR_13, VAR_17, &VAR_16);
  FUNC_15("Merge made\n");
 }

cleanup:
 FUNC_4((char **)VAR_16.heads);
 FUNC_4(VAR_16.annotated);

 return 0;
}

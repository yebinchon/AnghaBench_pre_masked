
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct stash_update_rules {int include_untracked; int include_ignored; int member_0; } ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int **,int *,int *) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,struct stash_update_rules*) ;

__attribute__((used)) static int FUNC_8(
 git_tree **VAR_7,
 git_repository *VAR_8,
 git_commit *VAR_9,
 uint32_t VAR_10)
{
 git_index *VAR_11 = ((void*)0);
 git_tree *VAR_12 = ((void*)0);
 git_diff *VAR_13 = ((void*)0);
 git_diff_options VAR_14 = VAR_2;
 struct stash_update_rules VAR_15 = {0};
 int VAR_16;

 if ((VAR_16 = FUNC_5(&VAR_11)) < 0)
  goto cleanup;

 if (VAR_10 & VAR_6) {
  VAR_14.flags |= VAR_1 |
   VAR_4;
  VAR_15.include_untracked = 1;
 }

 if (VAR_10 & VAR_5) {
  VAR_14.flags |= VAR_0 |
   VAR_3;
  VAR_15.include_ignored = 1;
 }

 if ((VAR_16 = FUNC_1(&VAR_12, VAR_9)) < 0)
  goto cleanup;

 if ((VAR_16 = FUNC_3(&VAR_13, VAR_8, VAR_12, &VAR_14)) < 0)
  goto cleanup;

 if ((VAR_16 = FUNC_7(VAR_8, VAR_11, VAR_13, &VAR_15)) < 0)
  goto cleanup;

 VAR_16 = FUNC_0(VAR_7, VAR_8, VAR_11);

cleanup:
 FUNC_2(VAR_13);
 FUNC_6(VAR_12);
 FUNC_4(VAR_11);
 return VAR_16;
}

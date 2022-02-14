
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stash_update_rules {int include_changed; int member_0; } ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int **,int *,int *) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,TYPE_1__*) ;
 int FUNC_5 (int **,int *,int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int FUNC_7 (int *,int *,int *,struct stash_update_rules*) ;

__attribute__((used)) static int FUNC_8(
 git_tree **VAR_4,
 git_repository *VAR_5,
 git_index *VAR_6,
 git_commit *VAR_7)
{
 git_tree *VAR_8 = ((void*)0);
 git_diff *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 git_diff_options VAR_11 = VAR_2;
 struct stash_update_rules VAR_12 = {0};
 int VAR_13;

 VAR_11.flags = VAR_0 | VAR_1;

 if ((VAR_13 = FUNC_1(&VAR_8, VAR_7)) < 0)
  goto cleanup;

 if ((VAR_13 = FUNC_5(&VAR_9, VAR_5, VAR_8, VAR_6, &VAR_11)) < 0 ||
  (VAR_13 = FUNC_4(&VAR_10, VAR_5, VAR_6, &VAR_11)) < 0 ||
  (VAR_13 = FUNC_2(VAR_9, VAR_10, VAR_3)) < 0)
  goto cleanup;

 VAR_12.include_changed = 1;

 if ((VAR_13 = FUNC_7(VAR_5, VAR_6, VAR_9, &VAR_12)) < 0)
  goto cleanup;

 VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_6);

cleanup:
 FUNC_3(VAR_10);
 FUNC_3(VAR_9);
 FUNC_6(VAR_8);

 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct foreach_diff_data {unsigned int member_2; void* member_4; int * pathspec; int member_3; int * member_1; int * member_0; } ;
typedef int git_strarray ;
typedef int git_repository ;
typedef int git_pathspec ;
typedef int git_index_matched_path_cb ;
typedef int git_index ;
struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int *) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int ,int *,int *,int *,struct foreach_diff_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*) ;

__attribute__((used)) static int FUNC_9(git_index *VAR_9, int VAR_10, const git_strarray *VAR_11,
      unsigned int VAR_12,
      git_index_matched_path_cb VAR_13, void *VAR_14)
{
 int VAR_15;
 git_diff *VAR_16;
 git_pathspec VAR_17;
 git_repository *VAR_18;
 git_diff_options VAR_19 = VAR_3;
 struct foreach_diff_data VAR_20 = {
  VAR_9,
  ((void*)0),
  VAR_12,
  VAR_13,
  VAR_14,
 };

 FUNC_1(*VAR_9);
 FUNC_1(VAR_10 == VAR_7 || VAR_10 == VAR_6);

 VAR_18 = FUNC_0(VAR_9);

 if (!VAR_18) {
  return FUNC_2(-1,
   "cannot run update; the index is not backed up by a repository.");
 }






 if ((VAR_15 = FUNC_8(&VAR_17, VAR_11)) < 0)
  return VAR_15;

 VAR_19.flags = VAR_1;
 if (VAR_10 == VAR_6) {
  VAR_19.flags |= VAR_2 |
   VAR_4;

  if (VAR_12 == VAR_5)
   VAR_19.flags |= VAR_0;
 }

 if ((VAR_15 = FUNC_5(&VAR_16, VAR_18, VAR_9, &VAR_19)) < 0)
  goto cleanup;

 VAR_20.pathspec = &VAR_17;
 VAR_15 = FUNC_3(VAR_16, VAR_8, ((void*)0), ((void*)0), ((void*)0), &VAR_20);
 FUNC_4(VAR_16);

 if (VAR_15)
  FUNC_6(VAR_15);

cleanup:
 FUNC_7(&VAR_17);
 return VAR_15;
}

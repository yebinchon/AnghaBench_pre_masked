
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_15__ {scalar_t__ count; } ;
typedef TYPE_3__ git_strarray ;
typedef int git_repository ;
typedef int git_object ;
struct TYPE_16__ {char* path; int id; int mode; } ;
typedef TYPE_4__ git_index_entry ;
typedef int git_index ;
struct TYPE_17__ {int flags; TYPE_3__ pathspec; } ;
typedef TYPE_5__ git_diff_options ;
struct TYPE_14__ {scalar_t__ path; int id; int mode; } ;
struct TYPE_13__ {int path; } ;
struct TYPE_18__ {scalar_t__ status; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_6__ git_diff_delta ;
typedef int git_diff ;
typedef int git_commit ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *) ;
 TYPE_6__* FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *,int *,TYPE_5__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int *,TYPE_4__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int const*) ;
 int FUNC_15 (int **,int const*,int ) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int **,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_4__*,int ,int) ;

int FUNC_20(
 git_repository *VAR_10,
 const git_object *VAR_11,
 const git_strarray* VAR_12)
{
 git_object *VAR_13 = ((void*)0);
 git_tree *VAR_14 = ((void*)0);
 git_diff *VAR_15 = ((void*)0);
 git_diff_options VAR_16 = VAR_5;
 size_t VAR_17, VAR_18;
 git_index_entry VAR_19;
 int VAR_20;
 git_index *VAR_21 = ((void*)0);

 FUNC_0(VAR_12 != ((void*)0) && VAR_12->count > 0);

 FUNC_19(&VAR_19, 0, sizeof(git_index_entry));

 if ((VAR_20 = FUNC_17(&VAR_21, VAR_10)) < 0)
  goto cleanup;

 if (VAR_11) {
  if (FUNC_14(VAR_11) != VAR_10) {
   FUNC_7(VAR_8,
    "%s_default - The given target does not belong to this repository.", VAR_0);
   return -1;
  }

  if ((VAR_20 = FUNC_15(&VAR_13, VAR_11, VAR_9)) < 0 ||
   (VAR_20 = FUNC_1(&VAR_14, (git_commit *)VAR_13)) < 0)
   goto cleanup;
 }

 VAR_16.pathspec = *VAR_12;
 VAR_16.flags = VAR_6;

 if ((VAR_20 = FUNC_5(
  &VAR_15, VAR_10, VAR_14, VAR_21, &VAR_16)) < 0)
   goto cleanup;

 for (VAR_17 = 0, VAR_18 = FUNC_4(VAR_15); VAR_17 < VAR_18; ++VAR_17) {
  const git_diff_delta *VAR_22 = FUNC_3(VAR_15, VAR_17);

  FUNC_0(VAR_22->status == VAR_1 ||
   VAR_22->status == VAR_4 ||
   VAR_22->status == VAR_2 ||
   VAR_22->status == VAR_3);

  VAR_20 = FUNC_9(VAR_21, VAR_22->old_file.path);
  if (VAR_20 < 0) {
   if (VAR_22->status == VAR_1 && VAR_20 == VAR_7)
    FUNC_6();
   else
    goto cleanup;
  }

  if (VAR_22->status == VAR_3) {
   if ((VAR_20 = FUNC_11(VAR_21, VAR_22->old_file.path, 0)) < 0)
    goto cleanup;
  } else {
   VAR_19.mode = VAR_22->new_file.mode;
   FUNC_16(&VAR_19.id, &VAR_22->new_file.id);
   VAR_19.path = (char *)VAR_22->new_file.path;

   if ((VAR_20 = FUNC_8(VAR_21, &VAR_19)) < 0)
    goto cleanup;
  }
 }

 VAR_20 = FUNC_12(VAR_21);

cleanup:
 FUNC_13(VAR_13);
 FUNC_18(VAR_14);
 FUNC_10(VAR_21);
 FUNC_2(VAR_15);

 return VAR_20;
}

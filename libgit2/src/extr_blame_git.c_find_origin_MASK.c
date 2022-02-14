
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int git_tree ;
struct TYPE_23__ {char** strings; scalar_t__ count; } ;
struct TYPE_26__ {TYPE_1__ pathspec; int flags; scalar_t__ context_lines; } ;
typedef TYPE_4__ git_diff_options ;
struct TYPE_27__ {int flags; } ;
typedef TYPE_5__ git_diff_find_options ;
struct TYPE_25__ {int path; } ;
struct TYPE_24__ {int path; } ;
struct TYPE_28__ {TYPE_3__ old_file; TYPE_2__ new_file; } ;
typedef TYPE_6__ git_diff_delta ;
typedef int git_diff ;
typedef int git_commit ;
struct TYPE_29__ {int path; int * commit; } ;
typedef TYPE_7__ git_blame__origin ;
struct TYPE_22__ {scalar_t__ contents; scalar_t__ length; } ;
struct TYPE_30__ {TYPE_10__ paths; int repository; } ;
typedef TYPE_8__ git_blame ;


 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__**,TYPE_8__*,int *,int ) ;
 scalar_t__ FUNC_2 (int **,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (int *) ;
 TYPE_6__* FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int **,int ,int *,int *,TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_10__*,int ) ;
 int FUNC_10 (TYPE_10__*,void*,int ) ;
 int FUNC_11 (TYPE_7__**,int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static git_blame__origin* FUNC_12(
  git_blame *VAR_5,
  git_commit *VAR_6,
  git_blame__origin *VAR_7)
{
 git_blame__origin *VAR_8 = ((void*)0);
 git_diff *VAR_9 = ((void*)0);
 git_diff_options VAR_10 = VAR_2;
 git_tree *VAR_11=((void*)0), *VAR_12=((void*)0);


 if (0 != FUNC_2(&VAR_11, VAR_7->commit) ||
     0 != FUNC_2(&VAR_12, VAR_6))
  goto cleanup;


 VAR_10.context_lines = 0;
 VAR_10.flags = VAR_3;


 VAR_10.pathspec.count = VAR_5->paths.length;
 VAR_10.pathspec.strings = (char**)VAR_5->paths.contents;
 if (0 != FUNC_7(&VAR_9, VAR_5->repository, VAR_12, VAR_11, &VAR_10))
   goto cleanup;

 if (!FUNC_6(VAR_9)) {

  FUNC_1(&VAR_8, VAR_5, VAR_6, VAR_7->path);
 } else {
  git_diff_find_options VAR_13 = VAR_0;
  int VAR_14;


  FUNC_4(VAR_9);
  VAR_10.pathspec.count = 0;
  if (0 != FUNC_7(&VAR_9, VAR_5->repository, VAR_12, VAR_11, &VAR_10))
   goto cleanup;


  VAR_13.flags = VAR_1;
  if (0 != FUNC_3(VAR_9, &VAR_13))
   goto cleanup;


  for (VAR_14=0; VAR_14<(int)FUNC_6(VAR_9); VAR_14++) {
   const git_diff_delta *VAR_15 = FUNC_5(VAR_9, VAR_14);

   if (!FUNC_9(((void*)0), &VAR_5->paths, VAR_15->new_file.path))
   {
    FUNC_10(&VAR_5->paths, (void*)FUNC_0(VAR_15->old_file.path),
      VAR_4);
    FUNC_11(&VAR_8, VAR_6, VAR_15->old_file.path);
   }
  }
 }

cleanup:
 FUNC_4(VAR_9);
 FUNC_8(VAR_11);
 FUNC_8(VAR_12);
 return VAR_8;
}

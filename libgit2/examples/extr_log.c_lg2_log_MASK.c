
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct log_state {int walker; int * repo; int revisions; } ;
struct log_options {int min_parents; int max_parents; int limit; scalar_t__ show_diff; int skip; int grep; int committer; int author; } ;
typedef int git_tree ;
typedef int git_repository ;
typedef int git_pathspec ;
typedef int git_oid ;
struct TYPE_7__ {char** strings; int count; } ;
struct TYPE_6__ {TYPE_3__ pathspec; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int git_commit ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct log_state*,int *) ;
 int FUNC_1 (int ,char*,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,int *) ;
 int FUNC_12 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int *,int ,int *) ;
 int FUNC_15 (int **,TYPE_3__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 scalar_t__ FUNC_20 (int *,int,TYPE_1__*) ;
 int FUNC_21 (struct log_state*,struct log_options*,int,char**) ;
 int FUNC_22 (int *,struct log_options*) ;
 int FUNC_23 (int ,int ) ;

int FUNC_24(git_repository *VAR_4, int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10, VAR_11;
 struct log_state VAR_12;
 struct log_options VAR_13;
 git_diff_options VAR_14 = VAR_1;
 git_oid VAR_15;
 git_commit *VAR_16 = ((void*)0);
 git_pathspec *VAR_17 = ((void*)0);


 VAR_11 = FUNC_21(&VAR_12, &VAR_13, VAR_5, VAR_6);
 VAR_12.repo = VAR_4;

 VAR_14.pathspec.strings = &VAR_6[VAR_11];
 VAR_14.pathspec.count = VAR_5 - VAR_11;
 if (VAR_14.pathspec.count > 0)
  FUNC_1(FUNC_15(&VAR_17, &VAR_14.pathspec),
   "Building pathspec", ((void*)0));

 if (!VAR_12.revisions)
  FUNC_0(&VAR_12, ((void*)0));



 VAR_9 = VAR_8 = 0;

 for (; !FUNC_17(&VAR_15, VAR_12.walker); FUNC_4(VAR_16)) {
  FUNC_1(FUNC_5(&VAR_16, VAR_12.repo, &VAR_15),
   "Failed to look up commit", ((void*)0));

  VAR_10 = (int)FUNC_8(VAR_16);
  if (VAR_10 < VAR_13.min_parents)
   continue;
  if (VAR_13.max_parents > 0 && VAR_10 > VAR_13.max_parents)
   continue;

  if (VAR_14.pathspec.count > 0) {
   int VAR_18 = VAR_10;

   if (VAR_10 == 0) {
    git_tree *VAR_19;
    FUNC_1(FUNC_9(&VAR_19, VAR_16), "Get tree", ((void*)0));
    if (FUNC_14(
      ((void*)0), VAR_19, VAR_2, VAR_17) != 0)
     VAR_18 = 1;
    FUNC_18(VAR_19);
   } else if (VAR_10 == 1) {
    VAR_18 = FUNC_20(VAR_16, 0, &VAR_14) ? 0 : 1;
   } else {
    for (VAR_7 = 0; VAR_7 < VAR_10; ++VAR_7) {
     if (FUNC_20(VAR_16, VAR_7, &VAR_14))
      VAR_18--;
    }
   }

   if (VAR_18 > 0)
    continue;
  }

  if (!FUNC_23(FUNC_2(VAR_16), VAR_13.author))
   continue;

  if (!FUNC_23(FUNC_3(VAR_16), VAR_13.committer))
   continue;

  if (!FUNC_19(VAR_16, VAR_13.grep))
   continue;

  if (VAR_8++ < VAR_13.skip)
   continue;
  if (VAR_13.limit != -1 && VAR_9++ >= VAR_13.limit) {
   FUNC_4(VAR_16);
   break;
  }

  FUNC_22(VAR_16, &VAR_13);

  if (VAR_13.show_diff) {
   git_tree *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
   git_diff *VAR_22 = ((void*)0);

   if (VAR_10 > 1)
    continue;
   FUNC_1(FUNC_9(&VAR_21, VAR_16), "Get tree", ((void*)0));
   if (VAR_10 == 1) {
    git_commit *VAR_23;
    FUNC_1(FUNC_7(&VAR_23, VAR_16, 0), "Get parent", ((void*)0));
    FUNC_1(FUNC_9(&VAR_20, VAR_23), "Tree for parent", ((void*)0));
    FUNC_4(VAR_23);
   }

   FUNC_1(FUNC_12(
    &VAR_22, FUNC_6(VAR_16), VAR_20, VAR_21, &VAR_14),
    "Diff commit with parent", ((void*)0));
   FUNC_1(
                FUNC_11(VAR_22, VAR_0, VAR_3, ((void*)0)),
    "Displaying diff", ((void*)0));

   FUNC_10(VAR_22);
   FUNC_18(VAR_20);
   FUNC_18(VAR_21);
  }
 }

 FUNC_13(VAR_17);
 FUNC_16(VAR_12.walker);

 return 0;
}

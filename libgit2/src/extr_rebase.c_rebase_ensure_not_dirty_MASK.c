
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_repository ;
typedef int git_index ;
struct TYPE_4__ {int ignore_submodules; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *,int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int *,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int **,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(
 git_repository *VAR_3,
 bool VAR_4,
 bool VAR_5,
 int VAR_6)
{
 git_tree *VAR_7 = ((void*)0);
 git_index *VAR_8 = ((void*)0);
 git_diff *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 if (VAR_4) {
  if ((VAR_10 = FUNC_6(&VAR_7, VAR_3)) < 0 ||
   (VAR_10 = FUNC_7(&VAR_8, VAR_3)) < 0 ||
   (VAR_10 = FUNC_3(&VAR_9, VAR_3, VAR_7, VAR_8, ((void*)0))) < 0)
   goto done;

  if (FUNC_2(VAR_9) > 0) {
   FUNC_4(VAR_1, "uncommitted changes exist in index");
   VAR_10 = VAR_6;
   goto done;
  }

  FUNC_0(VAR_9);
  VAR_9 = ((void*)0);
 }

 if (VAR_5) {
  git_diff_options VAR_11 = VAR_0;
  VAR_11.ignore_submodules = VAR_2;
  if ((VAR_10 = FUNC_1(&VAR_9, VAR_3, VAR_8, &VAR_11)) < 0)
   goto done;

  if (FUNC_2(VAR_9) > 0) {
   FUNC_4(VAR_1, "unstaged changes exist in workdir");
   VAR_10 = VAR_6;
   goto done;
  }
 }

done:
 FUNC_0(VAR_9);
 FUNC_5(VAR_8);
 FUNC_8(VAR_7);

 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_8__ {int id; } ;
typedef TYPE_2__ git_rebase_operation ;
struct TYPE_7__ {int merge_options; } ;
struct TYPE_9__ {int * index; TYPE_1__ options; int repo; int * last_commit; int current; int operations; } ;
typedef TYPE_3__ git_rebase ;
typedef int git_index ;
typedef int git_commit ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int **,int *,int ) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(
 git_rebase_operation **VAR_1,
 git_rebase *VAR_2)
{
 git_commit *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 git_tree *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 git_rebase_operation *VAR_8;
 git_index *VAR_9 = ((void*)0);
 unsigned int VAR_10;
 int VAR_11;

 *VAR_1 = ((void*)0);

 VAR_8 = FUNC_0(VAR_2->operations, VAR_2->current);

 if ((VAR_11 = FUNC_2(&VAR_3, VAR_2->repo, &VAR_8->id)) < 0 ||
  (VAR_11 = FUNC_5(&VAR_5, VAR_3)) < 0)
  goto done;

 if ((VAR_10 = FUNC_4(VAR_3)) > 1) {
  FUNC_6(VAR_0, "cannot rebase a merge commit");
  VAR_11 = -1;
  goto done;
 } else if (VAR_10) {
  if ((VAR_11 = FUNC_3(&VAR_4, VAR_3, 0)) < 0 ||
   (VAR_11 = FUNC_5(&VAR_7, VAR_4)) < 0)
   goto done;
 }

 if ((VAR_11 = FUNC_5(&VAR_6, VAR_2->last_commit)) < 0 ||
  (VAR_11 = FUNC_9(&VAR_9, VAR_2->repo, VAR_7, VAR_6, VAR_5, &VAR_2->options.merge_options)) < 0)
  goto done;

 if (!VAR_2->index) {
  VAR_2->index = VAR_9;
  VAR_9 = ((void*)0);
 } else {
  if ((VAR_11 = FUNC_8(VAR_2->index, VAR_9)) < 0)
   goto done;
 }

 *VAR_1 = VAR_8;

done:
 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
 FUNC_10(VAR_5);
 FUNC_10(VAR_6);
 FUNC_10(VAR_7);
 FUNC_7(VAR_9);

 return VAR_11;
}

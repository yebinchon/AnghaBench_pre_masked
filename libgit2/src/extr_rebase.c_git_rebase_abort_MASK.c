
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_reference ;
struct TYPE_6__ {int checkout_options; } ;
struct TYPE_7__ {TYPE_1__ options; int repo; int orig_head_id; int orig_head_name; scalar_t__ head_detached; scalar_t__ inmemory; } ;
typedef TYPE_2__ git_rebase ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int **,int ,int ,int *,int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ,int ,int,char*) ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(git_rebase *VAR_2)
{
 git_reference *VAR_3 = ((void*)0);
 git_commit *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_0(VAR_2);

 if (VAR_2->inmemory)
  return 0;

 VAR_5 = VAR_2->head_detached ?
  FUNC_3(&VAR_3, VAR_2->repo, VAR_0,
    &VAR_2->orig_head_id, 1, "rebase: aborting") :
  FUNC_5(
   &VAR_3, VAR_2->repo, VAR_0, VAR_2->orig_head_name, 1,
   "rebase: aborting");

 if (VAR_5 < 0)
  goto done;

 if ((VAR_5 = FUNC_2(
   &VAR_4, VAR_2->repo, &VAR_2->orig_head_id)) < 0 ||
  (VAR_5 = FUNC_6(VAR_2->repo, (git_object *)VAR_4,
   VAR_1, &VAR_2->options.checkout_options)) < 0)
  goto done;

 VAR_5 = FUNC_7(VAR_2);

done:
 FUNC_1(VAR_4);
 FUNC_4(VAR_3);

 return VAR_5;
}

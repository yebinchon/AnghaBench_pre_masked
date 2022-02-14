
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct walk_object {int seen; int id; } ;
typedef int git_tree ;
struct TYPE_5__ {int repo; } ;
typedef TYPE_1__ git_packbuilder ;
typedef int git_commit ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;

int FUNC_7(git_packbuilder *VAR_0, struct walk_object *VAR_1)
{
 int VAR_2;
 git_commit *VAR_3 = ((void*)0);
 git_tree *VAR_4 = ((void*)0);

 VAR_1->seen = 1;

 if ((VAR_2 = FUNC_3(VAR_0, &VAR_1->id, ((void*)0))) < 0)
  return VAR_2;

 if ((VAR_2 = FUNC_1(&VAR_3, VAR_0->repo, &VAR_1->id)) < 0)
  return VAR_2;

 if ((VAR_2 = FUNC_5(&VAR_4, VAR_0->repo, FUNC_2(VAR_3))) < 0)
  goto cleanup;

 if ((VAR_2 = FUNC_6(VAR_0, VAR_4)) < 0)
  goto cleanup;

cleanup:
 FUNC_0(VAR_3);
 FUNC_4(VAR_4);
 return VAR_2;
}

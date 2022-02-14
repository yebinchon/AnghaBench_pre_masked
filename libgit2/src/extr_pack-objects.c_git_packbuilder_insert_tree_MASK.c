
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tree_walk_context {int buf; int member_1; TYPE_1__* member_0; } ;
typedef int git_tree ;
struct TYPE_4__ {int repo; } ;
typedef TYPE_1__ git_packbuilder ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int const*) ;
 int FUNC_4 (int *,int ,int ,struct tree_walk_context*) ;

int FUNC_5(git_packbuilder *VAR_3, const git_oid *VAR_4)
{
 int VAR_5;
 git_tree *VAR_6 = ((void*)0);
 struct tree_walk_context VAR_7 = { VAR_3, VAR_0 };

 if (!(VAR_5 = FUNC_3(&VAR_6, VAR_3->repo, VAR_4)) &&
     !(VAR_5 = FUNC_1(VAR_3, VAR_4, ((void*)0))))
  VAR_5 = FUNC_4(VAR_6, VAR_1, VAR_2, &VAR_7);

 FUNC_2(VAR_6);
 FUNC_0(&VAR_7.buf);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_5__ {int repo; } ;
struct TYPE_6__ {int tree_id; TYPE_1__ object; } ;
typedef TYPE_2__ git_commit ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int **,int ,int *) ;

int FUNC_2(git_tree **VAR_0, const git_commit *VAR_1)
{
 FUNC_0(VAR_1);
 return FUNC_1(VAR_0, VAR_1->object.repo, &VAR_1->tree_id);
}

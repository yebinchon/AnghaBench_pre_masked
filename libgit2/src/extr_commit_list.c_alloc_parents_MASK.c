
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int commit_pool; } ;
typedef TYPE_1__ git_revwalk ;
typedef int git_commit_list_node ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t*,size_t,int) ;
 scalar_t__ FUNC_1 (int *,size_t) ;

__attribute__((used)) static git_commit_list_node **FUNC_2(
 git_revwalk *VAR_1, git_commit_list_node *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 if (VAR_3 <= VAR_0)
  return (git_commit_list_node **)((char *)VAR_2 + sizeof(git_commit_list_node));

 if (FUNC_0(&VAR_4, VAR_3, sizeof(git_commit_list_node *)))
  return ((void*)0);

 return (git_commit_list_node **)FUNC_1(&VAR_1->commit_pool, VAR_4);
}

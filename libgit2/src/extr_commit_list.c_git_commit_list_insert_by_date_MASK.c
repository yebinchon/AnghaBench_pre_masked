
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_commit_list_node ;
struct TYPE_6__ {struct TYPE_6__* next; int item; } ;
typedef TYPE_1__ git_commit_list ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__**) ;
 scalar_t__ FUNC_1 (int ,int *) ;

git_commit_list *FUNC_2(git_commit_list_node *VAR_0, git_commit_list **VAR_1)
{
 git_commit_list **VAR_2 = VAR_1;
 git_commit_list *VAR_3;

 while ((VAR_3 = *VAR_2) != ((void*)0)) {
  if (FUNC_1(VAR_3->item, VAR_0) > 0)
   break;

  VAR_2 = &VAR_3->next;
 }

 return FUNC_0(VAR_0, VAR_2);
}

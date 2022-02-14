
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_commit_list_node ;
struct TYPE_5__ {struct TYPE_5__* next; int * item; } ;
typedef TYPE_1__ git_commit_list ;


 TYPE_1__* FUNC_0 (int) ;

git_commit_list *FUNC_1(git_commit_list_node *VAR_0, git_commit_list **VAR_1)
{
 git_commit_list *VAR_2 = FUNC_0(sizeof(git_commit_list));
 if (VAR_2 != ((void*)0)) {
  VAR_2->item = VAR_0;
  VAR_2->next = *VAR_1;
 }
 *VAR_1 = VAR_2;
 return VAR_2;
}

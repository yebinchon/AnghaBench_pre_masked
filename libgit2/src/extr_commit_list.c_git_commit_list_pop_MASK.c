
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_commit_list_node ;
struct TYPE_4__ {struct TYPE_4__* next; int * item; } ;
typedef TYPE_1__ git_commit_list ;


 int FUNC_0 (TYPE_1__*) ;

git_commit_list_node *FUNC_1(git_commit_list **VAR_0)
{
 git_commit_list *VAR_1 = *VAR_0;
 git_commit_list_node *VAR_2 = VAR_1 ? VAR_1->item : ((void*)0);

 if (VAR_1) {
  *VAR_0 = VAR_1->next;
  FUNC_0(VAR_1);
 }
 return VAR_2;
}

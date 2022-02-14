
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ git_commit_list ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(git_commit_list **VAR_0)
{
 git_commit_list *VAR_1 = *VAR_0;

 if (VAR_1 == ((void*)0))
  return;

 while (VAR_1) {
  git_commit_list *VAR_2 = VAR_1;
  VAR_1 = VAR_2->next;
  FUNC_0(VAR_2);
 }

 *VAR_0 = ((void*)0);
}

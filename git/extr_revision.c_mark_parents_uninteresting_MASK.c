
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_stack {scalar_t__ nr; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;


 struct commit_stack VAR_0 ;
 int FUNC_0 (struct commit_stack*) ;
 int FUNC_1 (struct commit_stack*) ;
 int FUNC_2 (int ,struct commit_stack*) ;

void FUNC_3(struct commit *VAR_1)
{
 struct commit_stack VAR_2 = VAR_0;
 struct commit_list *VAR_3;

 for (VAR_3 = VAR_1->parents; VAR_3; VAR_3 = VAR_3->next)
  FUNC_2(VAR_3->item, &VAR_2);

 while (VAR_2.nr > 0)
  FUNC_2(FUNC_1(&VAR_2),
           &VAR_2);

 FUNC_0(&VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int dummy; } ;
struct commit_list {struct commit_list* next; int item; } ;
struct commit {struct commit_list* parents; } ;
typedef int (* rewrite_parent_fn_t ) (struct rev_info*,int *) ;


 int FUNC_0 (struct rev_info*,struct commit*) ;




int FUNC_1(struct rev_info *VAR_0, struct commit *VAR_1,
 rewrite_parent_fn_t VAR_2)
{
 struct commit_list **VAR_3 = &VAR_1->parents;
 while (*VAR_3) {
  struct commit_list *VAR_4 = *VAR_3;
  switch (VAR_2(VAR_0, &VAR_4->item)) {
  case 128:
   break;
  case 129:
   *VAR_3 = VAR_4->next;
   continue;
  case 130:
   return -1;
  }
  VAR_3 = &VAR_4->next;
 }
 FUNC_0(VAR_0, VAR_1);
 return 0;
}

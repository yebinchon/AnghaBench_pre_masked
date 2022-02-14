
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {struct commit_list* next; int item; } ;


 struct commit_list** FUNC_0 (int ,struct commit_list**) ;

struct commit_list *FUNC_1(struct commit_list *VAR_0)
{
 struct commit_list *VAR_1 = ((void*)0);
 struct commit_list **VAR_2 = &VAR_1;
 while (VAR_0) {
  VAR_2 = FUNC_0(VAR_0->item, VAR_2);
  VAR_0 = VAR_0->next;
 }
 return VAR_1;
}

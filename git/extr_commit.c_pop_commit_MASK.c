
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {struct commit_list* next; struct commit* item; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit_list*) ;

struct commit *FUNC_1(struct commit_list **VAR_0)
{
 struct commit_list *VAR_1 = *VAR_0;
 struct commit *VAR_2 = VAR_1 ? VAR_1->item : ((void*)0);

 if (VAR_1) {
  *VAR_0 = VAR_1->next;
  FUNC_0(VAR_1);
 }
 return VAR_2;
}

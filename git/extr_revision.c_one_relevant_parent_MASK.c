
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {scalar_t__ first_parent_only; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct commit {int dummy; } ;


 scalar_t__ FUNC_0 (struct commit*) ;

__attribute__((used)) static struct commit *FUNC_1(const struct rev_info *VAR_0,
       struct commit_list *VAR_1)
{
 struct commit_list *VAR_2 = VAR_1;
 struct commit *VAR_3 = ((void*)0);

 if (!VAR_1)
  return ((void*)0);






 if (VAR_0->first_parent_only || !VAR_1->next)
  return VAR_1->item;
 while (VAR_2) {
  struct commit *VAR_4 = VAR_2->item;
  VAR_2 = VAR_2->next;
  if (FUNC_0(VAR_4)) {
   if (VAR_3)
    return ((void*)0);
   VAR_3 = VAR_4;
  }
 }
 return VAR_3;
}

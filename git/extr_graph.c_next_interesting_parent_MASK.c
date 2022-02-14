
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct git_graph {TYPE_1__* revs; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct TYPE_2__ {scalar_t__ first_parent_only; } ;


 scalar_t__ FUNC_0 (struct git_graph*,int ) ;

__attribute__((used)) static struct commit_list *FUNC_1(struct git_graph *VAR_0,
         struct commit_list *VAR_1)
{
 struct commit_list *VAR_2;





 if (VAR_0->revs->first_parent_only)
  return ((void*)0);




 for (VAR_2 = VAR_1->next; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0(VAR_0, VAR_2->item))
   return VAR_2;
 }

 return ((void*)0);
}

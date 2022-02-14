
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit_list* next; TYPE_1__* item; } ;
struct commit {scalar_t__ date; } ;
struct TYPE_2__ {scalar_t__ date; } ;


 struct commit_list* FUNC_0 (struct commit*,struct commit_list**) ;

struct commit_list * FUNC_1(struct commit *VAR_0, struct commit_list **VAR_1)
{
 struct commit_list **VAR_2 = VAR_1;
 struct commit_list *VAR_3;
 while ((VAR_3 = *VAR_2) != ((void*)0)) {
  if (VAR_3->item->date < VAR_0->date) {
   break;
  }
  VAR_2 = &VAR_3->next;
 }
 return FUNC_0(VAR_0, VAR_2);
}

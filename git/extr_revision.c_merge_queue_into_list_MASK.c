
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prio_queue {scalar_t__ nr; } ;
struct commit_list {struct commit_list* next; TYPE_1__* item; } ;
struct commit {scalar_t__ date; } ;
struct TYPE_2__ {scalar_t__ date; } ;


 struct commit_list* FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct prio_queue*) ;
 struct commit* FUNC_2 (struct prio_queue*) ;

__attribute__((used)) static void FUNC_3(struct prio_queue *VAR_0, struct commit_list **VAR_1)
{
 while (VAR_0->nr) {
  struct commit *VAR_2 = FUNC_2(VAR_0);
  struct commit_list *VAR_3 = *VAR_1;

  if (VAR_3 && VAR_3->item->date >= VAR_2->date)
   VAR_1 = &VAR_3->next;
  else {
   VAR_3 = FUNC_0(VAR_2, VAR_1);
   VAR_1 = &VAR_3->next;
   FUNC_1(VAR_0);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ timestamp_t ;
struct expire_reflog_policy_cb {scalar_t__ mark_limit; struct commit_list* mark_list; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {int flags; } ;
struct commit {scalar_t__ date; TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 scalar_t__ FUNC_1 (struct commit*) ;
 struct commit* FUNC_2 (struct commit_list**) ;

__attribute__((used)) static void FUNC_3(struct expire_reflog_policy_cb *VAR_1)
{
 struct commit_list *VAR_2;
 timestamp_t VAR_3 = VAR_1->mark_limit;
 struct commit_list *VAR_4 = ((void*)0);

 for (VAR_2 = VAR_1->mark_list; VAR_2; VAR_2 = VAR_2->next)
  VAR_2->item->object.flags &= ~VAR_0;

 VAR_2 = VAR_1->mark_list;
 while (VAR_2) {
  struct commit_list *VAR_5;
  struct commit *VAR_6 = FUNC_2(&VAR_2);
  if (VAR_6->object.flags & VAR_0)
   continue;
  if (FUNC_1(VAR_6))
   continue;
  VAR_6->object.flags |= VAR_0;
  if (VAR_6->date < VAR_3) {
   FUNC_0(VAR_6, &VAR_4);
   continue;
  }
  VAR_6->object.flags |= VAR_0;
  VAR_5 = VAR_6->parents;
  while (VAR_5) {
   VAR_6 = VAR_5->item;
   VAR_5 = VAR_5->next;
   if (VAR_6->object.flags & VAR_0)
    continue;
   FUNC_0(VAR_6, &VAR_2);
  }
 }
 VAR_1->mark_list = VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {unsigned int flags; } ;
struct commit {struct commit_list* parents; TYPE_1__ object; } ;


 int FUNC_0 (struct commit*,struct commit_list**) ;

__attribute__((used)) static void FUNC_1(struct commit_list **VAR_0,
     struct commit *VAR_1, unsigned int VAR_2)
{
 while (VAR_1) {
  struct commit_list *VAR_3;

  if (!(VAR_2 & VAR_1->object.flags))
   return;

  VAR_1->object.flags &= ~VAR_2;

  VAR_3 = VAR_1->parents;
  if (!VAR_3)
   return;

  while ((VAR_3 = VAR_3->next))
   FUNC_0(VAR_3->item, VAR_0);

  VAR_1 = VAR_1->parents->item;
 }
}

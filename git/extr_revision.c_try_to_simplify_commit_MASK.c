
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct treesame_state {int* treesame; } ;
struct TYPE_3__ {scalar_t__ name; } ;
struct rev_info {int remove_empty_trees; int simplify_history; TYPE_1__ treesame; scalar_t__ first_parent_only; int dense; int prune; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_4__ {int flags; int oid; } ;
struct commit {TYPE_2__ object; struct commit_list* parents; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct commit*) ;
 struct treesame_state* FUNC_2 (struct rev_info*,struct commit*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct commit*) ;
 scalar_t__ FUNC_5 (struct commit*) ;
 int FUNC_6 (struct rev_info*,struct commit*,struct commit*) ;
 scalar_t__ FUNC_7 (struct rev_info*,struct commit*) ;

__attribute__((used)) static void FUNC_8(struct rev_info *VAR_2, struct commit *VAR_3)
{
 struct commit_list **VAR_4, *VAR_5;
 struct treesame_state *VAR_6 = ((void*)0);
 int VAR_7 = 0, VAR_8 = 0;
 int VAR_9, VAR_10;




 if (!VAR_2->prune)
  return;

 if (!FUNC_1(VAR_3))
  return;

 if (!VAR_3->parents) {
  if (FUNC_7(VAR_2, VAR_3))
   VAR_3->object.flags |= VAR_0;
  return;
 }





 if (!VAR_2->dense && !VAR_3->parents->next)
  return;

 for (VAR_4 = &VAR_3->parents, VAR_10 = 0, VAR_9 = 0;
      (VAR_5 = *VAR_4) != ((void*)0);
      VAR_4 = &VAR_5->next, VAR_10++) {
  struct commit *VAR_11 = VAR_5->item;
  if (FUNC_5(VAR_11))
   VAR_9++;

  if (VAR_10 == 1) {
   if (VAR_2->first_parent_only)
    break;






   if (VAR_2->treesame.name &&
       !VAR_2->simplify_history &&
       !(VAR_3->object.flags & VAR_1)) {
    VAR_6 = FUNC_2(VAR_2, VAR_3);
    if (!(VAR_8 || VAR_7))
     VAR_6->treesame[0] = 1;
   }
  }
  if (FUNC_4(VAR_11) < 0)
   FUNC_0("cannot simplify commit %s (because of %s)",
       FUNC_3(&VAR_3->object.oid),
       FUNC_3(&VAR_11->object.oid));
  switch (FUNC_6(VAR_2, VAR_11, VAR_3)) {
  case 128:
   if (!VAR_2->simplify_history || !FUNC_5(VAR_11)) {






    if (VAR_6)
     VAR_6->treesame[VAR_10] = 1;
    continue;
   }
   VAR_5->next = ((void*)0);
   VAR_3->parents = VAR_5;
   VAR_3->object.flags |= VAR_0;
   return;

  case 130:
   if (VAR_2->remove_empty_trees &&
       FUNC_7(VAR_2, VAR_11)) {
    if (FUNC_4(VAR_11) < 0)
     FUNC_0("cannot simplify commit %s (invalid %s)",
         FUNC_3(&VAR_3->object.oid),
         FUNC_3(&VAR_11->object.oid));
    VAR_11->parents = ((void*)0);
   }

  case 129:
  case 131:
   if (FUNC_5(VAR_11))
    VAR_7 = 1;
   else
    VAR_8 = 1;
   continue;
  }
  FUNC_0("bad tree compare for commit %s", FUNC_3(&VAR_3->object.oid));
 }
 if (VAR_9 ? !VAR_7 : !VAR_8)
  VAR_3->object.flags |= VAR_0;
}

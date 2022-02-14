
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct treesame_state {scalar_t__* treesame; } ;
struct rev_info {int treesame; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 struct treesame_state* FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct rev_info *VAR_1, struct commit *VAR_2)
{
 struct treesame_state *VAR_3 = FUNC_0(&VAR_1->treesame, &VAR_2->object);
 struct commit *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 struct commit_list *VAR_6;
 unsigned VAR_7;

 for (VAR_6 = VAR_2->parents, VAR_7 = 0; VAR_6; VAR_6 = VAR_6->next, VAR_7++) {
  if (VAR_3->treesame[VAR_7]) {
   if (VAR_6->item->object.flags & VAR_0) {
    if (!VAR_5)
     VAR_5 = VAR_6->item;
   } else {
    if (!VAR_4) {
     VAR_4 = VAR_6->item;
     break;
    }
   }
  }
 }
 if (!VAR_4 && VAR_5) {
  VAR_5->object.flags &= ~VAR_0;
  return 1;
 }

 return 0;
}

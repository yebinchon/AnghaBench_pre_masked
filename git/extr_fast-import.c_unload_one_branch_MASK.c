
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uintmax_t ;
struct TYPE_2__ {int * tree; } ;
struct branch {scalar_t__ last_commit; TYPE_1__ branch_tree; struct branch* active_next_branch; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 struct branch* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void)
{
 while (VAR_2
  && VAR_2 >= VAR_3) {
  uintmax_t VAR_4 = VAR_0;
  struct branch *VAR_5, *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);

  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->active_next_branch) {
   if (VAR_5->last_commit < VAR_4) {
    VAR_7 = VAR_6;
    VAR_4 = VAR_5->last_commit;
   }
   VAR_6 = VAR_5;
  }

  if (VAR_7) {
   VAR_5 = VAR_7->active_next_branch;
   VAR_7->active_next_branch = VAR_5->active_next_branch;
  } else {
   VAR_5 = VAR_1;
   VAR_1 = VAR_5->active_next_branch;
  }
  VAR_5->active = 0;
  VAR_5->active_next_branch = ((void*)0);
  if (VAR_5->branch_tree.tree) {
   FUNC_0(VAR_5->branch_tree.tree);
   VAR_5->branch_tree.tree = ((void*)0);
  }
  VAR_2--;
 }
}

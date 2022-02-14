
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct treesame_state {int * treesame; } ;
struct rev_info {int treesame; } ;
struct commit_list {int item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; int oid; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 struct treesame_state* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static unsigned FUNC_4(struct rev_info *VAR_1, struct commit *VAR_2)
{
 if (VAR_2->parents && VAR_2->parents->next) {
  unsigned VAR_3;
  struct treesame_state *VAR_4;
  struct commit_list *VAR_5;
  unsigned VAR_6;
  unsigned VAR_7, VAR_8;

  VAR_4 = FUNC_1(&VAR_1->treesame, &VAR_2->object);
  if (!VAR_4)
   FUNC_0("update_treesame %s", FUNC_2(&VAR_2->object.oid));
  VAR_6 = 0;
  VAR_7 = VAR_8 = 0;
  for (VAR_5 = VAR_2->parents, VAR_3 = 0; VAR_5; VAR_3++, VAR_5 = VAR_5->next) {
   if (FUNC_3(VAR_5->item)) {
    VAR_7 |= !VAR_4->treesame[VAR_3];
    VAR_6++;
   } else
    VAR_8 |= !VAR_4->treesame[VAR_3];
  }
  if (VAR_6 ? VAR_7 : VAR_8)
   VAR_2->object.flags &= ~VAR_0;
  else
   VAR_2->object.flags |= VAR_0;
 }

 return VAR_2->object.flags & VAR_0;
}

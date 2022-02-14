
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct treesame_state {int dummy; } ;
struct rev_info {int treesame; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int FUNC_0 (struct rev_info*,struct commit*,int) ;
 struct treesame_state* FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct rev_info *VAR_1, struct commit *VAR_2)
{
 struct treesame_state *VAR_3 = FUNC_1(&VAR_1->treesame, &VAR_2->object);
 struct commit_list **VAR_4, *VAR_5;
 int VAR_6;


 VAR_4 = &VAR_2->parents;
 VAR_6 = 0;
 while ((VAR_5 = *VAR_4) != ((void*)0)) {
  struct commit *VAR_7 = VAR_5->item;
  if (VAR_7->object.flags & VAR_0) {
   *VAR_4 = VAR_5->next;
   if (VAR_3)
    FUNC_0(VAR_1, VAR_2, VAR_6);
   continue;
  }
  VAR_7->object.flags |= VAR_0;
  VAR_6++;
  VAR_4 = &VAR_5->next;
 }

 for (VAR_5 = VAR_2->parents; VAR_5; VAR_5 = VAR_5->next) {
  VAR_5->item->object.flags &= ~VAR_0;
 }

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct possible_tag {int flag_within; int depth; } ;
struct commit_list {struct commit_list* next; struct commit* item; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct commit*) ;
 struct commit* FUNC_2 (struct commit_list**) ;

__attribute__((used)) static unsigned long FUNC_3(
 struct commit_list **VAR_1,
 struct possible_tag *VAR_2)
{
 unsigned long VAR_3 = 0;
 while (*VAR_1) {
  struct commit *VAR_4 = FUNC_2(VAR_1);
  struct commit_list *VAR_5 = VAR_4->parents;
  VAR_3++;
  if (VAR_4->object.flags & VAR_2->flag_within) {
   struct commit_list *VAR_6 = *VAR_1;
   while (VAR_6) {
    struct commit *VAR_7 = VAR_6->item;
    if (!(VAR_7->object.flags & VAR_2->flag_within))
     break;
    VAR_6 = VAR_6->next;
   }
   if (!VAR_6)
    break;
  } else
   VAR_2->depth++;
  while (VAR_5) {
   struct commit *VAR_8 = VAR_5->item;
   FUNC_1(VAR_8);
   if (!(VAR_8->object.flags & VAR_0))
    FUNC_0(VAR_8, VAR_1);
   VAR_8->object.flags |= VAR_4->object.flags;
   VAR_5 = VAR_5->next;
  }
 }
 return VAR_3;
}

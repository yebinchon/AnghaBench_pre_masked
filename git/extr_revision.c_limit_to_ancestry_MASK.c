
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; struct commit_list* parents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct commit_list*) ;

__attribute__((used)) static void FUNC_2(struct commit_list *VAR_2, struct commit_list *VAR_3)
{
 struct commit_list *VAR_4;
 struct commit_list *VAR_5 = ((void*)0);
 int VAR_6;





 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next)
  FUNC_0(VAR_4->item, &VAR_5);

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
  VAR_4->item->object.flags |= VAR_0;





 do {
  VAR_6 = 0;
  for (VAR_4 = VAR_5; VAR_4; VAR_4 = VAR_4->next) {
   struct commit *VAR_7 = VAR_4->item;
   struct commit_list *VAR_8;
   if (VAR_7->object.flags & (VAR_0 | VAR_1))
    continue;
   for (VAR_8 = VAR_7->parents;
        VAR_8;
        VAR_8 = VAR_8->next) {
    if (!(VAR_8->item->object.flags & VAR_0))
     continue;
    VAR_7->object.flags |= VAR_0;
    VAR_6 = 1;
    break;
   }
  }
 } while (VAR_6);
 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next) {
  struct commit *VAR_9 = VAR_4->item;
  if (VAR_9->object.flags & VAR_0)
   continue;
  VAR_9->object.flags |= VAR_1;
 }


 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_4->next)
  VAR_4->item->object.flags &= ~VAR_0;
 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
  VAR_4->item->object.flags &= ~VAR_0;
 FUNC_1(VAR_5);
}

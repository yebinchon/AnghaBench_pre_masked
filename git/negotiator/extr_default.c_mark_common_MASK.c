
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object {int flags; int parsed; } ;
struct negotiation_state {int non_common_revs; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_2__ {int flags; } ;
struct commit {struct commit_list* parents; TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct commit*) ;
 int FUNC_1 (struct negotiation_state*,struct commit*,int) ;

__attribute__((used)) static void FUNC_2(struct negotiation_state *VAR_3, struct commit *VAR_4,
  int VAR_5, int VAR_6)
{
 if (VAR_4 != ((void*)0) && !(VAR_4->object.flags & VAR_0)) {
  struct object *VAR_7 = (struct object *)VAR_4;

  if (!VAR_5)
   VAR_7->flags |= VAR_0;

  if (!(VAR_7->flags & VAR_2))
   FUNC_1(VAR_3, VAR_4, VAR_2);
  else {
   struct commit_list *VAR_8;

   if (!VAR_5 && !(VAR_7->flags & VAR_1))
    VAR_3->non_common_revs--;
   if (!VAR_7->parsed && !VAR_6)
    if (FUNC_0(VAR_4))
     return;

   for (VAR_8 = VAR_4->parents;
     VAR_8;
     VAR_8 = VAR_8->next)
    FUNC_2(VAR_3, VAR_8->item, 0,
         VAR_6);
  }
 }
}

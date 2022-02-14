
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct commit {TYPE_2__ object; } ;
struct blame_scoreboard {struct blame_entry* ent; } ;
struct blame_origin {scalar_t__ guilty; struct blame_origin* next; } ;
struct blame_entry {struct blame_entry* next; TYPE_1__* suspect; } ;
struct TYPE_3__ {struct commit* commit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct blame_scoreboard*,struct blame_entry*,int) ;
 int FUNC_1 (struct blame_scoreboard*,struct blame_entry*,int) ;
 struct blame_origin* FUNC_2 (struct commit*) ;

__attribute__((used)) static void FUNC_3(struct blame_scoreboard *VAR_2, int VAR_3)
{
 struct blame_entry *VAR_4;

 if (VAR_3 & VAR_1) {
  for (VAR_4 = VAR_2->ent; VAR_4; VAR_4 = VAR_4->next) {
   int VAR_5 = 0;
   struct blame_origin *VAR_6;
   struct commit *VAR_7 = VAR_4->suspect->commit;
   if (VAR_7->object.flags & VAR_0)
    continue;
   for (VAR_6 = FUNC_2(VAR_7); VAR_6; VAR_6 = VAR_6->next) {
    if (VAR_6->guilty && VAR_5++) {
     VAR_7->object.flags |= VAR_0;
     break;
    }
   }
  }
 }

 for (VAR_4 = VAR_2->ent; VAR_4; VAR_4 = VAR_4->next) {
  if (VAR_3 & VAR_1)
   FUNC_1(VAR_2, VAR_4, VAR_3);
  else {
   FUNC_0(VAR_2, VAR_4, VAR_3);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rev_info {int max_age; } ;
struct TYPE_2__ {int flags; scalar_t__ parsed; } ;
struct commit {int date; TYPE_1__ object; int parents; } ;
struct blame_scoreboard {scalar_t__ debug; struct blame_entry* ent; int found_guilty_entry_data; int (* found_guilty_entry ) (struct blame_entry*,int ) ;int show_root; scalar_t__ reverse; int commits; struct rev_info* revs; } ;
struct blame_origin {int guilty; struct blame_entry* suspects; struct commit* commit; struct blame_origin* next; } ;
struct blame_entry {struct blame_entry* next; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct blame_origin*) ;
 int FUNC_2 (struct blame_origin*) ;
 struct blame_origin* FUNC_3 (struct commit*) ;
 int FUNC_4 (struct commit*) ;
 int FUNC_5 (struct commit*) ;
 int FUNC_6 (struct blame_scoreboard*,struct blame_origin*,int) ;
 struct commit* FUNC_7 (int *) ;
 int FUNC_8 (struct blame_scoreboard*) ;
 int FUNC_9 (struct blame_entry*,int ) ;

void FUNC_10(struct blame_scoreboard *VAR_1, int VAR_2)
{
 struct rev_info *VAR_3 = VAR_1->revs;
 struct commit *VAR_4 = FUNC_7(&VAR_1->commits);

 while (VAR_4) {
  struct blame_entry *VAR_5;
  struct blame_origin *VAR_6 = FUNC_3(VAR_4);


  while (VAR_6 && !VAR_6->suspects)
   VAR_6 = VAR_6->next;

  if (!VAR_6) {
   VAR_4 = FUNC_7(&VAR_1->commits);
   continue;
  }

  FUNC_0(VAR_4 == VAR_6->commit);





  FUNC_2(VAR_6);
  FUNC_5(VAR_4);
  if (VAR_1->reverse ||
      (!(VAR_4->object.flags & VAR_0) &&
       !(VAR_3->max_age != -1 && VAR_4->date < VAR_3->max_age)))
   FUNC_6(VAR_1, VAR_6, VAR_2);
  else {
   VAR_4->object.flags |= VAR_0;
   if (VAR_4->object.parsed)
    FUNC_4(VAR_4);
  }

  if (!VAR_4->parents && !VAR_1->show_root)
   VAR_4->object.flags |= VAR_0;


  VAR_5 = VAR_6->suspects;
  if (VAR_5) {
   VAR_6->guilty = 1;
   for (;;) {
    struct blame_entry *VAR_7 = VAR_5->next;
    if (VAR_1->found_guilty_entry)
     VAR_1->found_guilty_entry(VAR_5, VAR_1->found_guilty_entry_data);
    if (VAR_7) {
     VAR_5 = VAR_7;
     continue;
    }
    VAR_5->next = VAR_1->ent;
    VAR_1->ent = VAR_6->suspects;
    VAR_6->suspects = ((void*)0);
    break;
   }
  }
  FUNC_1(VAR_6);

  if (VAR_1->debug)
   FUNC_8(VAR_1);
 }
}

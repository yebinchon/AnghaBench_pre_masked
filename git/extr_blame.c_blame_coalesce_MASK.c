
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_scoreboard {scalar_t__ debug; struct blame_entry* ent; } ;
struct blame_entry {scalar_t__ suspect; scalar_t__ s_lno; scalar_t__ num_lines; scalar_t__ ignored; scalar_t__ unblamable; scalar_t__ score; struct blame_entry* next; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct blame_entry*) ;
 int FUNC_2 (struct blame_scoreboard*) ;

void FUNC_3(struct blame_scoreboard *VAR_0)
{
 struct blame_entry *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->ent; VAR_1 && (VAR_2 = VAR_1->next); VAR_1 = VAR_2) {
  if (VAR_1->suspect == VAR_2->suspect &&
      VAR_1->s_lno + VAR_1->num_lines == VAR_2->s_lno &&
      VAR_1->ignored == VAR_2->ignored &&
      VAR_1->unblamable == VAR_2->unblamable) {
   VAR_1->num_lines += VAR_2->num_lines;
   VAR_1->next = VAR_2->next;
   FUNC_0(VAR_2->suspect);
   FUNC_1(VAR_2);
   VAR_1->score = 0;
   VAR_2 = VAR_1;
  }
 }

 if (VAR_0->debug)
  FUNC_2(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_scoreboard {int commits; } ;
struct blame_origin {int commit; struct blame_entry* suspects; struct blame_origin* next; } ;
struct blame_entry {int dummy; } ;


 struct blame_entry* FUNC_0 (struct blame_entry*,struct blame_entry*) ;
 struct blame_origin* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct blame_scoreboard *VAR_0, struct blame_origin *VAR_1,
    struct blame_entry *VAR_2)
{
 if (VAR_1->suspects)
  VAR_1->suspects = FUNC_0(VAR_1->suspects, VAR_2);
 else {
  struct blame_origin *VAR_3;
  for (VAR_3 = FUNC_1(VAR_1->commit); VAR_3; VAR_3 = VAR_3->next) {
   if (VAR_3->suspects) {
    VAR_1->suspects = VAR_2;
    return;
   }
  }
  VAR_1->suspects = VAR_2;
  FUNC_2(&VAR_0->commits, VAR_1->commit);
 }
}

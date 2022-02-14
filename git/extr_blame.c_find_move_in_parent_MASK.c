
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct blame_scoreboard {scalar_t__ move_score; int num_read_blob; TYPE_1__* revs; } ;
struct blame_origin {struct blame_entry* suspects; } ;
struct blame_entry {struct blame_entry* next; scalar_t__ suspect; } ;
struct TYPE_6__ {int ptr; } ;
typedef TYPE_2__ mmfile_t ;
struct TYPE_5__ {int diffopt; } ;


 scalar_t__ FUNC_0 (struct blame_scoreboard*,struct blame_entry*) ;
 int FUNC_1 (struct blame_entry*) ;
 int FUNC_2 (int *,struct blame_origin*,TYPE_2__*,int *,int ) ;
 struct blame_entry** FUNC_3 (struct blame_scoreboard*,struct blame_entry**,struct blame_entry**,scalar_t__) ;
 int FUNC_4 (struct blame_scoreboard*,struct blame_entry*,struct blame_origin*,struct blame_entry*,TYPE_2__*) ;
 struct blame_entry* FUNC_5 (struct blame_entry*,int *) ;
 int FUNC_6 (struct blame_entry***,struct blame_entry***,struct blame_entry*,struct blame_entry*) ;

__attribute__((used)) static void FUNC_7(struct blame_scoreboard *VAR_0,
    struct blame_entry ***VAR_1,
    struct blame_entry **VAR_2,
    struct blame_origin *VAR_3,
    struct blame_origin *VAR_4)
{
 struct blame_entry *VAR_5, VAR_6[3];
 struct blame_entry *VAR_7 = VAR_3->suspects;
 struct blame_entry *VAR_8 = ((void*)0);
 mmfile_t VAR_9;

 if (!VAR_7)
  return;

 FUNC_2(&VAR_0->revs->diffopt, VAR_4, &VAR_9,
    &VAR_0->num_read_blob, 0);
 if (!VAR_9.ptr)
  return;






 do {
  struct blame_entry **VAR_10 = &VAR_7;
  struct blame_entry *VAR_11;
  for (VAR_5 = VAR_7; VAR_5; VAR_5 = VAR_11) {
   VAR_11 = VAR_5->next;
   FUNC_4(VAR_0, VAR_5, VAR_4, VAR_6, &VAR_9);
   if (VAR_6[1].suspect &&
       VAR_0->move_score < FUNC_0(VAR_0, &VAR_6[1])) {
    FUNC_6(VAR_1, &VAR_10, VAR_6, VAR_5);
   } else {
    VAR_5->next = VAR_8;
    VAR_8 = VAR_5;
   }
   FUNC_1(VAR_6);
  }
  *VAR_10 = ((void*)0);
  VAR_2 = FUNC_3(VAR_0, VAR_2, &VAR_7, VAR_0->move_score);
 } while (VAR_7);
 VAR_3->suspects = FUNC_5(VAR_8, ((void*)0));
}

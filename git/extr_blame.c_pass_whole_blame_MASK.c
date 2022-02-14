
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blame_scoreboard {int dummy; } ;
struct TYPE_2__ {int * ptr; } ;
struct blame_origin {struct blame_entry* suspects; TYPE_1__ file; } ;
struct blame_entry {struct blame_origin* suspect; struct blame_entry* next; } ;


 int FUNC_0 (struct blame_origin*) ;
 int FUNC_1 (struct blame_origin*) ;
 int FUNC_2 (struct blame_scoreboard*,struct blame_origin*,struct blame_entry*) ;

__attribute__((used)) static void FUNC_3(struct blame_scoreboard *VAR_0,
        struct blame_origin *VAR_1, struct blame_origin *VAR_2)
{
 struct blame_entry *VAR_3, *VAR_4;

 if (!VAR_2->file.ptr && VAR_1->file.ptr) {

  VAR_2->file = VAR_1->file;
  VAR_1->file.ptr = ((void*)0);
 }
 VAR_4 = VAR_1->suspects;
 VAR_1->suspects = ((void*)0);
 for (VAR_3 = VAR_4; VAR_3; VAR_3 = VAR_3->next) {
  FUNC_1(VAR_2);
  FUNC_0(VAR_3->suspect);
  VAR_3->suspect = VAR_2;
 }
 FUNC_2(VAR_0, VAR_2, VAR_4);
}

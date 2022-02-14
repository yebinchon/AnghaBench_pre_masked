
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_scoreboard {int dummy; } ;
struct blame_origin {int dummy; } ;
struct blame_entry {struct blame_entry* next; struct blame_origin* suspect; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct blame_entry* FUNC_0 (struct blame_entry*,int ,int ,int ) ;
 int FUNC_1 (struct blame_scoreboard*,struct blame_origin*,struct blame_entry*) ;
 struct blame_entry* FUNC_2 (struct blame_entry*,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct blame_scoreboard *VAR_3, struct blame_entry *VAR_4)
{
 VAR_4 = FUNC_0(VAR_4, VAR_1, VAR_2,
     VAR_0);
 while (VAR_4)
 {
  struct blame_origin *VAR_5 = VAR_4->suspect;
  struct blame_entry *VAR_6 = ((void*)0);
  do {
   struct blame_entry *VAR_7 = VAR_4->next;
   VAR_4->next = VAR_6;
   VAR_6 = VAR_4;
   VAR_4 = VAR_7;
  } while (VAR_4 && VAR_4->suspect == VAR_5);
  VAR_6 = FUNC_2(VAR_6, ((void*)0));
  FUNC_1(VAR_3, VAR_5, VAR_6);
 }
}

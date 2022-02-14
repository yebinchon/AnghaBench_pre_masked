
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blame_scoreboard {int dummy; } ;
struct blame_entry {struct blame_entry* next; } ;


 unsigned int FUNC_0 (struct blame_scoreboard*,struct blame_entry*) ;

__attribute__((used)) static struct blame_entry **FUNC_1(struct blame_scoreboard *VAR_0,
      struct blame_entry **VAR_1,
      struct blame_entry **VAR_2,
      unsigned VAR_3)
{
 struct blame_entry *VAR_4 = *VAR_2;
 struct blame_entry *VAR_5 = *VAR_1;
 while (VAR_4) {
  if (FUNC_0(VAR_0, VAR_4) <= VAR_3) {
   *VAR_1 = VAR_4;
   VAR_1 = &VAR_4->next;
   VAR_4 = *VAR_1;
  } else {
   *VAR_2 = VAR_4;
   VAR_2 = &VAR_4->next;
   VAR_4 = *VAR_2;
  }
 }
 *VAR_1 = VAR_5;
 *VAR_2 = ((void*)0);
 return VAR_1;
}

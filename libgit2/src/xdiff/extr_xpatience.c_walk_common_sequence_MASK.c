
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int submap ;
struct hashmap {int env; int xpp; int file2; int file1; } ;
struct entry {int line1; int line2; struct entry* next; } ;


 scalar_t__ FUNC_0 (struct hashmap*,int,int) ;
 int FUNC_1 (struct hashmap*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct hashmap *VAR_0, struct entry *VAR_1,
  int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = VAR_2 + VAR_3, VAR_7 = VAR_4 + VAR_5;
 int VAR_8, VAR_9;

 for (;;) {

  if (VAR_1) {
   VAR_8 = VAR_1->line1;
   VAR_9 = VAR_1->line2;
   while (VAR_8 > VAR_2 && VAR_9 > VAR_4 &&
     FUNC_0(VAR_0, VAR_8 - 1, VAR_9 - 1)) {
    VAR_8--;
    VAR_9--;
   }
  } else {
   VAR_8 = VAR_6;
   VAR_9 = VAR_7;
  }
  while (VAR_2 < VAR_8 && VAR_4 < VAR_9 &&
    FUNC_0(VAR_0, VAR_2, VAR_4)) {
   VAR_2++;
   VAR_4++;
  }


  if (VAR_8 > VAR_2 || VAR_9 > VAR_4) {
   struct hashmap VAR_10;

   FUNC_1(&VAR_10, 0, sizeof(VAR_10));
   if (FUNC_2(VAR_0->file1, VAR_0->file2,
     VAR_0->xpp, VAR_0->env,
     VAR_2, VAR_8 - VAR_2,
     VAR_4, VAR_9 - VAR_4))
    return -1;
  }

  if (!VAR_1)
   return 0;

  while (VAR_1->next &&
    VAR_1->next->line1 == VAR_1->line1 + 1 &&
    VAR_1->next->line2 == VAR_1->line2 + 1)
   VAR_1 = VAR_1->next;

  VAR_2 = VAR_1->line1 + 1;
  VAR_4 = VAR_1->line2 + 1;

  VAR_1 = VAR_1->next;
 }
}

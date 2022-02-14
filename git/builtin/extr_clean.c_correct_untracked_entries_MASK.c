
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dir_struct {int nr; int ignored_nr; struct dir_entry** entries; struct dir_entry** ignored; } ;
struct dir_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dir_entry*,struct dir_entry*) ;
 scalar_t__ FUNC_1 (struct dir_entry**,struct dir_entry**) ;
 int FUNC_2 (struct dir_entry*) ;

__attribute__((used)) static void FUNC_3(struct dir_struct *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;

 for (VAR_1 = VAR_2 = VAR_3 = 0; VAR_1 < VAR_0->nr; VAR_1++) {

  while (VAR_3 < VAR_0->ignored_nr &&
         0 <= FUNC_1(&VAR_0->entries[VAR_1], &VAR_0->ignored[VAR_3]))
   VAR_3++;

  if (VAR_3 < VAR_0->ignored_nr &&
      FUNC_0(VAR_0->entries[VAR_1], VAR_0->ignored[VAR_3])) {

   FUNC_2(VAR_0->entries[VAR_1]);
  } else {
   struct dir_entry *VAR_4 = VAR_0->entries[VAR_1++];


   VAR_0->entries[VAR_2++] = VAR_4;


   while (VAR_1 < VAR_0->nr &&
          FUNC_0(VAR_4, VAR_0->entries[VAR_1]))
    FUNC_2(VAR_0->entries[VAR_1++]);


   VAR_1--;
  }
 }
 VAR_0->nr = VAR_2;
}

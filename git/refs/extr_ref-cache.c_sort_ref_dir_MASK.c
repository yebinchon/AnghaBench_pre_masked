
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {int dummy; } ;
struct ref_dir {int sorted; int nr; struct ref_entry** entries; } ;


 int FUNC_0 (struct ref_entry**,int,int ) ;
 int FUNC_1 (struct ref_entry*) ;
 scalar_t__ FUNC_2 (struct ref_entry*,struct ref_entry*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct ref_dir *VAR_1)
{
 int VAR_2, VAR_3;
 struct ref_entry *VAR_4 = ((void*)0);





 if (VAR_1->sorted == VAR_1->nr)
  return;

 FUNC_0(VAR_1->entries, VAR_1->nr, VAR_0);


 for (VAR_2 = 0, VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  struct ref_entry *VAR_5 = VAR_1->entries[VAR_3];
  if (VAR_4 && FUNC_2(VAR_4, VAR_5))
   FUNC_1(VAR_5);
  else
   VAR_4 = VAR_1->entries[VAR_2++] = VAR_5;
 }
 VAR_1->sorted = VAR_1->nr = VAR_2;
}

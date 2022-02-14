
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {int flag; int name; } ;
struct ref_dir {int nr; struct ref_entry** entries; } ;





 int VAR_0 ;
 struct ref_dir* FUNC_0 (struct ref_entry*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static void FUNC_2(struct ref_dir *VAR_1, const char *VAR_2)
{






 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++) {
  struct ref_entry *VAR_4 = VAR_1->entries[VAR_3];
  if (!(VAR_4->flag & VAR_0)) {

  } else if (!VAR_2) {

   FUNC_2(FUNC_0(VAR_4), ((void*)0));
  } else {
   switch (FUNC_1(VAR_4->name, VAR_2)) {
   case 130:





    FUNC_2(FUNC_0(VAR_4), ((void*)0));
    break;
   case 128:
    FUNC_2(FUNC_0(VAR_4), VAR_2);
    break;
   case 129:

    break;
   }
  }
 }
}

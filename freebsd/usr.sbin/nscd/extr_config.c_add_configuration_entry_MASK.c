
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int * name; } ;
struct configuration {int entries_size; int entries_capacity; struct configuration_entry** entries; } ;


 int FUNC_0 (int (*) (struct configuration*,struct configuration_entry*)) ;
 int FUNC_1 (int (*) (struct configuration*,struct configuration_entry*)) ;
 int FUNC_2 (int ) ;
 struct configuration_entry** FUNC_3 (int,int) ;
 int VAR_0 ;
 int * FUNC_4 (struct configuration*,int *) ;
 int FUNC_5 (struct configuration_entry**) ;
 int FUNC_6 (struct configuration_entry**,struct configuration_entry**,int) ;
 int FUNC_7 (struct configuration_entry**,int,int,int ) ;

int
FUNC_8(struct configuration *VAR_1,
 struct configuration_entry *VAR_2)
{
 FUNC_0(FUNC_8);
 FUNC_2(VAR_2 != ((void*)0));
 FUNC_2(VAR_2->name != ((void*)0));
 if (FUNC_4(VAR_1, VAR_2->name) != ((void*)0)) {
  FUNC_1(FUNC_8);
  return (-1);
 }

 if (VAR_1->entries_size == VAR_1->entries_capacity) {
  struct configuration_entry **VAR_3;

  VAR_1->entries_capacity *= 2;
  VAR_3 = FUNC_3(VAR_1->entries_capacity,
   sizeof(*VAR_3));
  FUNC_2(VAR_3 != ((void*)0));
  FUNC_6(VAR_3, VAR_1->entries,
   sizeof(struct configuration_entry *) *
          VAR_1->entries_size);

  FUNC_5(VAR_1->entries);
  VAR_1->entries = VAR_3;
 }

 VAR_1->entries[VAR_1->entries_size++] = VAR_2;
 FUNC_7(VAR_1->entries, VAR_1->entries_size,
  sizeof(struct configuration_entry *),
  VAR_0);

 FUNC_1(FUNC_8);
 return (0);
}

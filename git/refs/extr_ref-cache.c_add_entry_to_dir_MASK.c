
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_entry {int name; } ;
struct ref_dir {int nr; int sorted; struct ref_entry** entries; int alloc; } ;


 int FUNC_0 (struct ref_entry**,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

void FUNC_2(struct ref_dir *VAR_0, struct ref_entry *VAR_1)
{
 FUNC_0(VAR_0->entries, VAR_0->nr + 1, VAR_0->alloc);
 VAR_0->entries[VAR_0->nr++] = VAR_1;

 if (VAR_0->nr == 1 ||
     (VAR_0->nr == VAR_0->sorted + 1 &&
      FUNC_1(VAR_0->entries[VAR_0->nr - 2]->name,
      VAR_0->entries[VAR_0->nr - 1]->name) < 0))
  VAR_0->sorted = VAR_0->nr;
}

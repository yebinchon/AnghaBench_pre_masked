
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct decoration_entry {void* decoration; struct object* base; } ;
struct decoration {int size; scalar_t__ nr; struct decoration_entry* entries; } ;


 int FUNC_0 (struct decoration_entry*) ;
 int FUNC_1 (struct decoration*,struct object const*,void*) ;
 struct decoration_entry* FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct decoration *VAR_0)
{
 int VAR_1;
 int VAR_2 = VAR_0->size;
 struct decoration_entry *VAR_3 = VAR_0->entries;

 VAR_0->size = (VAR_2 + 1000) * 3 / 2;
 VAR_0->entries = FUNC_2(VAR_0->size, sizeof(struct decoration_entry));
 VAR_0->nr = 0;

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  const struct object *VAR_4 = VAR_3[VAR_1].base;
  void *VAR_5 = VAR_3[VAR_1].decoration;

  if (!VAR_5)
   continue;
  FUNC_1(VAR_0, VAR_4, VAR_5);
 }
 FUNC_0(VAR_3);
}

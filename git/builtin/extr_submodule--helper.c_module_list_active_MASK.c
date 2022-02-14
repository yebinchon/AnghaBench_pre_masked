
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_list {int nr; struct cache_entry const** entries; int alloc; } ;
typedef struct cache_entry {int name; } const cache_entry ;


 int FUNC_0 (struct cache_entry const**,int,int ) ;
 struct module_list VAR_0 ;
 int FUNC_1 (struct cache_entry const**) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct module_list *VAR_2)
{
 int VAR_3;
 struct module_list VAR_4 = VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr; VAR_3++) {
  const struct cache_entry *VAR_5 = VAR_2->entries[VAR_3];

  if (!FUNC_2(VAR_1, VAR_5->name))
   continue;

  FUNC_0(VAR_4.entries,
      VAR_4.nr + 1,
      VAR_4.alloc);
  VAR_4.entries[VAR_4.nr++] = VAR_5;
 }

 FUNC_1(VAR_2->entries);
 *VAR_2 = VAR_4;
}

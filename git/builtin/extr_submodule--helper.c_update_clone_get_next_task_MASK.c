
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nr; struct cache_entry** entries; } ;
struct submodule_update_clone {size_t current; int failed_clones_nr; struct cache_entry** failed_clones; TYPE_1__ list; } ;
struct strbuf {int dummy; } ;
struct child_process {int dummy; } ;
struct cache_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct cache_entry const*,struct child_process*,struct submodule_update_clone*,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*) ;
 int* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct child_process *VAR_0,
          struct strbuf *VAR_1,
          void *VAR_2,
          void **VAR_3)
{
 struct submodule_update_clone *VAR_4 = VAR_2;
 const struct cache_entry *VAR_5;
 int VAR_6;

 for (; VAR_4->current < VAR_4->list.nr; VAR_4->current++) {
  VAR_5 = VAR_4->list.entries[VAR_4->current];
  if (FUNC_0(VAR_5, VAR_0, VAR_4, VAR_1)) {
   int *VAR_7 = FUNC_2(sizeof(*VAR_7));
   *VAR_7 = VAR_4->current;
   *VAR_3 = VAR_7;
   VAR_4->current++;
   return 1;
  }
 }






 VAR_6 = VAR_4->current - VAR_4->list.nr;
 if (VAR_6 < VAR_4->failed_clones_nr) {
  int *VAR_8;
  VAR_5 = VAR_4->failed_clones[VAR_6];
  if (!FUNC_0(VAR_5, VAR_0, VAR_4, VAR_1)) {
   VAR_4->current ++;
   FUNC_1(VAR_1, "BUG: submodule considered for "
        "cloning, doesn't need cloning "
        "any more?\n");
   return 0;
  }
  VAR_8 = FUNC_2(sizeof(*VAR_8));
  *VAR_8 = VAR_4->current;
  *VAR_3 = VAR_8;
  VAR_4->current ++;
  return 1;
 }

 return 0;
}

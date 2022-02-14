
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_entry {struct tree_content* tree; TYPE_1__* versions; } ;
struct tree_content {unsigned int entry_count; int delta_depth; struct tree_entry** entries; } ;
struct TYPE_2__ {int oid; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct tree_entry*,struct tree_entry*,int) ;
 struct tree_content* FUNC_2 (unsigned int) ;
 struct tree_entry* FUNC_3 () ;

__attribute__((used)) static struct tree_content *FUNC_4(struct tree_content *VAR_0)
{
 struct tree_content *VAR_1;
 struct tree_entry *VAR_2, *VAR_3;
 unsigned int VAR_4;

 if (!VAR_0)
  return ((void*)0);
 VAR_1 = FUNC_2(VAR_0->entry_count);
 for (VAR_4 = 0; VAR_4 < VAR_0->entry_count; VAR_4++) {
  VAR_2 = VAR_0->entries[VAR_4];
  VAR_3 = FUNC_3();
  FUNC_1(VAR_3, VAR_2, sizeof(*VAR_2));
  if (VAR_2->tree && FUNC_0(&VAR_3->versions[1].oid))
   VAR_3->tree = FUNC_4(VAR_2->tree);
  else
   VAR_3->tree = ((void*)0);
  VAR_1->entries[VAR_4] = VAR_3;
 }
 VAR_1->entry_count = VAR_0->entry_count;
 VAR_1->delta_depth = VAR_0->delta_depth;

 return VAR_1;
}

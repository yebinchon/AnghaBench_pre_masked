
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_desc {int dummy; } ;
struct TYPE_2__ {int parsed; int oid; } ;
struct tree {TYPE_1__ object; int size; int buffer; } ;
struct repository {int dummy; } ;
struct name_entry {int path; int oid; int mode; } ;
struct cache_tree_sub {struct cache_tree* cache_tree; } ;
struct cache_tree {int entry_count; int oid; } ;


 int FUNC_0 (int ) ;
 struct cache_tree* FUNC_1 () ;
 struct cache_tree_sub* FUNC_2 (struct cache_tree*,int ) ;
 int FUNC_3 (struct tree_desc*,int ,int ) ;
 struct tree* FUNC_4 (struct repository*,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct tree*) ;
 scalar_t__ FUNC_7 (struct tree_desc*,struct name_entry*) ;

__attribute__((used)) static void FUNC_8(struct repository *VAR_0,
     struct cache_tree *VAR_1,
     struct tree *VAR_2)
{
 struct tree_desc VAR_3;
 struct name_entry VAR_4;
 int VAR_5;

 FUNC_5(&VAR_1->oid, &VAR_2->object.oid);
 FUNC_3(&VAR_3, VAR_2->buffer, VAR_2->size);
 VAR_5 = 0;
 while (FUNC_7(&VAR_3, &VAR_4)) {
  if (!FUNC_0(VAR_4.mode))
   VAR_5++;
  else {
   struct cache_tree_sub *VAR_6;
   struct tree *VAR_7 = FUNC_4(VAR_0, &VAR_4.oid);
   if (!VAR_7->object.parsed)
    FUNC_6(VAR_7);
   VAR_6 = FUNC_2(VAR_1, VAR_4.path);
   VAR_6->cache_tree = FUNC_1();
   FUNC_8(VAR_0, VAR_6->cache_tree, VAR_7);
   VAR_5 += VAR_6->cache_tree->entry_count;
  }
 }
 VAR_1->entry_count = VAR_5;
}

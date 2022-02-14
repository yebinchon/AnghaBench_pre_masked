
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object {scalar_t__ type; int flags; } ;
struct cache_tree {scalar_t__ entry_count; int subtree_nr; TYPE_1__** down; int oid; } ;
struct TYPE_4__ {int object_names; } ;
struct TYPE_3__ {struct cache_tree* cache_tree; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct object*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (struct object*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct object*,int ) ;
 int FUNC_6 (int *) ;
 struct object* FUNC_7 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct cache_tree *VAR_9)
{
 int VAR_10;
 int VAR_11 = 0;

 if (VAR_8)
  FUNC_3(VAR_6, FUNC_0("Checking cache tree"));

 if (0 <= VAR_9->entry_count) {
  struct object *VAR_12 = FUNC_7(VAR_7, &VAR_9->oid);
  if (!VAR_12) {
   FUNC_2(FUNC_0("%s: invalid sha1 pointer in cache-tree"),
         FUNC_6(&VAR_9->oid));
   VAR_3 |= VAR_0;
   return 1;
  }
  VAR_12->flags |= VAR_2;
  if (VAR_5)
   FUNC_1(VAR_4.object_names,
    VAR_12, FUNC_8(":"));
  FUNC_4(VAR_12);
  if (VAR_12->type != VAR_1)
   VAR_11 |= FUNC_5(VAR_12, FUNC_0("non-tree in cache-tree"));
 }
 for (VAR_10 = 0; VAR_10 < VAR_9->subtree_nr; VAR_10++)
  VAR_11 |= FUNC_9(VAR_9->down[VAR_10]->cache_tree);
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_islands_todo {struct object_entry* entry; int depth; } ;
struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct repository {int dummy; } ;
struct progress {int dummy; } ;
struct packing_data {int nr_objects; struct object_entry* objects; } ;
struct TYPE_2__ {int oid; } ;
struct object_entry {TYPE_1__ idx; } ;
struct object {int dummy; } ;
struct name_entry {int oid; int mode; } ;
struct island_bitmap {int dummy; } ;
typedef scalar_t__ khiter_t ;


 int FUNC_0 (struct tree_islands_todo*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct tree_islands_todo*,int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct progress*,int) ;
 int FUNC_6 (struct tree_islands_todo*) ;
 int FUNC_7 (struct tree*) ;
 int FUNC_8 (struct tree_desc*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 struct island_bitmap* FUNC_11 (int ,scalar_t__) ;
 struct object* FUNC_12 (struct repository*,int *) ;
 struct tree* FUNC_13 (struct repository*,int *) ;
 int FUNC_14 (struct packing_data*,struct object_entry*) ;
 scalar_t__ FUNC_15 (struct object_entry*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (struct tree*) ;
 int FUNC_18 (struct object*,struct island_bitmap*) ;
 struct progress* FUNC_19 (int ,int) ;
 int FUNC_20 (struct progress**) ;
 int VAR_2 ;
 scalar_t__ FUNC_21 (struct tree_desc*,struct name_entry*) ;

void FUNC_22(struct repository *VAR_3,
     int VAR_4,
     struct packing_data *VAR_5)
{
 struct progress *VAR_6 = ((void*)0);
 struct tree_islands_todo *VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if (!VAR_1)
  return;
 FUNC_0(VAR_7, VAR_5->nr_objects);
 for (VAR_9 = 0; VAR_9 < VAR_5->nr_objects; VAR_9++) {
  if (FUNC_15(&VAR_5->objects[VAR_9]) == VAR_0) {
   VAR_7[VAR_8].entry = &VAR_5->objects[VAR_9];
   VAR_7[VAR_8].depth = FUNC_14(VAR_5, &VAR_5->objects[VAR_9]);
   VAR_8++;
  }
 }
 FUNC_1(VAR_7, VAR_8, VAR_2);

 if (VAR_4)
  VAR_6 = FUNC_19(FUNC_3("Propagating island marks"), VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  struct object_entry *VAR_10 = VAR_7[VAR_9].entry;
  struct island_bitmap *VAR_11;
  struct tree *VAR_12;
  struct tree_desc VAR_13;
  struct name_entry VAR_14;
  khiter_t VAR_15;

  VAR_15 = FUNC_10(VAR_1, VAR_10->idx.oid);
  if (VAR_15 >= FUNC_9(VAR_1))
   continue;

  VAR_11 = FUNC_11(VAR_1, VAR_15);

  VAR_12 = FUNC_13(VAR_3, &VAR_10->idx.oid);
  if (!VAR_12 || FUNC_17(VAR_12) < 0)
   FUNC_4(FUNC_3("bad tree object %s"), FUNC_16(&VAR_10->idx.oid));

  FUNC_8(&VAR_13, VAR_12->buffer, VAR_12->size);
  while (FUNC_21(&VAR_13, &VAR_14)) {
   struct object *VAR_16;

   if (FUNC_2(VAR_14.mode))
    continue;

   VAR_16 = FUNC_12(VAR_3, &VAR_14.oid);
   if (!VAR_16)
    continue;

   FUNC_18(VAR_16, VAR_11);
  }

  FUNC_7(VAR_12);

  FUNC_5(VAR_6, VAR_9+1);
 }

 FUNC_20(&VAR_6);
 FUNC_6(VAR_7);
}

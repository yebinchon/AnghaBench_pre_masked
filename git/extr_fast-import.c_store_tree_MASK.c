
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree_entry {TYPE_2__* versions; struct tree_content* tree; } ;
struct tree_content {unsigned int entry_count; struct tree_entry** entries; int delta_depth; } ;
struct TYPE_3__ {int offset; } ;
struct object_entry {scalar_t__ pack_id; TYPE_1__ idx; } ;
struct last_object {int member_3; int depth; int offset; int data; int member_2; int member_1; int member_0; } ;
struct TYPE_4__ {int mode; int oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct object_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tree_entry*) ;
 int FUNC_4 (struct tree_content*,int,int *) ;
 int VAR_3 ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (struct tree_entry*) ;
 int FUNC_7 (int ,int *,struct last_object*,int *,int ) ;

__attribute__((used)) static void FUNC_8(struct tree_entry *VAR_6)
{
 struct tree_content *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 struct last_object VAR_11 = { VAR_2, 0, 0, 1 };
 struct object_entry *VAR_12 = ((void*)0);

 if (!FUNC_2(&VAR_6->versions[1].oid))
  return;

 if (!VAR_6->tree)
  FUNC_3(VAR_6);
 VAR_7 = VAR_6->tree;

 for (VAR_8 = 0; VAR_8 < VAR_7->entry_count; VAR_8++) {
  if (VAR_7->entries[VAR_8]->tree)
   FUNC_8(VAR_7->entries[VAR_8]);
 }

 if (!(VAR_6->versions[0].mode & VAR_0))
  VAR_12 = FUNC_1(&VAR_6->versions[0].oid);
 if (FUNC_0(VAR_6->versions[0].mode) && VAR_12 && VAR_12->pack_id == VAR_5) {
  FUNC_4(VAR_7, 0, &VAR_4);
  VAR_11.data = VAR_4;
  VAR_11.offset = VAR_12->idx.offset;
  VAR_11.depth = VAR_7->delta_depth;
 }

 FUNC_4(VAR_7, 1, &VAR_3);
 FUNC_7(VAR_1, &VAR_3, &VAR_11, &VAR_6->versions[1].oid, 0);

 VAR_7->delta_depth = VAR_11.depth;
 for (VAR_8 = 0, VAR_9 = 0, VAR_10 = 0; VAR_8 < VAR_7->entry_count; VAR_8++) {
  struct tree_entry *VAR_13 = VAR_7->entries[VAR_8];
  if (VAR_13->versions[1].mode) {
   VAR_13->versions[0].mode = VAR_13->versions[1].mode;
   FUNC_5(&VAR_13->versions[0].oid, &VAR_13->versions[1].oid);
   VAR_7->entries[VAR_9++] = VAR_13;
  } else {
   FUNC_6(VAR_13);
   VAR_10++;
  }
 }
 VAR_7->entry_count -= VAR_10;
}

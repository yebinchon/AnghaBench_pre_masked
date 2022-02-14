
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tree_entry {TYPE_1__* versions; TYPE_2__* name; struct tree_content* tree; } ;
struct tree_content {scalar_t__ entry_count; scalar_t__ entry_capacity; struct tree_entry** entries; int delta_depth; } ;
struct object_id {int hash; } ;
struct object_entry {scalar_t__ pack_id; scalar_t__ type; int depth; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;
struct TYPE_6__ {int rawsz; } ;
struct TYPE_5__ {scalar_t__ str_len; } ;
struct TYPE_4__ {struct object_id oid; int mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 struct object_entry* FUNC_1 (struct object_id*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,int *) ;
 char* FUNC_4 (struct object_entry*,unsigned long*) ;
 struct tree_content* FUNC_5 (struct tree_content*,scalar_t__) ;
 int FUNC_6 (int ,unsigned char*) ;
 scalar_t__ FUNC_7 (struct object_id*) ;
 struct tree_content* FUNC_8 (int) ;
 struct tree_entry* FUNC_9 () ;
 int FUNC_10 (struct object_id*) ;
 char* FUNC_11 (struct object_id*,int*,unsigned long*) ;
 int FUNC_12 (char const*) ;
 TYPE_3__* VAR_2 ;
 TYPE_2__* FUNC_13 (char const*,int ) ;

__attribute__((used)) static void FUNC_14(struct tree_entry *VAR_3)
{
 struct object_id *VAR_4 = &VAR_3->versions[1].oid;
 struct object_entry *VAR_5;
 struct tree_content *VAR_6;
 unsigned long VAR_7;
 char *VAR_8;
 const char *VAR_9;

 VAR_3->tree = VAR_6 = FUNC_8(8);
 if (FUNC_7(VAR_4))
  return;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 && VAR_5->pack_id != VAR_0) {
  if (VAR_5->type != VAR_1)
   FUNC_0("Not a tree: %s", FUNC_10(VAR_4));
  VAR_6->delta_depth = VAR_5->depth;
  VAR_8 = FUNC_4(VAR_5, &VAR_7);
  if (!VAR_8)
   FUNC_0("Can't load tree %s", FUNC_10(VAR_4));
 } else {
  enum object_type VAR_10;
  VAR_8 = FUNC_11(VAR_4, &VAR_10, &VAR_7);
  if (!VAR_8 || VAR_10 != VAR_1)
   FUNC_0("Can't load tree %s", FUNC_10(VAR_4));
 }

 VAR_9 = VAR_8;
 while (VAR_9 != (VAR_8 + VAR_7)) {
  struct tree_entry *VAR_11 = FUNC_9();

  if (VAR_6->entry_count == VAR_6->entry_capacity)
   VAR_3->tree = VAR_6 = FUNC_5(VAR_6, VAR_6->entry_count);
  VAR_6->entries[VAR_6->entry_count++] = VAR_11;

  VAR_11->tree = ((void*)0);
  VAR_9 = FUNC_3(VAR_9, &VAR_11->versions[1].mode);
  if (!VAR_9)
   FUNC_0("Corrupt mode in %s", FUNC_10(VAR_4));
  VAR_11->versions[0].mode = VAR_11->versions[1].mode;
  VAR_11->name = FUNC_13(VAR_9, FUNC_12(VAR_9));
  VAR_9 += VAR_11->name->str_len + 1;
  FUNC_6(VAR_11->versions[0].oid.hash, (unsigned char *)VAR_9);
  FUNC_6(VAR_11->versions[1].oid.hash, (unsigned char *)VAR_9);
  VAR_9 += VAR_2->rawsz;
 }
 FUNC_2(VAR_8);
}

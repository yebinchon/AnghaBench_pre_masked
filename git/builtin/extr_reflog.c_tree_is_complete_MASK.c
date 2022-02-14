
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_desc {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct tree {unsigned long size; TYPE_1__ object; void* buffer; } ;
struct object_id {int dummy; } ;
struct name_entry {struct object_id oid; int mode; } ;
typedef enum object_type { ____Placeholder_object_type } object_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tree*) ;
 int FUNC_2 (struct object_id*) ;
 int FUNC_3 (struct tree_desc*,void*,unsigned long) ;
 struct tree* FUNC_4 (int ,struct object_id const*) ;
 void* FUNC_5 (struct object_id const*,int*,unsigned long*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct tree_desc*,struct name_entry*) ;

__attribute__((used)) static int FUNC_7(const struct object_id *VAR_3)
{
 struct tree_desc VAR_4;
 struct name_entry VAR_5;
 int VAR_6;
 struct tree *VAR_7;

 VAR_7 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_7)
  return 0;
 if (VAR_7->object.flags & VAR_1)
  return 1;
 if (VAR_7->object.flags & VAR_0)
  return 0;

 if (!VAR_7->buffer) {
  enum object_type VAR_8;
  unsigned long VAR_9;
  void *VAR_10 = FUNC_5(VAR_3, &VAR_8, &VAR_9);
  if (!VAR_10) {
   VAR_7->object.flags |= VAR_0;
   return 0;
  }
  VAR_7->buffer = VAR_10;
  VAR_7->size = VAR_9;
 }
 FUNC_3(&VAR_4, VAR_7->buffer, VAR_7->size);
 VAR_6 = 1;
 while (FUNC_6(&VAR_4, &VAR_5)) {
  if (!FUNC_2(&VAR_5.oid) ||
      (FUNC_0(VAR_5.mode) && !FUNC_7(&VAR_5.oid))) {
   VAR_7->object.flags |= VAR_0;
   VAR_6 = 0;
  }
 }
 FUNC_1(VAR_7);

 if (VAR_6)
  VAR_7->object.flags |= VAR_1;
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tree_desc {int dummy; } ;
struct tree {int size; int buffer; } ;
struct tag {int dummy; } ;
struct packed_git {int dummy; } ;
struct oidset {int dummy; } ;
struct object_id {int dummy; } ;
struct object {scalar_t__ type; } ;
struct name_entry {struct object_id const oid; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_3__ {struct object_id const oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct object_id const* FUNC_0 (struct commit*) ;
 struct object_id const* FUNC_1 (struct tag*) ;
 scalar_t__ FUNC_2 (struct tree_desc*,int ,int ) ;
 int FUNC_3 (struct oidset*,struct object_id const*) ;
 struct object* FUNC_4 (int ,struct object_id const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (struct tree_desc*,struct name_entry*) ;

__attribute__((used)) static int FUNC_6(const struct object_id *VAR_4,
          struct packed_git *VAR_5,
          uint32_t VAR_6,
          void *VAR_7)
{
 struct oidset *VAR_8 = VAR_7;
 struct object *VAR_9 = FUNC_4(VAR_3, VAR_4);
 if (!VAR_9)
  return 1;

 FUNC_3(VAR_8, VAR_4);





 if (VAR_9->type == VAR_2) {
  struct tree *VAR_10 = (struct tree *)VAR_9;
  struct tree_desc VAR_11;
  struct name_entry VAR_12;
  if (FUNC_2(&VAR_11, VAR_10->buffer, VAR_10->size))




   return 0;
  while (FUNC_5(&VAR_11, &VAR_12))
   FUNC_3(VAR_8, &VAR_12.oid);
 } else if (VAR_9->type == VAR_0) {
  struct commit *VAR_13 = (struct commit *) VAR_9;
  struct commit_list *VAR_14 = VAR_13->parents;

  FUNC_3(VAR_8, FUNC_0(VAR_13));
  for (; VAR_14; VAR_14 = VAR_14->next)
   FUNC_3(VAR_8, &VAR_14->item->object.oid);
 } else if (VAR_9->type == VAR_1) {
  struct tag *VAR_15 = (struct tag *) VAR_9;
  FUNC_3(VAR_8, FUNC_1(VAR_15));
 }
 return 0;
}

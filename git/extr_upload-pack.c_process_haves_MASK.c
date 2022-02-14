
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oid_array {int nr; struct object_id* oid; } ;
struct object_id {int dummy; } ;
struct object_array {int dummy; } ;
struct object {scalar_t__ type; int flags; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {scalar_t__ date; struct commit_list* parents; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct object*,int *,struct object_array*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct object_id const*) ;
 int FUNC_3 (struct oid_array*,struct object_id const*) ;
 int FUNC_4 (struct object_id const*) ;
 scalar_t__ VAR_2 ;
 struct object* FUNC_5 (int ,struct object_id const*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct oid_array *VAR_4, struct oid_array *VAR_5,
    struct object_array *VAR_6)
{
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_4->nr; VAR_7++) {
  const struct object_id *VAR_8 = &VAR_4->oid[VAR_7];
  struct object *VAR_9;
  int VAR_10 = 0;

  if (!FUNC_2(VAR_8))
   continue;

  FUNC_3(VAR_5, VAR_8);

  VAR_9 = FUNC_5(VAR_3, VAR_8);
  if (!VAR_9)
   FUNC_1("oops (%s)", FUNC_4(VAR_8));
  if (VAR_9->type == VAR_0) {
   struct commit_list *VAR_11;
   struct commit *VAR_12 = (struct commit *)VAR_9;
   if (VAR_9->flags & VAR_1)
    VAR_10 = 1;
   else
    VAR_9->flags |= VAR_1;
   if (!VAR_2 || (VAR_12->date < VAR_2))
    VAR_2 = VAR_12->date;
   for (VAR_11 = VAR_12->parents;
        VAR_11;
        VAR_11 = VAR_11->next)
    VAR_11->item->object.flags |= VAR_1;
  }
  if (!VAR_10)
   FUNC_0(VAR_9, ((void*)0), VAR_6);
 }

 return 0;
}

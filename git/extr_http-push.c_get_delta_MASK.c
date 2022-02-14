
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tree {int dummy; } ;
struct TYPE_3__ {int nr; struct object_array_entry* objects; } ;
struct rev_info {TYPE_1__ pending; } ;
struct remote_lock {int dummy; } ;
struct object_list {struct object_list* next; TYPE_2__* item; } ;
struct object_array_entry {char* name; struct object* item; } ;
struct object {int flags; scalar_t__ type; int oid; } ;
struct TYPE_4__ {int flags; } ;
struct commit {TYPE_2__ object; } ;
struct blob {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct object_list** FUNC_0 (struct object*,struct object_list**) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct remote_lock*) ;
 int FUNC_2 (char*,int ,char const*) ;
 struct tree* FUNC_3 (struct commit*) ;
 struct commit* FUNC_4 (struct rev_info*) ;
 struct object_list* VAR_6 ;
 int FUNC_5 (int *) ;
 struct object_list** FUNC_6 (struct blob*,struct object_list**) ;
 struct object_list** FUNC_7 (struct tree*,struct object_list**) ;

__attribute__((used)) static int FUNC_8(struct rev_info *VAR_7, struct remote_lock *VAR_8)
{
 int VAR_9;
 struct commit *VAR_10;
 struct object_list **VAR_11 = &VAR_6;
 int VAR_12 = 0;

 while ((VAR_10 = FUNC_4(VAR_7)) != ((void*)0)) {
  VAR_11 = FUNC_7(FUNC_3(VAR_10), VAR_11);
  VAR_10->object.flags |= VAR_0;
  if (!(VAR_10->object.flags & VAR_5))
   VAR_12 += FUNC_1(&VAR_10->object, VAR_8);
 }

 for (VAR_9 = 0; VAR_9 < VAR_7->pending.nr; VAR_9++) {
  struct object_array_entry *VAR_13 = VAR_7->pending.objects + VAR_9;
  struct object *VAR_14 = VAR_13->item;
  const char *VAR_15 = VAR_13->name;

  if (VAR_14->flags & (VAR_5 | VAR_4))
   continue;
  if (VAR_14->type == VAR_2) {
   VAR_14->flags |= VAR_4;
   VAR_11 = FUNC_0(VAR_14, VAR_11);
   continue;
  }
  if (VAR_14->type == VAR_3) {
   VAR_11 = FUNC_7((struct tree *)VAR_14, VAR_11);
   continue;
  }
  if (VAR_14->type == VAR_1) {
   VAR_11 = FUNC_6((struct blob *)VAR_14, VAR_11);
   continue;
  }
  FUNC_2("unknown pending object %s (%s)", FUNC_5(&VAR_14->oid), VAR_15);
 }

 while (VAR_6) {
  if (!(VAR_6->item->flags & VAR_5))
   VAR_12 += FUNC_1(VAR_6->item, VAR_8);
  VAR_6 = VAR_6->next;
 }

 return VAR_12;
}

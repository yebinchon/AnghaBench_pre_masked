
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct object_array {int nr; TYPE_2__* objects; } ;
struct object {unsigned int flags; scalar_t__ type; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct TYPE_3__ {unsigned int flags; } ;
struct commit {scalar_t__ generation; scalar_t__ date; TYPE_1__ object; struct commit_list* parents; } ;
struct TYPE_4__ {struct object* item; } ;


 int FUNC_0 (struct commit**,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct commit**,int,int ) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int,struct commit**,unsigned int) ;
 int FUNC_3 (struct commit*,struct commit_list**) ;
 int VAR_2 ;
 struct object* FUNC_4 (int ,struct object*,char*,int ) ;
 int FUNC_5 (struct commit**) ;
 scalar_t__ FUNC_6 (struct commit*) ;
 int FUNC_7 (struct commit_list**) ;
 int VAR_3 ;

int FUNC_8(struct object_array *VAR_4,
     unsigned int VAR_5,
     unsigned int VAR_6,
     time_t VAR_7,
     uint32_t VAR_8)
{
 struct commit **VAR_9 = ((void*)0);
 int VAR_10;
 int VAR_11;
 int VAR_12 = 1;

 FUNC_0(VAR_9, VAR_4->nr);
 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_4->nr; VAR_10++) {
  struct object *VAR_13 = VAR_4->objects[VAR_10].item;

  if (!VAR_13 || VAR_13->flags & VAR_6)
   continue;

  VAR_13 = FUNC_4(VAR_3, VAR_13,
         "a from object", 0);
  if (!VAR_13 || VAR_13->type != VAR_0) {






   VAR_4->objects[VAR_10].item->flags |= VAR_6;
   continue;
  }

  VAR_9[VAR_11] = (struct commit *)VAR_13;
  if (FUNC_6(VAR_9[VAR_11]) ||
      VAR_9[VAR_11]->generation < VAR_8) {
   VAR_12 = 0;
   goto cleanup;
  }

  VAR_11++;
 }

 FUNC_1(VAR_9, VAR_11, VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {

  struct commit_list *VAR_14 = ((void*)0);

  VAR_9[VAR_10]->object.flags |= VAR_6;
  FUNC_3(VAR_9[VAR_10], &VAR_14);

  while (VAR_14) {
   struct commit_list *VAR_15;

   if (VAR_14->item->object.flags & (VAR_5 | VAR_1)) {
    FUNC_7(&VAR_14);
    if (VAR_14)
     VAR_14->item->object.flags |= VAR_1;
    continue;
   }

   for (VAR_15 = VAR_14->item->parents; VAR_15; VAR_15 = VAR_15->next) {
    if (VAR_15->item->object.flags & (VAR_5 | VAR_1))
     VAR_14->item->object.flags |= VAR_1;

    if (!(VAR_15->item->object.flags & VAR_6)) {
     VAR_15->item->object.flags |= VAR_6;

     if (FUNC_6(VAR_15->item) ||
         VAR_15->item->date < VAR_7 ||
         VAR_15->item->generation < VAR_8)
      continue;

     FUNC_3(VAR_15->item, &VAR_14);
     break;
    }
   }

   if (!VAR_15)
    FUNC_7(&VAR_14);
  }

  if (!(VAR_9[VAR_10]->object.flags & (VAR_5 | VAR_1))) {
   VAR_12 = 0;
   goto cleanup;
  }
 }

cleanup:
 FUNC_2(VAR_11, VAR_9, VAR_1 | VAR_6);
 FUNC_5(VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_4->nr; VAR_10++)
  VAR_4->objects[VAR_10].item->flags &= ~VAR_6;

 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_array {int nr; TYPE_1__* objects; } ;
struct commit_list {struct commit* item; struct commit_list* next; } ;
struct commit_graft {scalar_t__ nr_parent; } ;
struct commit_depth {int slab_count; int slab_size; int ** slab; } ;
struct TYPE_4__ {scalar_t__ type; int flags; int oid; } ;
struct commit {TYPE_2__ object; struct commit_list* parents; } ;
struct TYPE_3__ {int item; } ;


 int VAR_0 ;
 struct object_array VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,struct object_array*) ;
 int FUNC_1 (struct commit_depth*) ;
 int** FUNC_2 (struct commit_depth*,struct commit*) ;
 int FUNC_3 (struct commit*,struct commit_list**) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct commit_depth*) ;
 scalar_t__ FUNC_7 (int ) ;
 struct commit_graft* FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (struct object_array*) ;
 int FUNC_10 (struct commit*) ;
 int VAR_3 ;
 int* FUNC_11 (int) ;

struct commit_list *FUNC_12(struct object_array *VAR_4, int VAR_5,
  int VAR_6, int VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0;
 struct commit_list *VAR_10 = ((void*)0);
 struct object_array VAR_11 = VAR_1;
 struct commit *VAR_12 = ((void*)0);
 struct commit_graft *VAR_13;
 struct commit_depth VAR_14;

 FUNC_6(&VAR_14);
 while (VAR_12 || VAR_8 < VAR_4->nr || VAR_11.nr) {
  struct commit_list *VAR_15;
  if (!VAR_12) {
   if (VAR_8 < VAR_4->nr) {
    int **VAR_16;
    VAR_12 = (struct commit *)
     FUNC_4(VAR_3,
        VAR_4->objects[VAR_8++].item,
        ((void*)0), 0);
    if (!VAR_12 || VAR_12->object.type != VAR_2) {
     VAR_12 = ((void*)0);
     continue;
    }
    VAR_16 = FUNC_2(&VAR_14, VAR_12);
    if (!*VAR_16)
     *VAR_16 = FUNC_11(sizeof(int));
    **VAR_16 = 0;
    VAR_9 = 0;
   } else {
    VAR_12 = (struct commit *)
     FUNC_9(&VAR_11);
    VAR_9 = **FUNC_2(&VAR_14, VAR_12);
   }
  }
  FUNC_10(VAR_12);
  VAR_9++;
  if ((VAR_5 != VAR_0 && VAR_9 >= VAR_5) ||
      (FUNC_7(VAR_3) && !VAR_12->parents &&
       (VAR_13 = FUNC_8(VAR_3, &VAR_12->object.oid)) != ((void*)0) &&
       VAR_13->nr_parent < 0)) {
   FUNC_3(VAR_12, &VAR_10);
   VAR_12->object.flags |= VAR_6;
   VAR_12 = ((void*)0);
   continue;
  }
  VAR_12->object.flags |= VAR_7;
  for (VAR_15 = VAR_12->parents, VAR_12 = ((void*)0); VAR_15; VAR_15 = VAR_15->next) {
   int **VAR_17 = FUNC_2(&VAR_14, VAR_15->item);
   if (!*VAR_17) {
    *VAR_17 = FUNC_11(sizeof(int));
    **VAR_17 = VAR_9;
   } else {
    if (VAR_9 >= **VAR_17)
     continue;
    **VAR_17 = VAR_9;
   }
   if (VAR_15->next)
    FUNC_0(&VAR_15->item->object,
      ((void*)0), &VAR_11);
   else {
    VAR_12 = VAR_15->item;
    VAR_9 = **FUNC_2(&VAR_14, VAR_12);
   }
  }
 }
 for (VAR_8 = 0; VAR_8 < VAR_14.slab_count; VAR_8++) {
  int VAR_18;

  if (!VAR_14.slab[VAR_8])
   continue;
  for (VAR_18 = 0; VAR_18 < VAR_14.slab_size; VAR_18++)
   FUNC_5(VAR_14.slab[VAR_8][VAR_18]);
 }
 FUNC_1(&VAR_14);

 return VAR_10;
}

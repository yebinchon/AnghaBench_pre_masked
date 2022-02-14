
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tag {int dummy; } ;
struct TYPE_4__ {unsigned int nr; TYPE_1__* objects; } ;
struct rev_info {int ignore_missing_links; TYPE_2__ pending; int repo; } ;
struct object_list {int dummy; } ;
struct object {scalar_t__ type; int flags; int oid; } ;
struct bitmap_index {struct bitmap* haves; struct bitmap* result; } ;
struct bitmap {int dummy; } ;
struct TYPE_3__ {struct object* item; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bitmap*,struct bitmap*) ;
 struct bitmap* FUNC_2 (struct bitmap_index*,struct rev_info*,struct object_list*,struct bitmap*) ;
 int FUNC_3 (struct bitmap_index*) ;
 int * FUNC_4 (struct tag*) ;
 int FUNC_5 (struct bitmap_index*,struct object_list*) ;
 scalar_t__ FUNC_6 (struct bitmap_index*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct object*,struct object_list**) ;
 scalar_t__ FUNC_9 (int ,struct bitmap_index*) ;
 struct object* FUNC_10 (int *,int *) ;
 int FUNC_11 () ;
 struct bitmap_index* FUNC_12 (int,int) ;

struct bitmap_index *FUNC_13(struct rev_info *VAR_3)
{
 unsigned int VAR_4;

 struct object_list *VAR_5 = ((void*)0);
 struct object_list *VAR_6 = ((void*)0);

 struct bitmap *VAR_7 = ((void*)0);
 struct bitmap *VAR_8 = ((void*)0);

 struct bitmap_index *VAR_9 = FUNC_12(1, sizeof(*VAR_9));


 if (FUNC_9(VAR_3->repo, VAR_9) < 0)
  goto cleanup;

 for (VAR_4 = 0; VAR_4 < VAR_3->pending.nr; ++VAR_4) {
  struct object *VAR_10 = VAR_3->pending.objects[VAR_4].item;

  if (VAR_10->type == VAR_0)
   FUNC_10(&VAR_10->oid, ((void*)0));

  while (VAR_10->type == VAR_1) {
   struct tag *VAR_11 = (struct tag *) VAR_10;

   if (VAR_10->flags & VAR_2)
    FUNC_8(VAR_10, &VAR_6);
   else
    FUNC_8(VAR_10, &VAR_5);

   VAR_10 = FUNC_10(FUNC_4(VAR_11), ((void*)0));
  }

  if (VAR_10->flags & VAR_2)
   FUNC_8(VAR_10, &VAR_6);
  else
   FUNC_8(VAR_10, &VAR_5);
 }






 if (VAR_6 && !FUNC_5(VAR_9, VAR_6))
  goto cleanup;


 if (!VAR_5)
  goto cleanup;






 if (FUNC_6(VAR_9) < 0)
  goto cleanup;

 FUNC_7(&VAR_3->pending);

 if (VAR_6) {
  VAR_3->ignore_missing_links = 1;
  VAR_8 = FUNC_2(VAR_9, VAR_3, VAR_6, ((void*)0));
  FUNC_11();
  VAR_3->ignore_missing_links = 0;

  if (VAR_8 == ((void*)0))
   FUNC_0("failed to perform bitmap walk");
 }

 VAR_7 = FUNC_2(VAR_9, VAR_3, VAR_5, VAR_8);

 if (!VAR_7)
  FUNC_0("failed to perform bitmap walk");

 if (VAR_8)
  FUNC_1(VAR_7, VAR_8);

 VAR_9->result = VAR_7;
 VAR_9->haves = VAR_8;

 return VAR_9;

cleanup:
 FUNC_3(VAR_9);
 return ((void*)0);
}

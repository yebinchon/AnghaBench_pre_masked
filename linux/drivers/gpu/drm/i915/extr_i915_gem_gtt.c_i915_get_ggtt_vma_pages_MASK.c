
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int type; int remapped; int rotated; } ;
struct i915_vma {TYPE_4__ ggtt_view; int * pages; TYPE_2__* obj; } ;
struct TYPE_7__ {int * pages; } ;
struct TYPE_8__ {TYPE_1__ mm; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;




 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (TYPE_4__*,TYPE_2__*) ;
 int * FUNC_6 (int *,TYPE_2__*) ;
 int * FUNC_7 (int *,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(struct i915_vma *VAR_0)
{
 int VAR_1;






 FUNC_1(!FUNC_4(VAR_0->obj));

 switch (VAR_0->ggtt_view.type) {
 default:
  FUNC_1(VAR_0->ggtt_view.type);

 case 131:
  VAR_0->pages = VAR_0->obj->mm.pages;
  return 0;

 case 128:
  VAR_0->pages =
   FUNC_7(&VAR_0->ggtt_view.rotated, VAR_0->obj);
  break;

 case 129:
  VAR_0->pages =
   FUNC_6(&VAR_0->ggtt_view.remapped, VAR_0->obj);
  break;

 case 130:
  VAR_0->pages = FUNC_5(&VAR_0->ggtt_view, VAR_0->obj);
  break;
 }

 VAR_1 = 0;
 if (FUNC_2(VAR_0->pages)) {
  VAR_1 = FUNC_3(VAR_0->pages);
  VAR_0->pages = ((void*)0);
  FUNC_0("Failed to get pages for VMA view type %u (%d)!\n",
     VAR_0->ggtt_view.type, VAR_1);
 }
 return VAR_1;
}

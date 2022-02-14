
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_placement {int num_placement; TYPE_2__* placement; } ;
struct TYPE_3__ {int size; int num_pages; } ;
struct ttm_buffer_object {int bdev; TYPE_1__ mem; } ;
struct drm_printer {int dummy; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 struct drm_printer FUNC_0 (int ) ;
 int FUNC_1 (struct drm_printer*,char*,...) ;
 int FUNC_2 (int ,struct drm_printer*,int) ;
 int FUNC_3 (TYPE_2__*,int*) ;

__attribute__((used)) static void FUNC_4(struct ttm_buffer_object *VAR_1,
     struct ttm_placement *VAR_2)
{
 struct drm_printer VAR_3 = FUNC_0(VAR_0);
 int VAR_4, VAR_5, VAR_6;

 FUNC_1(&VAR_3, "No space for %p (%lu pages, %luK, %luM)\n",
     VAR_1, VAR_1->mem.num_pages, VAR_1->mem.size >> 10,
     VAR_1->mem.size >> 20);
 for (VAR_4 = 0; VAR_4 < VAR_2->num_placement; VAR_4++) {
  VAR_5 = FUNC_3(&VAR_2->placement[VAR_4],
      &VAR_6);
  if (VAR_5)
   return;
  FUNC_1(&VAR_3, "  placement[%d]=0x%08X (%d)\n",
      VAR_4, VAR_2->placement[VAR_4].flags, VAR_6);
  FUNC_2(VAR_1->bdev, &VAR_3, VAR_6);
 }
}

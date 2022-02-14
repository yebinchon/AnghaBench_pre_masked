
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_operation_ctx {int member_0; int member_1; } ;
struct TYPE_4__ {int num_placement; } ;
struct drm_gem_vram_object {int bo; scalar_t__ pin_count; TYPE_2__ placement; TYPE_1__* placements; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_gem_vram_object*,unsigned long) ;
 int FUNC_1 (int *,int,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*,struct ttm_operation_ctx*) ;

int FUNC_4(struct drm_gem_vram_object *VAR_1, unsigned long VAR_2)
{
 int VAR_3, VAR_4;
 struct ttm_operation_ctx VAR_5 = { 0, 0 };

 VAR_4 = FUNC_1(&VAR_1->bo, 1, 0, ((void*)0));
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_1->pin_count)
  goto out;

 if (VAR_2)
  FUNC_0(VAR_1, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1->placement.num_placement; ++VAR_3)
  VAR_1->placements[VAR_3].flags |= VAR_0;

 VAR_4 = FUNC_3(&VAR_1->bo, &VAR_1->placement, &VAR_5);
 if (VAR_4 < 0)
  goto err_ttm_bo_unreserve;

out:
 ++VAR_1->pin_count;
 FUNC_2(&VAR_1->bo);

 return 0;

err_ttm_bo_unreserve:
 FUNC_2(&VAR_1->bo);
 return VAR_4;
}
